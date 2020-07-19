#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <QObject>
#include <QThread>
#include <QDebug>

#include "mainwindow.h"
#include "canthread.h"


int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    MainWindow *engine = MainWindow::getInstance();


    CanThread *canThread = new CanThread();

    canThread->start();

    qDebug()<<QObject::tr("main QThread::currentThreadId()==")<<QThread::currentThreadId();







    engine->load(QUrl(QStringLiteral("qrc:/main.qml")));

    if (engine->rootObjects().isEmpty())
        return -1;

    return app.exec();
}
