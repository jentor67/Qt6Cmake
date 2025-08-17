#ifndef FULLNAME_H
#define FULLNAME_H

#include "QWidget"

QT_BEGIN_NAMESPACE
namespace Ui {class fullname; }
QT_END_NAMESPACE


class fullname : public QWidget
{
    Q_OBJECT

public:
    explicit fullname(QWidget *parent = nullptr);
    ~fullname();

private:
     Ui::fullname *ui;
};

#endif // FULLNAME_H


// #ifndef SECONDWINDOW_H
// #define SECONDWINDOW_H

// #include <QWidget>

// QT_BEGIN_NAMESPACE
// namespace Ui { class SecondWindow; }
// QT_END_NAMESPACE

// class SecondWindow : public QWidget {
//     Q_OBJECT

// public:
//     explicit SecondWindow(QWidget *parent = nullptr);
//     ~SecondWindow();

// private:
//     Ui::SecondWindow *ui;
