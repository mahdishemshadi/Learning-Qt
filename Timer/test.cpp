#include "test.h"

Test::Test(QObject *parent) : QObject{parent} {
    m_count = 0;
    connect(&m_timer, &QTimer::timeout, this, &Test::timeout);
    m_timer.setInterval(1000);
    m_timer.start();
    // m_timer.stop();
}

void Test::timeout() {
    qInfo() << "Test !!";
    m_count ++;

    if (m_count >= m_max_count) {
        m_timer.stop();
        qInfo() << "Done!";
    }
}
