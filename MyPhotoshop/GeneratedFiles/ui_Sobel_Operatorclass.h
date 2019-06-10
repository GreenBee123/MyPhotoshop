/********************************************************************************
** Form generated from reading UI file 'Sobel_Operatorclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOBEL_OPERATORCLASS_H
#define UI_SOBEL_OPERATORCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sobel_Operatorclass
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label;

    void setupUi(QWidget *Sobel_Operatorclass)
    {
        if (Sobel_Operatorclass->objectName().isEmpty())
            Sobel_Operatorclass->setObjectName(QString::fromUtf8("Sobel_Operatorclass"));
        Sobel_Operatorclass->resize(816, 588);
        gridLayout = new QGridLayout(Sobel_Operatorclass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(Sobel_Operatorclass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 792, 564));
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


        retranslateUi(Sobel_Operatorclass);

        QMetaObject::connectSlotsByName(Sobel_Operatorclass);
    } // setupUi

    void retranslateUi(QWidget *Sobel_Operatorclass)
    {
        Sobel_Operatorclass->setWindowTitle(QApplication::translate("Sobel_Operatorclass", "Sobel_Operatorclass", nullptr));
        label->setText(QApplication::translate("Sobel_Operatorclass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sobel_Operatorclass: public Ui_Sobel_Operatorclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOBEL_OPERATORCLASS_H
