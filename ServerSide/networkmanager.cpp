#include "networkmanager.h"
#include "diet_plan.h"
#include "patient_info.h"

NetworkManager::NetworkManager(QObject *parent)
    : QObject(parent), server(new QTcpServer(this)),
    dataBaseManager(new dbManager())
{
    connect(server, &QTcpServer::newConnection, this, &NetworkManager::onNewConnection);
}

NetworkManager::~NetworkManager()
{
    stop();
}
void NetworkManager::start(){
    if (!server->listen(QHostAddress::Any, 4500)) {
        qInfo()<<(server->errorString());
    }else{
        qInfo()<<"Server is Listening";
    }
    if(server->waitForNewConnection(5000)){
        qInfo()<<(server->errorString());
    }
    fillServerUsersList();
}
void NetworkManager::stop(){
    server->close();
}



void NetworkManager::onNewConnection()
{
    // Implement MultiThreading
    qInfo()<<"Received a new connection";
    QTcpSocket *clientSocket = server->nextPendingConnection();
    connect(clientSocket, &QTcpSocket::readyRead, [this, clientSocket]() {
        processRequest(clientSocket);
    });
}

void NetworkManager::fillServerUsersList()
{
    QList<QString> patiens = dataBaseManager->getPatients();
    qInfo() << patiens;
    ui->listWidget->addItems(patiens);
}


void NetworkManager::processRequest(QTcpSocket *socket)
{
    qInfo("I received a request");
    QByteArray incomingData = socket->readAll();
    QDataStream stream(&incomingData, QIODevice::ReadWrite);
    QString type;

    // Read type
    stream >> type;
    // Process request
    receivedRequest(type,stream,socket);

}

void NetworkManager::receivedRequest(QString type,QDataStream &body,QTcpSocket *socket )
{
    ///////// Refactor to multiple functions on function type for readability ///////////
    ///////// create a cpp file for managing requests and same for responses ///////////
    qInfo()<<type;
    //////////////////////// Handling Requests /////////////

    /////////////////////// Handling New Patients (Sign-Ups) //////////////////
    if(type == "NewPatient"){
        Patient_Info newPatient;
        newPatient.DataStreamToClass(body);
        QString result = dataBaseManager->insertNewpatient(newPatient);
        if (result == "user exists") // case: user exists
            sendResponse("signup","user exists",socket);
        else if (result == "success"){ // case: user signed-up successfully
            ui->listWidget->addItem(newPatient.getPatientUsername());
            sendResponse("signup","success",socket);
        }else{
            // case : failed signing-up
            sendResponse("signup","fail",socket);
        }
    }
    //////////////////////////////////////////////////////

    /////////////////// Handling Sign-ins //////////////////
    else if(type == "signin"){
        QString username,password;
        body >> username;
        body >> password;
        if(dataBaseManager->checkCredentials(username,password)){
            // case : Successful Sign-In
            sendResponse("signin","success",socket);
        }else{
            // case : Failed Sign-In
            sendResponse("signin","fail",socket);
        }
    }
    ////////////////////////////////////////////////////////
    /////////////////// Set socket Name ////////////////////
    else if (type == "username"){
        QString username;
        body>>username;
        socket->setObjectName(username);
    }
    ///
    /////////////////// New Plan Diet Request //////////////////
    else if(type == "NewDietPlan"){
        Diet_Plan dietPlan;
        dietPlan.createDietPlan();
        // Adding the dietPlan to our dataBase to retrive it when needed
        QString dietPlanStr = dietPlan.dietPlanToQStringDatabaseFormat();
        dataBaseManager->addDietPlan(socket->objectName(),dietPlanStr);
        sendResponse("DietPlan",
                     dietPlan.dietPlanToQListFromDataBaseFormat(dietPlanStr),socket);
    }
    /////////////////////////////////////////////////////////////
    ///////////////// Set FeedBack ////////////////////
    else if(type == "feedback"){
        QString feedbackScore;
        body >> feedbackScore;
        dataBaseManager->setFeedbackLastDietPlan(socket->objectName(),feedbackScore.toInt());
    }
    /////////////////////////////////////////////////////
    else if (type == "lastDietPlan"){
        QString lasrDietPlan = dataBaseManager->getLastDietPlan(socket->objectName());
        sendResponse("DietPlan",
                     Diet_Plan::dietPlanToQListFromDataBaseFormat(lasrDietPlan),socket);
    }
}

Patient_Info NetworkManager::getUserInfo(QString username)
{
    return dataBaseManager->fetch_UserData(username);
}

void NetworkManager::sendResponse(QString type, QString body, QTcpSocket *socket)
{
    qInfo("Server: Sending Response");
    qInfo()<< type <<"  "<< body;
    QByteArray message;
    QDataStream DataStream(&message, QIODevice::ReadWrite);
    DataStream <<type << body;
    socket->write(message);
    socket->flush();
}
void NetworkManager::sendResponse(QString type, QList<QString> body, QTcpSocket *socket)
{
    if (socket->state() != QTcpSocket::ConnectedState) {
        qWarning() << "Socket is not connected. Cannot send data.";
        return;
    }
    qInfo("Server: Sending Response");
    qInfo()<< type <<"  "<< body;
    QByteArray message;
    QDataStream DataStream(&message, QIODevice::ReadWrite);
    DataStream <<type<<body;
    socket->write(message);
    socket->flush();
}
