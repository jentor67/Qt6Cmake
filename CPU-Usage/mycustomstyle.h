#ifndef MYCUSTOMSTYLE_H
#define MYCUSTOMSTYLE_H
#include <QProxyStyle>
#include <QPainter>
#include <QStyleOptionButton>

class MyCustomStyle : public QProxyStyle
{
    Q_OBJECT
public:
    explicit MyCustomStyle(QStyle *style = nullptr);

    void drawControl(ControlElement element, const QStyleOption *option,
                     QPainter *painter, const QWidget *widget = nullptr) const override;
};
//     };


#endif // MYCUSTOMSTYLE_H



