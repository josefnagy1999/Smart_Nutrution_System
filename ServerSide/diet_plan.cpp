#include "diet_plan.h"
#include "qdebug.h"
// We can use QMap here as well but just wanted to integrate
// The use of C++ native STL libraries with Qt
std::map<std::string, std::vector<std::string>> categories={
    {"carbs",
        {"Rice", "Pasta", "Bread", "Oats", "Quinoa"}},
    {"protien",
        {"Tofu", "Eggs","Chicken" ,"Beef", "Legumes"}},
    {"sweets",
        {"Chocolate", "Cookies", "Cake", "Ice Cream", "Brownies"}},
    {"veggies",
        {"Broccoli", "Spinach", "Carrots", "Bell Peppers", "Cauliflower"}},

};
std::vector<QString> dayOfWeek = {"Sun", "Mon","Tues",
                                        "Wed","Thurs", "Fri","Sat"};
Diet_Plan::Diet_Plan() {}

void Diet_Plan::createDietPlan()
{
    std::srand(std::time(0));
    for(int day = 0 ; day<7;++day){
        days[day].name = dayOfWeek[day];
        for(auto &food : categories){
            QString foodCategory = QString::fromStdString(food.first);
            QString foodChoice = QString::fromStdString(food.second[std::rand() %food.second.size()]);
            days[day].meal.insert(foodCategory ,foodChoice);
        }
    }
    // Show Current Diet Plan for Testing Purposes ONLY
    // for(int day = 0 ; day<7;++day){
    //     qInfo() << days[day].name;
    //     for(const auto &meal : days[day].meal.keys()){
    //         qInfo() << meal << "  " << days[day].meal.value(meal);
    //     }
    // }

}
/////// Format is day1: carbs, protin, etc.. $day2: carbs, ...........
QString Diet_Plan::dietPlanToQStringDatabaseFormat()
{
    QString result="";
    for(int day = 0 ; day<7;++day){
        result+= (days[day].name + ':');
        for(const auto &meal : days[day].meal.keys()){
            result+=(' '+ days[day].meal.value(meal));
        }
        result+='$';
    }
    return result;
}

QList<QString> Diet_Plan::dietPlanToQListFromDataBaseFormat(QString dietPlanDBformat)
{
    QList<QString> result = dietPlanDBformat.split(u'$', Qt::SkipEmptyParts);
    return result;
}


void Diet_Plan::serializeDietPlan(QDataStream &out) const
{
    for(auto day : days){
        out<< day.name;
        out<< day.meal;
    }
}

void Diet_Plan::deserializeDietPlan(QDataStream &in)
{
    for(auto day : days){
        in >>day.name;
        in >>day.meal;
    }
}

QDataStream &operator<<(QDataStream &out, const Diet_Plan &obj) {
    obj.serializeDietPlan(out);
    return out;
}

QDataStream &operator>>(QDataStream &in, Diet_Plan &obj) {
    obj.deserializeDietPlan(in);
    return in;
}

void Diet_Plan::classToDataStream(QDataStream &dataStream)
{
    dataStream << *this;
}
void Diet_Plan::DataStreamToClass(QDataStream &dataStream)
{
    dataStream >> *this;
}
