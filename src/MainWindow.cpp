



#include <QMainWindow>
#include <QWidget>
#include "MainWindow.hpp"
#include "CustomDisplayWidget.hpp"

MainWindow::MainWindow(QWidget *parent) 
    : QMainWindow(parent)
    , mainWindowLayout(new QVBoxLayout(this)) 
    , centralWidget(new QWidget(this))
{
    this->setCentralWidget(this->centralWidget);
    this->centralWidget->setLayout(this->mainWindowLayout);
    this->setMinimumSize(800, 600);

    CustomDisplayWidget *screens = new CustomDisplayWidget(this);
    this->mainWindowLayout->addWidget(screens, 0, Qt::AlignCenter);
}