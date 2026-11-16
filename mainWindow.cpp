#include "mainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->resize(800, 600);
    this->setWindowTitle("MainWindow");

    label = new QLabel("Hello World", this);
    label->setGeometry(260, 140, 81, 71);
}

MainWindow::~MainWindow()
{
}
