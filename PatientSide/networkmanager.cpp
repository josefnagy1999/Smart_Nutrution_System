#include "networkmanager.h"
//#include "patientdialog.h"
#include <QMessageBox>

/////////////// Multiple constructors to maniplute ui with networkmanage////////
NetworkManager::NetworkManager(QObject * parent,QDialog * dialog)
    : QObject(parent), socket(new QTcpSocket(this)),currentDialog(dialog){
    networkConnect();
 }

NetworkManager::NetworkManager(QObject * parent, QMainWindow *MainWindow)
    : QObject(parent), socket(new QTcpSocket(this)),currentMainWindow(MainWindow){
    networkConnect();
}
void NetworkManager::networkConnect(){
    connect(socket,&QTcpSocket::connected,this,&NetworkManager::onConnect);
    connect(socket, &QTcpSocket::readyRead, this, &NetworkManager::receivedResponse);
    connect(socket, &QTcpSocket::errorOccurred, this, &NetworkManager::onError);
}
void NetworkManager::onError()
{
    qWarning() << "Socket error:" << socket->errorString();
}
void NetworkManager::onConnect(){
    qInfo("Connected!");
}
void NetworkManager::start()
{
    qInfo("Trying to Connect...");
    socket->connectToHost(QHostAddress::LocalHost, 4500);
    // Wait for the connection to be established or timeout
    if (socket->waitForConnected(2000)) {
        qDebug() << "Connected to server!";
    } else {
        qDebug() << "Failed to connect to server:" << socket->errorString();
    }
}

void NetworkManager::stop()
{
    if (socket->state() == QTcpSocket::ConnectedState) {
        socket->disconnectFromHost();
    }
}
void NetworkManager::sendRequest(QByteArray &request)
{
    qInfo("Client: Sending Request");
    socket->write(request);
    socket->flush();
}

void NetworkManager::sendRequest(QString type, QString arg1, QString arg2)
{
    qInfo() << "client Sending request" << type;
    QByteArray message;
    QDataStream stream(&message,QIODevice::WriteOnly);
    stream << type;
    stream << arg1;
    stream << arg2;
    socket->write(message);
    socket->flush();
}

void NetworkManager::receivedResponse()
{
    qInfo() << "Client recevived response";
    QByteArray incomingData = socket->readAll();
    // Process Protocol
    QDataStream stream(&incomingData, QIODevice::ReadOnly);
    QString type;
    // Read type
    stream >> type;
    // process response
    proccessResponse(type, stream);
}


void NetworkManager::proccessResponse(QString type, QDataStream &body)
{
    qInfo() << type;
    ///////// Sign-up response ////////////
    if (type == "signup"){
        QString result;
        body >> result;
        if (result == "user exists"){
            QMessageBox::warning(currentDialog,
                               "Username used",
                                 "<font color ='black'>Username Exists:"
                                 "<br>Please, use another one</font color>");

        }else if (result == "success"){
            QMessageBox::about(currentDialog,
                                 "Congratulations",
                               "<font color ='green'>You can use the app now!"
                               "</font color>");
            currentDialog->close();
        }else{
            QMessageBox::critical(currentDialog,
                                  "User sign-up Failed",
                                  "<font color ='red'>Please, Review with support team"
                                  "</font color>");
        }
    }
    ///////////////////////////////////////////

    /////// Sign-In Authentication response///////////
    else if (type == "signin"){
        QString result;
        body >> result;
        if (result=="success"){
            emit signin();
        }else{
            QMessageBox::warning(currentMainWindow,"Sign-In",
                                 "<font color ='black'>Wrong username or password</font color>");
        }
    }
    /////////////////////////////////////////////////

    ///////// Receiving Diet Plan //////////////////
    else if(type == "DietPlan"){
        QList<QString> dietPlan;
        body >> dietPlan;

        this->ui->dietPlanList->clear();
        this->ui->dietPlanList->addItems(dietPlan);
    }
}


