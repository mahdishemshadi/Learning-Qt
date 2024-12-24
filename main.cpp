#include<iostream>
#include<QCoreApplication>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;
    int minAge = 1;
    int maxAge = 120;
    qDebug("Enter your age");
    cin >> age;

    if (age >= minAge && age <= maxAge){
        qDebug() << "Your age is:" << age;

        int dogYears = age * 7;
        qDebug() << "Your age in dog years is:" << dogYears;
    }
    else{
        qWarning("Warning: You entered wrong age");
    }

    return a.exec();
}
