#ifndef FULLNAME_H
#define FULLNAME_H

#include "QDialog"

QT_BEGIN_NAMESPACE
namespace Ui { //class fullname; }
QT_END_NAMESPACE


class fullname : public QDialog
{
    Q_OBJECT

public:
    explicit fullname(QDialog *parent = nullptr);
    ~fullname();

private:
     //Ui::fullname *ui;
    fullname *ui;
};
};
#endif // FULLNAME_H




