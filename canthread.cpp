#include "canthread.h"

#include <QDebug>

CanThread::CanThread()
{
    m_isStop = false;
}

void CanThread::closeThread()
{
    m_isStop = true;
}

void CanThread::run()
{

    while (1) {
        if(m_isStop){
            return;
        }

        qDebug()<<tr("CanThread QThread::currentThreadId()==")<<QThread::currentThreadId();

        sleep(1);
    }
}


