#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

void MainWindow::on_actionExit_triggered()
{
    close();
}


void MainWindow::on_btnPickTextFile_clicked()
{
    QString initialPath = QDir::currentPath();
    initialPath += "/../../data/text";
    //qDebug() << initialPath;

    QString fileName = QFileDialog::getOpenFileName(
        this,
        tr("Open Text File"),
        initialPath,
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
            QMessageBox::warning(
                this,
                tr("Error"),
                tr("Could not open file: %1").arg(file.errorString()));
        }
    }
}

void MainWindow::onDataAvailable(const QString &data)
{
    //ui->label->setText(data);

    //this changes the window title
    setWindowTitle(data);
}


void MainWindow::on_btnPickJSONFile_clicked()
{
    QString initialPath = QDir::currentPath();
    initialPath += "/../../data/json";
    qDebug() << initialPath;

    QString fileName = QFileDialog::getOpenFileName(
        this,
        tr("Open Text File"),
        initialPath,
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
                    onDataAvailable(name);
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


