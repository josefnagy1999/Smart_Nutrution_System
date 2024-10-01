#ifndef PATIENT_INFO_H
#define PATIENT_INFO_H
#include <QString>
#include <QList>
#include <QDataStream>
class Patient_Info
{
private:
    struct patientPersonalInfo{
        QString username,password,fullName;
        int age;
        QChar gender;
    }personalInfo;
    struct patientHealthInfo{
        QList<QString> conditions;
        double BMI;
        QString BloodPressure;
    }healthInfo;
    QList<QString> currDietPlan;
    double averageFeedback;
public:
    Patient_Info();
    void setPaientPersonalInfo(QString userName, QString password,
                               QString fullName, int age , char gender);
    void setPatientHealthInfo(QList<QString>);
    void serializePatientInfo(QDataStream &out) const;
    void deserializePatientInfo(QDataStream &in);
    void classToDataStream(QDataStream&);
    void DataStreamToClass(QDataStream &);
    //setters
    void setaverageFeedback(double averageFeedback){
        this->averageFeedback = averageFeedback;
    }
    void setPatientUsername(QString username){
        personalInfo.username = username;
    }
    void setPatientPassword(QString password){
        personalInfo.password = password;
    }
    void setPatientFullName(QString fullName){
        personalInfo.fullName = fullName;
    }
    void setPatientAge(int age){
        personalInfo.age = age;
    }
    void setPatientGender(QChar gender){
        personalInfo.gender = gender;
    }
    void setPatientBMI(double BMI){
        healthInfo.BMI = BMI;
    }
    void setPatientBloodPressureCondition(QString BloodPressureCon){
        healthInfo.BloodPressure=BloodPressureCon;
    }
    void setPatientCurrDietPlan(QList<QString> dietPlan){
         currDietPlan = dietPlan;
    }
    //Get
    double getAverageFeedback(){
        return averageFeedback;
    }
    QString getPatientUsername(){
        return personalInfo.username;
    }
    QString getPatientPassword(){
        return personalInfo.password;
    }
    QString getPatientFullName(){
        return personalInfo.fullName;
    }
    int getPatientAge(){
        return personalInfo.age;
    }
    QChar getPatientGender(){
        return personalInfo.gender;
    }
    double getPatientBMI(){
        return healthInfo.BMI;
    }
    QString getPatientBloodPressureCondition(){
        return healthInfo.BloodPressure;
    }
    QList<QString> getPatientCurrDietPlan(){
        return currDietPlan;
    }
    QString getPatientHealthConditions(){
        QString healthConditions = "";
        for(const auto& condition : healthInfo.conditions )
            healthConditions+=(condition +'$');
        return healthConditions;
    }
};

#endif // PATIENT_INFO_H
