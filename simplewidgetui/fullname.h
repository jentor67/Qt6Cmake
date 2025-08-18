#ifndef FULLNAME_H
#define FULLNAME_H

#include "QMainWindow"

QT_BEGIN_NAMESPACE
namespace Ui {class fullname; }
QT_END_NAMESPACE


class fullname : public QMainWindow
{
    Q_OBJECT

public:
    explicit fullname(QMainWindow *parent = nullptr);
    ~fullname();

private:
     Ui::fullname *ui;
};

#endif // FULLNAME_H




// #pragma once

// #include <QMainWindow>

// namespace Ui {
// class MainWindow;  // Forward declaration is OK here
// }

// class MainWindow : public QMainWindow
// {
//     Q_OBJECT

// public:
//     explicit MainWindow(QWidget *parent = nullptr);
//     ~MainWindow();

// private:
//     Ui::MainWindow *ui;  // pointer, forward-declared type is fine
// };




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
