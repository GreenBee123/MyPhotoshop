/********************************************************************************
** Form generated from reading UI file 'Radial_Blurclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADIAL_BLURCLASS_H
#define UI_RADIAL_BLURCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Radial_Blurclass
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label;

    void setupUi(QWidget *Radial_Blurclass)
    {
        if (Radial_Blurclass->objectName().isEmpty())
            Radial_Blurclass->setObjectName(QString::fromUtf8("Radial_Blurclass"));
        Radial_Blurclass->resize(981, 672);
        gridLayout = new QGridLayout(Radial_Blurclass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(Radial_Blurclass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 957, 648));
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


        retranslateUi(Radial_Blurclass);

        QMetaObject::connectSlotsByName(Radial_Blurclass);
    } // setupUi

    void retranslateUi(QWidget *Radial_Blurclass)
    {
        Radial_Blurclass->setWindowTitle(QApplication::translate("Radial_Blurclass", "Radial_Blurclass", nullptr));
        label->setText(QApplication::translate("Radial_Blurclass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Radial_Blurclass: public Ui_Radial_Blurclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIAL_BLURCLASS_H
