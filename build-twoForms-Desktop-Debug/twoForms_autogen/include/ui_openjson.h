/********************************************************************************
** Form generated from reading UI file 'openjson.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENJSON_H
#define UI_OPENJSON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_OpenJSON
{
public:
    QLabel *label;

    void setupUi(QDialog *OpenJSON)
    {
        if (OpenJSON->objectName().isEmpty())
            OpenJSON->setObjectName("OpenJSON");
        OpenJSON->resize(710, 181);
        label = new QLabel(OpenJSON);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 50, 101, 18));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        retranslateUi(OpenJSON);

        QMetaObject::connectSlotsByName(OpenJSON);
    } // setupUi

    void retranslateUi(QDialog *OpenJSON)
    {
        OpenJSON->setWindowTitle(QCoreApplication::translate("OpenJSON", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("OpenJSON", "Choose File:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpenJSON: public Ui_OpenJSON {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENJSON_H
