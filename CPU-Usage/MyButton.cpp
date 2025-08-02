    // MyButton.cpp
#include "MyButton.h"
#include <QDebug>
#include <QMouseEvent>

#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStyleFactory>
#include <QtWidgets/QStyleOptionButton>
#include <QtGui/QPainter>

MyButton::MyButton(const QString &text, QWidget *parent)
    : QPushButton(text, parent)
{
    // Constructor initialization
    connect(this, &MyButton::clicked, this, &MyButton::handleButtonClick);
}

void MyButton::handleButtonClick()
{
    qDebug() << "MyButton clicked!";
    emit customClicked(); // Emit custom signal
}

void MyButton::mousePressEvent(QMouseEvent *event)
{
    qDebug() << "Mouse pressed on MyButton at:" << event->pos();
    QPushButton::mousePressEvent(event); // Call base class implementation
}

