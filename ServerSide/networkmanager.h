#ifndef NETWORKMANAGER_H
#define NETWORKMANAGER_H

#include "dbmanager.h"
#include "ui_mainwindow.h"
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
class NetworkManager : public QObject
{
    Q_OBJECT

public:
    explicit NetworkManager(QObject *parent = nullptr);
    NetworkManager();
    ~NetworkManager();
    void start();
    void stop();
    void sendResponse(QString type, QList<QString> body, QTcpSocket *socket);
    void sendResponse(QString type, QString body, QTcpSocket *socket);
    void receivedRequest(QString type, QDataStream &body,QTcpSocket *socket);
    Patient_Info getUserInfo(QString);
    Ui::MainWindow *ui;
private slots:
    void onNewConnection();
private:
    void fillServerUsersList();
    void processRequest(QTcpSocket *socket);
    QTcpServer *server;
    dbManager * dataBaseManager;
};

#endif // NETWORKMANAGER_H
