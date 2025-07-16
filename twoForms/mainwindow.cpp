#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "dialog.h"
#include "QFileDialog"
#include "QMessageBox"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Dialog* myDialog = new Dialog(this,"Hello!");
    myDialog->show();

    connect(myDialog, &Dialog::dataAvailable, this, &MainWindow::onDataAvailable);
}


void MainWindow::onDataAvailable(const QString &data)
{
    ui->label->setText(data);

    //this changes the window title
    setWindowTitle(data);
}

void MainWindow::on_btnPickTextFile_clicked()
{
    //QString initialPath = QString::fromLocal8Bit(RESOURCES_PATH);
    //qDebug() << initialPath;  //this is the build directory

    qDebug() << QDir::currentPath();

    QString initialPath = ":/TextFiles/";
    qDebug() << initialPath;


    /*
     QFileDialog::getOpenFileName(
        this,
        tr("Open Image"),
        "images/",
        tr("Image Files (*.png *.jpg *.bmp)")).
     */



    QString fileName = QFileDialog::getOpenFileName(
        this,
        tr("Open Text File"),
        initialPath,
        tr("Text Files (*.txt);;All Files (*.*)"));
    //"/home/jmajor/temp",

    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            QString content = in.readAll();
            ui->txtTextFile->setText(fileName);
            ui->txtTextFileBody->setText(content);
            file.close();
        } else {
            QMessageBox::warning(
                this,
                tr("Error"),
                tr("Could not open file: %1").arg(file.errorString()));
        }
    }
}



void MainWindow::on_btnPickJSONFile_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(
        this,
        tr("Open Text File"),
        "/home/jmajor/temp",
        tr("Text Files (*.json);;All Files (*.*)"));

    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {

            //read as a json file
            QByteArray jsonData = file.readAll();

            file.close();
            QJsonParseError parseError;
            QJsonDocument doc = QJsonDocument::fromJson(jsonData, &parseError);

            if (parseError.error != QJsonParseError::NoError) {
                qWarning() << "Parse error at" << parseError.offset << ":" << parseError.errorString();
                //return false;
            }

            if (doc.isObject()) {
                QJsonObject jsonObject = doc.object();
                // Process the JSON object
                // Example:
                if (jsonObject.contains("name") && jsonObject["name"].isString()) {
                    QString name = jsonObject["name"].toString();
                    qDebug() << "Name:" << name;
                }


                // get 'description'
                if (jsonObject.contains("description") && jsonObject["description"].isString()) {
                    QString description = jsonObject["description"].toString();
                    qDebug() << "Description:" << description;
                }
                else{
                    qDebug() << "No match for Description";
                }


            } else if (doc.isArray()) {
                QJsonArray jsonArray = doc.array();
                // Process the JSON array
            }



            // read as a text file
            file.open(QIODevice::ReadOnly | QIODevice::Text);
            QTextStream in(&file);
            QString content = in.readAll();
            ui->txtJSONPath->setText(fileName);
            ui->txtJSONBody->setText(content);
            file.close();
        } else {
            QMessageBox::warning(
                this,
                tr("Error"),
                tr("Could not open file: %1").arg(file.errorString()));
        }
    }
}


void MainWindow::on_actionExit_triggered()
{
    close();
}

