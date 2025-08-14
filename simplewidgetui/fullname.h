#ifndef FULLNAME_H
#define FULLNAME_H

#include "QMainWindow"

QT_BEGIN_NAMESPACE
namespace Ui {
class fullname;
}
QT_END_NAMESPACE


class fullname : public QMainWindow
{
    Q_OBJECT

public:
    fullname(QWidget *parent = nullptr);
    ~fullname();

private:
    Ui::fullname *ui;
};

#endif // FULLNAME_H
