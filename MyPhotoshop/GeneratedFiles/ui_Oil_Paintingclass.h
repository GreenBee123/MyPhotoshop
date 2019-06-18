/********************************************************************************
** Form generated from reading UI file 'Oil_Paintingclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OIL_PAINTINGCLASS_H
#define UI_OIL_PAINTINGCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Oil_Paintingclass
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label;

    void setupUi(QWidget *Oil_Paintingclass)
    {
        if (Oil_Paintingclass->objectName().isEmpty())
            Oil_Paintingclass->setObjectName(QString::fromUtf8("Oil_Paintingclass"));
        Oil_Paintingclass->resize(879, 697);
        gridLayout = new QGridLayout(Oil_Paintingclass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(Oil_Paintingclass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 855, 673));
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


        retranslateUi(Oil_Paintingclass);

        QMetaObject::connectSlotsByName(Oil_Paintingclass);
    } // setupUi

    void retranslateUi(QWidget *Oil_Paintingclass)
    {
        Oil_Paintingclass->setWindowTitle(QApplication::translate("Oil_Paintingclass", "Oil_Paintingclass", nullptr));
        label->setText(QApplication::translate("Oil_Paintingclass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Oil_Paintingclass: public Ui_Oil_Paintingclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OIL_PAINTINGCLASS_H
