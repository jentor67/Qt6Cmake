#ifndef MYCUSTOMSTYLE_H
#define MYCUSTOMSTYLE_H
#include "QProxyStyle"
#include "QStyle"


class MyCustomStyle : public QStyle
{
    Q_OBJECT

public:

    public:
        MyCustomStyle() {}
        ~MyCustomStyle() {}

        void drawPrimitive(PrimitiveElement element, const QStyleOption *option,
                           QPainter *painter, const QWidget *widget = nullptr) const override;
        void drawControl(ControlElement element, const QStyleOption *option,
                         QPainter *painter, const QWidget *widget = nullptr) const override;
        // ... other overrides for complex controls, sub-elements, etc.
    };


#endif // MYCUSTOMSTYLE_H



