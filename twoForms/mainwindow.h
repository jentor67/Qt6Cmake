#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


#pragma once
#define RESOURCES_PATH "@RESOURCES_DIR@"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


void onDataAvailable(const QString &data);

private slots:
     void on_pushButton_clicked();

    // void on_btnPickTextFile_clicked();

    // void on_btnPickJSONFile_clicked();

     void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
