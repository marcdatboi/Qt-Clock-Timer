



#pragma once

#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QTimer>

class Stopwatch : public QPushButton {
    Q_OBJECT

    public:
        explicit Stopwatch(QWidget *parent = nullptr);
        ~Stopwatch();

    private slots:
        void updateDisplay();

    private:
        bool isStarted;
        QVBoxLayout *layout;
        QTimer *timer;
        QLabel *display;
        int counter;
};