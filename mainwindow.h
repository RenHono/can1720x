#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QQmlApplicationEngine>

class MainWindow:public QQmlApplicationEngine
{
public:
    explicit MainWindow();
    ~MainWindow();

    static MainWindow *getInstance();

private:

    static MainWindow * m_pMainWindow;
};

#endif // MAINWINDOW_H
