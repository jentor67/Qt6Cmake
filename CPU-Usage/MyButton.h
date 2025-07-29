// MyButton.h
#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QPushButton>

class MyButton : public QPushButton
{
    Q_OBJECT // Required for signals, slots, and Qt's meta-object system

public:
    explicit MyButton(const QString &text = "", QWidget *parent = nullptr);
    // Add any custom methods, signals, or slots here

signals:
    void customClicked(); // Example custom signal

public slots:
    void handleButtonClick(); // Example custom slot

protected:
    void mousePressEvent(QMouseEvent *event) override; // Override a base class event handler
};

#endif // MYBUTTON_H
