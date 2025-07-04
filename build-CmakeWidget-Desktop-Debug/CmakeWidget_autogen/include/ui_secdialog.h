/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_SecDialog
{
public:
    QLabel *lblMessage;

    void setupUi(QDialog *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName("SecDialog");
        SecDialog->resize(400, 300);
        lblMessage = new QLabel(SecDialog);
        lblMessage->setObjectName("lblMessage");
        lblMessage->setGeometry(QRect(60, 100, 281, 71));
        QFont font;
        font.setPointSize(14);
        lblMessage->setFont(font);
        lblMessage->setAlignment(Qt::AlignCenter);

        retranslateUi(SecDialog);

        QMetaObject::connectSlotsByName(SecDialog);
    } // setupUi

    void retranslateUi(QDialog *SecDialog)
    {
        SecDialog->setWindowTitle(QCoreApplication::translate("SecDialog", "Dialog", nullptr));
        lblMessage->setText(QCoreApplication::translate("SecDialog", "John", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
