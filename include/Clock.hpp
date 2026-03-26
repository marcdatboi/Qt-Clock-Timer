



#include <QWidget>
#include <QPushButton>
#include <QTimer>
#include <QLCDNumber>

class Clock : public QPushButton {
    Q_OBJECT

    public:
        explicit Clock(QWidget *parent = nullptr);
        ~Clock();

    private slots:
        void updateDisplay();

    private:
        QTimer *timer;
        QLCDNumber *clockDisplay;

        // Private Function members
        void initializeClock();

};