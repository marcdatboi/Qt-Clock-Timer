



// Imports
#include <QStackedWidget>
#include <QWidget>
#include <QVBoxLayout>

class CustomDisplayWidget : public QStackedWidget {
    Q_OBJECT

    public:
        CustomDisplayWidget(QWidget *parent = nullptr);
        ~CustomDisplayWidget();


    private:
        QWidget *clockWidget;
        QWidget *stopwatchWidget;

        QVBoxLayout *clockWidgetLayout;
        QVBoxLayout *stopwatchWidgetLayout;


};