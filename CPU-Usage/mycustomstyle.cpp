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



class MyCustomStyleJohn : public QProxyStyle
{
public:


    // In your custom style class
    void drawPrimitive(
        PrimitiveElement element,
        const QStyleOption* option,
        QPainter* painter,
        const QWidget* widget) const
    {
        if (element == PE_PanelButtonCommand) {
            const QStyleOptionButton* buttonOption = qstyleoption_cast<const QStyleOptionButton*>(option);
            if (buttonOption) {
                // Draw custom button background (e.g., a rounded rectangle)
                painter->setRenderHint(QPainter::Antialiasing);
                QPainterPath path;
                path.addRoundedRect(buttonOption->rect, 10, 10);
                painter->fillPath(path, buttonOption->palette.button());

                // Draw button text and icon using the base style's implementation
                // or further customize
                drawControl(CE_PushButtonLabel, buttonOption, painter, widget);
            }
        } else {
            QProxyStyle::drawPrimitive(element, option, painter, widget); // Fallback to base style
        }
    }
};



