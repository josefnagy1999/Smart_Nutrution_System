#include "dbmanager.h"
#include "diet_plan.h"
#include <QMessageBox>
dbManager::dbManager() {
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(QCoreApplication::applicationDirPath() + "/smart_nutrution_sys_db");
    openConnection();
}

// Making sure connection to database is successful
void dbManager::openConnection()
{
    QMessageBox qmsbx;
    qmsbx.setWindowTitle("Database Status");
    if(QFileInfo::exists(database.databaseName())){
        if(database.open()){
            qmsbx.setText("Connection to Database is Successful");
            qmsbx.setIcon(QMessageBox::Information);
        }else
        {
            qmsbx.setText("Connection to Database is Unsuccessful");
            qmsbx.setIcon(QMessageBox::Critical);
        }

    }else{
        qmsbx.setText("Database doesn't Exists");
        qmsbx.setIcon(QMessageBox::Critical);
    }
    qmsbx.exec();

}

QString dbManager::insertNewpatient(Patient_Info &patientInfo)
{
    QSqlQuery query;
    query.prepare("SELECT username From user"
                  " WHERE username = ? Limit 1");
    query.addBindValue(patientInfo.getPatientUsername());
    query.exec();
    if(query.next()){
        return "user exists";
    }
    else{
        query.prepare("INSERT INTO user"
                      "(username,password,full_name,gender,age,healthConditions)"
                      " Values(:username,:password,:full_name,:gender,:age,:healthConditions)");
        query.bindValue(":username",patientInfo.getPatientUsername());
        query.bindValue(":password",patientInfo.getPatientPassword());
        query.bindValue(":full_name",patientInfo.getPatientFullName());
        query.bindValue(":gender",patientInfo.getPatientGender());
        query.bindValue(":age",patientInfo.getPatientAge());
        query.bindValue(":healthConditions",patientInfo.getPatientHealthConditions());
        if(query.exec()){
            return "success";
        }else
        {
            qDebug()<<query.lastError();
            return "fail";
        }
    }
}

bool dbManager::checkCredentials(QString username, QString password)
{
    /////// Naive way to authenticate
    /// /// Better use a Hash-function to store and retrieve Passwords
    QSqlQuery query;
    query.prepare("SELECT username ,password "
                  " FROM user"
                  " WHERE username = ? ");
    query.addBindValue(username);
    query.exec();
    //qDebug()<<query.record();
    if(query.next()){
        QString savedPassword = query.value("password").toString();
        if(savedPassword == password)
        {
            return true;
        }
    }
    return false;
}

Patient_Info dbManager::fetch_UserData(QString username)
{
    Patient_Info patient;
    QSqlQuery query;
    query.prepare("SELECT * from user "
                  " WHERE username=:username");
    query.bindValue(":username",username);
    query.exec();
    if (query.next()){
        patient.setPatientUsername(query.value("username").toString());
        patient.setPatientPassword(query.value("password").toString());
        patient.setPatientFullName(query.value("full_name").toString());
        patient.setPatientGender(query.value("gender").toString()[0]);
        patient.setPatientAge(query.value("age").toInt());
        patient.setPatientBMI(query.value("bmi_val").toDouble());
        patient.setPatientBloodPressureCondition(query.value("bloodPressure_condition").toString());
    }

    patient.setPatientCurrDietPlan(Diet_Plan::dietPlanToQListFromDataBaseFormat(getLastDietPlan(username)));
    return patient;
}

QList<QString> dbManager::getPatients()
{
    QSqlQuery query;
    query.prepare("SELECT username "
                  " FROM user");
    query.exec();
    //qDebug()<<query.record();
    QList<QString> patients;
    while(query.next()){
        patients.append(query.value("username").toString());
    }
    return patients;
}

void dbManager::addDietPlan(QString username, QString dietPlan)
{
    QSqlQuery query;
    query.prepare("INSERT INTO dietPlan"
                  "(content,username)"
                  " Values(:content,:username)");
    query.bindValue(":content",dietPlan);
    query.bindValue(":username",username);
    if(query.exec()){
        qInfo()<< "successfully added the diet plan to user " << username;
    }
    else{
        qDebug()<<query.lastError();
        qInfo() << "failed to insert diet plan to user "<< username ;
    }

}

int dbManager::getLastDietPlanID(QString username)
{
    qInfo() <<"Getting last id for user "<<username;
    QSqlQuery query;
    query.prepare("SELECT max(id)"
                  " FROM dietPlan"
                  " WHERE username =:username");
    query.bindValue(":username",username);
    query.exec();
    qDebug()<<query.record().fieldName(0);
    if(query.next()){
        int lastDietPlanId = query.value("max(id)").toInt();
        qInfo()<< "Last id is "<< lastDietPlanId;
        return lastDietPlanId;
    }
    return -1;
}

void dbManager::setFeedbackLastDietPlan(QString username, int feedback)
{
    int lastDietPlanId = getLastDietPlanID(username);
    if (lastDietPlanId==-1)
        return;

    QSqlQuery query;
    query.prepare("UPDATE dietPlan"
                  " SET feedback=:feedback"
                  " WHERE id =:id");
    query.bindValue(":feedback",feedback);
    query.bindValue(":id",lastDietPlanId);
    if(query.exec()){
        qInfo()<< "successfully updated the diet plan feedback to user " << username;
    }
    else{
        qDebug()<<query.lastError();
        qInfo() << "failed to udate diet plan feedback to user "<< username ;
    }
}

QString dbManager::getLastDietPlan(QString username)
{
    int lastDietPlanId = getLastDietPlanID(username);
    if (lastDietPlanId == -1 ){
        return "Empty Diet Plan";
    }
    QSqlQuery query;
    query.prepare("SELECT content"
                  " FROM dietPlan"
                  " WHERE id = ? ");
    query.addBindValue(lastDietPlanId);
    query.exec();
    //qDebug()<<query.record();
    if(query.next()){
        QString lastDietPlan = query.value("content").toString();
        return lastDietPlan;
    }
    return "NOT Found";
}
