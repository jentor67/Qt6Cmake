#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "dialog.h"
#include "QFileDialog"
#include "QMessageBox"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>

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
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open Text File"),
                                                    "/home/jmajor/temp",
                                                    tr("Text Files (*.txt);;All Files (*.*)"));

    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            QString content = in.readAll();
            ui->txtTextFile->setText(fileName);
            ui->txtTextFileBody->setText(content);
            file.close();
        } else {
            QMessageBox::warning(this, tr("Error"), tr("Could not open file: %1").arg(file.errorString()));
        }
    }
}

bool readJsonFile1(const QString& filePath) {
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning() << "Failed to open file:" << file.errorString();
        return false;
    }

    QByteArray jsonData = file.readAll();
    file.close();

    QJsonParseError parseError;
    QJsonDocument doc = QJsonDocument::fromJson(jsonData, &parseError);

    if (parseError.error != QJsonParseError::NoError) {
        qWarning() << "Parse error at" << parseError.offset << ":" << parseError.errorString();
        return false;
    }

    if (doc.isObject()) {
        QJsonObject jsonObject = doc.object();
        // Process the JSON object
        // Example:
        if (jsonObject.contains("name") && jsonObject["name"].isString()) {
            QString name = jsonObject["name"].toString();
            qDebug() << "Name:" << name;
        }
    } else if (doc.isArray()) {
        QJsonArray jsonArray = doc.array();
        // Process the JSON array
    }
    return true;
}


void MainWindow::on_btnPickJSONFile_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open Text File"),
                                                    "/home/jmajor/temp",
                                                    tr("Text Files (*.json);;All Files (*.*)"));

    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            QString content = in.readAll();
            ui->txtJSONPath->setText(fileName);
            ui->txtJSONBody->setText(content);
            file.close();
        } else {
            QMessageBox::warning(this, tr("Error"), tr("Could not open file: %1").arg(file.errorString()));
        }
    }
}

