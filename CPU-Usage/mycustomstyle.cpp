#include "mycustomstyle.h"



MyCustomStyle::MyCustomStyle(QStyle *style)
    : QProxyStyle(style)
{
}

void MyCustomStyle::drawControl(ControlElement element, const QStyleOption *option,
                                QPainter *painter, const QWidget *widget) const
{
    if (element == CE_PushButtonLabel) {
        const QStyleOptionButton *buttonOption = qstyleoption_cast<const QStyleOptionButton *>(option);
        if (buttonOption) {
            if (buttonOption->state & State_Sunken) { // Button is pressed
                painter->fillRect(buttonOption->rect, QColor(255, 100, 100)); // Red background
            } else {
                // Draw the default button background
                QProxyStyle::drawControl(element, option, painter, widget);
            }
            // Draw the text
            drawItemText(painter, buttonOption->rect, Qt::AlignCenter,
                         buttonOption->palette, buttonOption->state & State_Enabled,
                         buttonOption->text, QPalette::ButtonText);
            return;
        }
    }
    // For all other elements, use the base style's drawing
    QProxyStyle::drawControl(element, option, painter, widget);
}




