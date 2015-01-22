#include "MainWindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    setWindowTitle(tr("Test Window"));
    setFixedWidth(520);
}

MainWindow::~MainWindow()
{
}

