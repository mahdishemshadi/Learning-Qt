#include "age_calculator.h"

age_calculator::age_calculator(QObject *parent)
    : QObject{parent}
{}

int age_calculator::getAge() const{
    return age;
}

void age_calculator::setAge(int newAge){
    age = newAge;
}

QString age_calculator::getName() const {
    return name;
}

void age_calculator::setName(QString newName){
    name = newName;
}

int age_calculator::dogYears() const{
    return dogYearsFactor * age;
}

int age_calculator::catYears() const{
    return catYearsFactor * age;
}

int age_calculator::humanYears() const{
    return humanYearsFactor * age;
}
