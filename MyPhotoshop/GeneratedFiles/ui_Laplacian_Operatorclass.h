/********************************************************************************
** Form generated from reading UI file 'Laplacian_Operatorclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAPLACIAN_OPERATORCLASS_H
#define UI_LAPLACIAN_OPERATORCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Laplacian_Operatorclass
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label;

    void setupUi(QWidget *Laplacian_Operatorclass)
    {
        if (Laplacian_Operatorclass->objectName().isEmpty())
            Laplacian_Operatorclass->setObjectName(QString::fromUtf8("Laplacian_Operatorclass"));
        Laplacian_Operatorclass->resize(957, 665);
        gridLayout = new QGridLayout(Laplacian_Operatorclass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(Laplacian_Operatorclass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 933, 641));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(Laplacian_Operatorclass);

        QMetaObject::connectSlotsByName(Laplacian_Operatorclass);
    } // setupUi

    void retranslateUi(QWidget *Laplacian_Operatorclass)
    {
        Laplacian_Operatorclass->setWindowTitle(QApplication::translate("Laplacian_Operatorclass", "Laplacian_Operatorclass", nullptr));
        label->setText(QApplication::translate("Laplacian_Operatorclass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Laplacian_Operatorclass: public Ui_Laplacian_Operatorclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAPLACIAN_OPERATORCLASS_H
