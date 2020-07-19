#ifndef CANTHREAD_H
#define CANTHREAD_H

#include <QThread>

class CanThread:public QThread
{
public:
    CanThread();

    void closeThread();

    void test();

protected:
    virtual void run() override;

private:
    volatile bool m_isStop;
};

#endif // CANTHREAD_H
