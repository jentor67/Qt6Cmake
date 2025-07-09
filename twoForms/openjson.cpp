#include "openjson.h"
#include "ui_openjson.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>


OpenJSON::OpenJSON(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OpenJSON)
{
    ui->setupUi(this);
}

OpenJSON::~OpenJSON()
{
    delete ui;
}

bool readJsonFile(const QString& filePath) {
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
