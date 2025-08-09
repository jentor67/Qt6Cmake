#include "mywidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget{parent}
{
    // Set a fixed size for demonstration
    setFixedSize(300, 200);

}

void MyWidget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event); // QPaintEvent is typically used for optimization (e.g., event->rect())

    QPainter painter(this); // Create a QPainter for this widget

    // Set pen and brush for drawing a rectangle
    painter.setPen(QPen(Qt::blue, 2)); // Blue pen with 2 pixel width
    painter.setBrush(Qt::lightGray); // Light gray fill

    // Draw a rectangle
    painter.drawRect(50, 50, 200, 100); // x, y, width, height

    // Set a new pen for text
    painter.setPen(Qt::red);

    // Set font for text
    painter.setFont(QFont("Arial", 16, QFont::Bold));

    // Draw text
    painter.drawText(60, 90, "Hello QPainter!");
}
