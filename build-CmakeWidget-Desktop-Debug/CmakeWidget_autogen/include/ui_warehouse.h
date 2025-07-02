/********************************************************************************
** Form generated from reading UI file 'warehouse.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAREHOUSE_H
#define UI_WAREHOUSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Warehouse
{
public:
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txtWarehouseName;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txtWarehouseDescription;

    void setupUi(QDialog *Warehouse)
    {
        if (Warehouse->objectName().isEmpty())
            Warehouse->setObjectName("Warehouse");
        Warehouse->resize(595, 386);
        pushButton = new QPushButton(Warehouse);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 250, 141, 25));
        layoutWidget = new QWidget(Warehouse);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 80, 255, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        txtWarehouseName = new QLineEdit(layoutWidget);
        txtWarehouseName->setObjectName("txtWarehouseName");

        horizontalLayout->addWidget(txtWarehouseName);

        layoutWidget1 = new QWidget(Warehouse);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(50, 140, 296, 28));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        txtWarehouseDescription = new QLineEdit(layoutWidget1);
        txtWarehouseDescription->setObjectName("txtWarehouseDescription");

        horizontalLayout_2->addWidget(txtWarehouseDescription);


        retranslateUi(Warehouse);

        QMetaObject::connectSlotsByName(Warehouse);
    } // setupUi

    void retranslateUi(QDialog *Warehouse)
    {
        Warehouse->setWindowTitle(QCoreApplication::translate("Warehouse", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Warehouse", "Add Warehouse", nullptr));
        label->setText(QCoreApplication::translate("Warehouse", "Warehouse Name:", nullptr));
        label_2->setText(QCoreApplication::translate("Warehouse", "Warehouse Description:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Warehouse: public Ui_Warehouse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAREHOUSE_H
