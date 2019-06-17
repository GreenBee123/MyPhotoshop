/********************************************************************************
** Form generated from reading UI file 'Sketchclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKETCHCLASS_H
#define UI_SKETCHCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sketchclass
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label;

    void setupUi(QWidget *Sketchclass)
    {
        if (Sketchclass->objectName().isEmpty())
            Sketchclass->setObjectName(QString::fromUtf8("Sketchclass"));
        Sketchclass->resize(988, 648);
        gridLayout = new QGridLayout(Sketchclass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(Sketchclass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 964, 624));
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


        retranslateUi(Sketchclass);

        QMetaObject::connectSlotsByName(Sketchclass);
    } // setupUi

    void retranslateUi(QWidget *Sketchclass)
    {
        Sketchclass->setWindowTitle(QApplication::translate("Sketchclass", "Sketchclass", nullptr));
        label->setText(QApplication::translate("Sketchclass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sketchclass: public Ui_Sketchclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKETCHCLASS_H
