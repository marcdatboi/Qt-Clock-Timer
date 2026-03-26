



#include <QLCDNumber>
#include <QTime>
#include <QVBoxLayout>
#include "Clock.hpp"


Clock::Clock(QWidget *parent)
    : QPushButton(parent)
    , timer(new QTimer(this))
    , clockDisplay(new QLCDNumber(this))
{
    this->initializeClock(); // Show the time

}

void Clock::initializeClock() {
    /*
     * Initializes the clock object to display the current time.
     *
     * Params: None
     * Exceptions: None
     * Return Type: void
     *
     * This object displays time through a flat QLCDNumber display to show a time format using the HH:MM:SS format,
     * The timer updates every second using the 'this->updateDisplay()' method which changes the display to match the current
     * time every second
     */


    // --- Clock Configs ---
    this->clockDisplay->setDigitCount(8);
    this->clockDisplay->setSegmentStyle(QLCDNumber::Flat);

    // Layout
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(this->clockDisplay);

    // Timer
    connect(this->timer, &QTimer::timeout, this, &Clock::updateDisplay);
    timer->start(1000);
    updateDisplay();
}

void Clock::updateDisplay() {
    /*
     * Updates the timer display to reflect a time using the HH:MM:SS format with a QString
     *
     * Params: None
     * Exceptions: None
     * Return type: void
     */
    QString updatedText = QTime::currentTime().toString("hh:mm:ss");
    this->clockDisplay->display(updatedText);
}

Clock::~Clock() {}
