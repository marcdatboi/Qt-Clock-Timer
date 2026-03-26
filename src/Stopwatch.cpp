



#include <QTime>
#include <QFontDatabase>
#include "Stopwatch.hpp"

/*
 * TODO:
 * Change the font from the stopwatch to look like the clock using QLCDNumber
 * Ensure left-clicking the timer button will start the timer
 * When the timer is right clicked, the widget should change back to the clock.
 */
Stopwatch::Stopwatch(QWidget *parent)
    : QPushButton(parent)
    , layout(new QVBoxLayout(this))
    , timer(new QTimer(this))
    , display(new QLabel(this))
    , counter(0)
    , isStarted(false)
{
    this->layout->addWidget(display);
    this->display->setText("Click to Start");

    // Creating a font so the timer doesnt shake
    QFont monoFont = QFontDatabase::systemFont(QFontDatabase::FixedFont);
    monoFont.setPointSize(24);
    this->display->setFont(monoFont);

    // Alignment and functionality
    this->display->setAlignment(Qt::AlignCenter);
    connect(this->timer, &QTimer::timeout, this, &Stopwatch::updateDisplay);

    // Make sure timer starts when the button is left-clicked
    connect(this, &QPushButton::clicked, [this]() {

        // Start the timer if its not started and end timer if already started
            if (!this->isStarted) {
                this->timer->start();
                this->isStarted = true;
            }
            else {
                this->timer->stop();
                this->isStarted = false;
            }
    });
}

void Stopwatch::updateDisplay() {
    QTime time(0, 0);
    time = time.addMSecs(this->counter);
    QString timeTextFormatted = time.toString("hh:mm:ss");
    this->display->setText(timeTextFormatted);

    this->counter++;
}

Stopwatch::~Stopwatch() {}