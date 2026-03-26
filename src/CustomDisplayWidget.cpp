



// Imports
#include <QWidget>
#include "CustomDisplayWidget.hpp"
#include "Clock.hpp"
#include "Stopwatch.hpp"


CustomDisplayWidget::CustomDisplayWidget(QWidget *parent)
    : QStackedWidget(parent)
    , clockWidget(new QWidget(this))
    , stopwatchWidget(new QWidget(this))

    , clockWidgetLayout(new QVBoxLayout(this))
    , stopwatchWidgetLayout(new QVBoxLayout(this))
{
    // Layout setup
    this->clockWidget->setLayout(this->clockWidgetLayout);
    this->stopwatchWidget->setLayout(this->stopwatchWidgetLayout);

    // Adding Widgets to the stacked widget obj
    this->addWidget(this->clockWidget);
    this->addWidget(this->stopwatchWidget);


    // --- Clock Setup ---
    Clock *clock = new Clock(this);
    clock->setMinimumSize(500, 200);
    this->clockWidgetLayout->addWidget(clock);


    // --- Timer Setup ---
    Stopwatch *stopwatch = new Stopwatch(this);
    stopwatch->setMinimumSize(500, 200);
    this->stopwatchWidgetLayout->addWidget(stopwatch);

    // Whenever the clock is clicked, it will transition to the timer
    connect(clock, &Clock::clicked, [=](){
        this->setCurrentIndex(1);
    });

    // Whenever the timer is right-clicked, it will turn back into the clock
    stopwatch->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(stopwatch, &QPushButton::customContextMenuRequested, [=]() {
        this->setCurrentIndex(0);
    });
}


CustomDisplayWidget::~CustomDisplayWidget() {}