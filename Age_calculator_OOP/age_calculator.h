#ifndef AGE_CALCULATOR_H
#define AGE_CALCULATOR_H

#include <QObject>

class age_calculator : public QObject
{
    Q_OBJECT
public:
    explicit age_calculator(QObject *parent = nullptr);

signals:
};

#endif // AGE_CALCULATOR_H
