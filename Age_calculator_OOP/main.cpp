#include <QCoreApplication>

#include "age_calculator.h"

void print(age_calculator& calc){

    qDebug() << "Name:" << calc.getName() << "human years:" << calc.humanYears();
    qDebug() << "Name:" << calc.getName() << "dog years:" << calc.dogYears();
    qDebug() << "Name:" << calc.getName() << "catn years:" << calc.catYears();

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    age_calculator brayan;
    age_calculator tammy;

    brayan.setName("Brayan");
    tammy.setName("Tammy");

    brayan.setAge(26);
    tammy.setAge(27);

    print(brayan);
    print(tammy);

    return a.exec();
}
