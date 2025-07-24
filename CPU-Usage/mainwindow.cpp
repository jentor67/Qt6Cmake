#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QDebug"
#include "QProcess"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QString command;
    // Get the number of CPU's
    command = "lscpu | grep \"^CPU(s):\" | awk '{print $2}'";

    int cpus =  processBash(command).trimmed().toInt();  //remove \n and convert to integer

    ui->lblCPUSValue->setText(QString::number(cpus));

    //qDebug() << cpus;

    //ui->txtBrwCORES->append(text);
    QString text;

    text = "CPU Core Load\n";

    QString str1 = "echo 100 - $(mpstat -P ";
    QString str2 = " | tail -1 | awk \'{print $13}\') | bc";


    // add title to Vertical Core and Load
    QLabel *labelNumberTitle = new QLabel();
    labelNumberTitle->setText("Core");
    labelNumberTitle->setStyleSheet("background-color:red;");
    labelNumberTitle->setAlignment(Qt::AlignCenter);



    ui->VerticalCore->addWidget(labelNumberTitle);

    QLabel *labelLoadTitle = new QLabel();
    labelLoadTitle->setText("Load");
    labelLoadTitle->setStyleSheet("background-color:red;");
    labelLoadTitle->setAlignment(Qt::AlignCenter);
    ui->VerticalLoad->addWidget(labelLoadTitle);


    for ( int i = 0 ; i < cpus; ++i) {
        QString strNumber = QString::number(i);
        command =  str1 + strNumber + str2;
        QString strLoad = processBash(command).trimmed();

        QLabel *labelNumber =  new QLabel();
        labelNumber->setText(strNumber);
        labelNumber->setIndent(20);
        ui->VerticalCore->addWidget(labelNumber);

        QLabel *labelLoad = new QLabel();
        labelLoad->setText(strLoad);
        labelLoad->setIndent(20);
        ui->VerticalLoad->addWidget(labelLoad);

    }

    // Add a stretchable space
    ui->VerticalCore->addStretch();
    ui->VerticalLoad->addStretch();


}

QString MainWindow::processBash(QString command) {


    QProcess process;
    QString program = "/usr/bin/bash"; // Or "/usr/bin/bash" depending on your system

    QStringList arguments;
    arguments << "-c" <<command;
    process.start(program,arguments);

    // Optional: Wait for the process to finish
    if (!process.waitForFinished()) {
        qDebug() << "Process failed to finish:" << process.errorString();
    }

    // // Optional: Read standard output
    QString output = process.readAllStandardOutput();
    // qDebug() << "Standard Output:\n" << output;

    // // Optional: Read standard error
    // QByteArray error = process.readAllStandardError();
    // qDebug() << "Standard Error:\n" << error;

    return output;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionExit_triggered()
{
    close();
}

