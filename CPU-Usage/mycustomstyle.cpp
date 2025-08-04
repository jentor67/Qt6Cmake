#include "mycustomstyle.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStyleFactory>
#include <QtWidgets/QStyleOptionButton>
#include <QtGui/QPainter>
#include "QProxyStyle"
#include "QPainter"
#include "QPainterPath"
#include "QStyleOptionButton"
#include "QStyle"


/*
void MyCustomStyle::drawPrimitive(
    PrimitiveElement element,
    const QStyleOption *option,
    QPainter *painter,
    const QWidget *widget) const
{
    // Example: Custom drawing for a button background
    if (element == PE_PanelButtonCommand) {
        const QStyleOptionButton *buttonOption = qstyleoption_cast<const QStyleOptionButton *>(option);
        if (buttonOption) {
            // Draw a custom button background based on its state (pressed, hovered, etc.)
            painter->setBrush(Qt::blue); // Example: always blue
            painter->drawRect(option->rect);
        }
    } else {
        // Fallback to the base style for other elements
        //QStyle::drawPrimitive(element, option, painter, widget);
//        QStyle::drawPrimitive(element, option, painter, widget);
    }
}
*/




