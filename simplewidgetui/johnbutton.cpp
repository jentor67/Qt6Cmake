#include "johnbutton.h"

#include "QPushButton"
johnbutton::johnbutton() {


}


QPushButton* johnbutton::createButton(const QString& text, QWidget* parent)
{
    QPushButton* button = new QPushButton(text, parent);
    //button->setStyleSheet("border: 4px solid green; background-color: yellow;");
    button->setStyleSheet("QPushButton { "
                          "background-color: #f44336; "
                          "color: white; "
                          "border: 2px solid #d32f2f; "
                          "border-radius: 10px; "
                          "padding: 10px 20px; "
                          "}"
                          "QPushButton:hover { background-color: #e57373; }");
    // You can customize the button here, e.g., set geometry, style, connect signals
    button->setGeometry(10, 20, 50, 30);
    button->setMaximumWidth(150);
    return button;
}
