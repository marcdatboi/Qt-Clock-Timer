



#pragma once

// Imports
#include <QVBoxLayout>
#include <QWidget>
#include <QMainWindow>

class MainWindow : public QMainWindow {
    Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);

    private:
        QWidget *centralWidget;
        QVBoxLayout *mainWindowLayout;

};