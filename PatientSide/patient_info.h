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
    }healthInfo;

public:
    Patient_Info();
    void setPaientPersonalInfo(QString,QString,QString,int,char);
    void setPatientHealthInfo(QList<QString>);
    void serializePatientInfo(QDataStream &out) const;
    void deserializePatientInfo(QDataStream &in);
    void classToDataStream(QDataStream&);
    void DataStreamToClass(QDataStream &);
};

#endif // PATIENT_INFO_H
