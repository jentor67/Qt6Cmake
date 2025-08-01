#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "warehouse.h"
#include "secdialog.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAdd_clicked();

    void on_btnSubtract_clicked();

    void on_btnDivision_clicked();

    void on_btnProduct_clicked();

    void on_actionExit_triggered();

    void on_actionNew_triggered();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    SecDialog *secDialog;
    QString dataToPass;
};
#endif // MAINWINDOW_H
