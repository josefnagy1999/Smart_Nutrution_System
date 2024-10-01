#ifndef NETWORKMANAGER_H
#define NETWORKMANAGER_H
#include "ui_patientdialog.h"
#include <QObject>
#include <QTcpSocket>
#include <QHostAddress>
#include <QMainWindow>
class NetworkManager :public QObject
{
    Q_OBJECT
public:

    explicit NetworkManager(QObject *parent = nullptr,QDialog * = nullptr);
    explicit NetworkManager(QObject *parent = nullptr,QMainWindow * = nullptr);
    void start();
    void stop();
    void sendRequest(QByteArray &request);
    void sendRequest(QString type,QString arg1 ="",QString arg2 ="");
    void networkConnect();
    Ui::PatientDialog *ui;
private slots:
    void receivedResponse();
    void onConnect();
    void onError();

signals:
    void signin();
private:
    void proccessResponse(QString, QDataStream&);
    QTcpSocket *socket;
    QDialog *currentDialog;
    QMainWindow *currentMainWindow;
};

#endif // NETWORKMANAGER_H
