#ifndef DIET_PLAN_H
#define DIET_PLAN_H
#include <QString>
#include <QList>
#include <QMap>
#include <QDataStream>
class Diet_Plan
{
public:
    Diet_Plan();
    void createDietPlan();
    //////// Was Thinking of serializing the class but found easier way ////
    void serializeDietPlan(QDataStream &out) const;
    void deserializeDietPlan(QDataStream &in);
    void classToDataStream(QDataStream&);
    void DataStreamToClass(QDataStream &);
    ///////////////////////////////////////////////////////////////////////
    QString dietPlanToQStringDatabaseFormat(); // To save it inside Database
    static QList<QString> dietPlanToQListFromDataBaseFormat(QString dietPlanDBformat); // To show it to user and server
    struct day{
        QString name; // name of the day
        QMap<QString,QString> meal; // map <category, choice>
    };
private:
    day days[7];
};

#endif // DIET_PLAN_H
