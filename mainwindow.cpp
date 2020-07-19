#include "mainwindow.h"

MainWindow * MainWindow::m_pMainWindow = nullptr;

MainWindow::MainWindow()
{

}

MainWindow::~MainWindow()
{

}

MainWindow *MainWindow::getInstance()
{

    if(m_pMainWindow == nullptr){
        m_pMainWindow = new MainWindow();
    }

    return m_pMainWindow;
}
