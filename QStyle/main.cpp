#include "mainwindow.h"


#include <QApplication>
#include <QWidget>
#include <QStyle>
#include <QPainter>
#include <QStyleOptionButton>


class CustomWidget : public QWidget
{
public:
    CustomWidget(QWidget *parent = nullptr) : QWidget(parent) {}

protected:
    void paintEvent(QPaintEvent *event) override
    {
        Q_UNUSED(event);
        QPainter painter(this);

        // Prepare style options for a checkbox indicator
        QStyleOptionButton opt;
        opt.initFrom(this); // Initialize with widget's properties
        opt.rect = QRect(20, 20, 20, 20); // Define the rectangle for drawing
        opt.state = QStyle::State_Enabled | QStyle::State_On; // Set state to enabled and checked

        // Draw the checkbox indicator using the current application style
        style()->drawPrimitive(QStyle::PE_IndicatorCheckBox, &opt, &painter, this);
    }
};



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //MainWindow w;
    //w.show();

    CustomWidget widget;
    widget.setWindowTitle("QStyle Simple Example");
    widget.resize(1000, 100);
    widget.show();


    return a.exec();
}
