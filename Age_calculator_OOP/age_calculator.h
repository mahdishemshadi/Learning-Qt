#ifndef AGE_CALCULATOR_H
#define AGE_CALCULATOR_H

#include <QObject>

class age_calculator : public QObject
{
    Q_OBJECT
public:
    explicit age_calculator(QObject *parent = nullptr);

    int getAge() const;
    void setAge(int newAge);

    QString getName() const;
    void setName(QString newName);

private:
    int age;
    QString name;
};

#endif // AGE_CALCULATOR_H
