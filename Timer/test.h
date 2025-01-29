#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QTimer>
#include <QDebug>

class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = nullptr);

private:
    const int m_max_count = 5;

    QTimer m_timer;

    int m_count;

signals:

public slots:
    void timeout();
};

#endif // TEST_H
