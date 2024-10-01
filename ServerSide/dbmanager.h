#ifndef DBMANAGER_H
#define DBMANAGER_H
#include "patient_info.h"
#include <QtSql>
#include <QtDebug>
class dbManager
{
public:
    dbManager();
    QString insertNewpatient(Patient_Info&);
    bool checkCredentials(QString username, QString pass);
    Patient_Info fetch_UserData(QString username);
    QList<QString> setUserBmi(QString username, double bmiVal, QString bmiCondition );
    QList<QString> setUserBloodPressureCondition(QString username, QString bloodPressureCon);
    QList<QString> getPatients();
    void addDietPlan(QString username, QString dietPlan);
    int getLastDietPlanID(QString);
    void setFeedbackLastDietPlan(QString,int);
    QString getLastDietPlan(QString);
private: // Fields
    QSqlDatabase database;
private: // Methods
    void openConnection();
};

#endif // DBMANAGER_H
