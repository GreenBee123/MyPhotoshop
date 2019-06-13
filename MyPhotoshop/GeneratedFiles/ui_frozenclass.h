/********************************************************************************
** Form generated from reading UI file 'frozenclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FROZENCLASS_H
#define UI_FROZENCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frozenclass
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label;

    void setupUi(QWidget *frozenclass)
    {
        if (frozenclass->objectName().isEmpty())
            frozenclass->setObjectName(QString::fromUtf8("frozenclass"));
        frozenclass->resize(948, 662);
        gridLayout = new QGridLayout(frozenclass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(frozenclass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 924, 638));
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


        retranslateUi(frozenclass);

        QMetaObject::connectSlotsByName(frozenclass);
    } // setupUi

    void retranslateUi(QWidget *frozenclass)
    {
        frozenclass->setWindowTitle(QApplication::translate("frozenclass", "frozenclass", nullptr));
        label->setText(QApplication::translate("frozenclass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class frozenclass: public Ui_frozenclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FROZENCLASS_H
