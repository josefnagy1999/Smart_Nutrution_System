#include "patient_info.h"
#include <QFile>
Patient_Info::Patient_Info() {}
#define patient this->personalInfo
void Patient_Info::setPaientPersonalInfo(QString userName, QString password,
                                         QString fullName, int age , char gender)
{
    patient.username = userName;
    patient.password = password;
    patient.fullName = fullName;
    patient.age = age;
    patient.gender = gender;
}

void Patient_Info::setPatientHealthInfo(QList<QString> healthInfo)
{
    this->healthInfo.conditions = healthInfo;
}

void Patient_Info::serializePatientInfo(QDataStream &out) const
{
    out<< patient.username;
    out<< patient.password;
    out<< patient.fullName;
    out<< patient.age;
    out<<patient.gender;
    out<< healthInfo.conditions;
}

void Patient_Info::deserializePatientInfo(QDataStream &in)
{
    in >> patient.username;
    in >>patient.password;
    in >> patient.fullName;
    in >> patient.age;
    in >> patient.gender;
    in >> healthInfo.conditions;
}

QDataStream &operator<<(QDataStream &out, const Patient_Info &obj) {
    obj.serializePatientInfo(out);
    return out;
}

QDataStream &operator>>(QDataStream &in, Patient_Info &obj) {
    obj.deserializePatientInfo(in);
    return in;
}

void Patient_Info::classToDataStream(QDataStream &dataStream)
{
    dataStream << *this;
}
void Patient_Info::DataStreamToClass(QDataStream &dataStream)
{
    dataStream >> *this;
}
