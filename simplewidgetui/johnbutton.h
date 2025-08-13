#ifndef JOHNBUTTON_H
#define JOHNBUTTON_H

#include <QPushButton>
#include <QWidget> // Required if the button will have a parent widget


class johnbutton
{
public:
    johnbutton();

    // Method to create and return a QPushButton
    QPushButton* createRedButton(const QString& text, QWidget* parent = nullptr);

    QPushButton* createBlueButton(const QString& text, QWidget* parent = nullptr);
};

#endif // JOHNBUTTON_H
