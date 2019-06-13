/********************************************************************************
** Form generated from reading UI file 'nostalgic_colar_class.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTALGIC_COLAR_CLASS_H
#define UI_NOSTALGIC_COLAR_CLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nostalgic_colar_class
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label;

    void setupUi(QWidget *nostalgic_colar_class)
    {
        if (nostalgic_colar_class->objectName().isEmpty())
            nostalgic_colar_class->setObjectName(QString::fromUtf8("nostalgic_colar_class"));
        nostalgic_colar_class->resize(816, 675);
        gridLayout = new QGridLayout(nostalgic_colar_class);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(nostalgic_colar_class);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 792, 651));
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


        retranslateUi(nostalgic_colar_class);

        QMetaObject::connectSlotsByName(nostalgic_colar_class);
    } // setupUi

    void retranslateUi(QWidget *nostalgic_colar_class)
    {
        nostalgic_colar_class->setWindowTitle(QApplication::translate("nostalgic_colar_class", "nostalgic_colar_class", nullptr));
        label->setText(QApplication::translate("nostalgic_colar_class", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nostalgic_colar_class: public Ui_nostalgic_colar_class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTALGIC_COLAR_CLASS_H
