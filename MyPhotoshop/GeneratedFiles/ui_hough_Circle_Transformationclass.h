/********************************************************************************
** Form generated from reading UI file 'hough_Circle_Transformationclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOUGH_CIRCLE_TRANSFORMATIONCLASS_H
#define UI_HOUGH_CIRCLE_TRANSFORMATIONCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hough_Circle_Transformationclass
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label;

    void setupUi(QWidget *hough_Circle_Transformationclass)
    {
        if (hough_Circle_Transformationclass->objectName().isEmpty())
            hough_Circle_Transformationclass->setObjectName(QString::fromUtf8("hough_Circle_Transformationclass"));
        hough_Circle_Transformationclass->resize(946, 730);
        gridLayout = new QGridLayout(hough_Circle_Transformationclass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(hough_Circle_Transformationclass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 922, 706));
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


        retranslateUi(hough_Circle_Transformationclass);

        QMetaObject::connectSlotsByName(hough_Circle_Transformationclass);
    } // setupUi

    void retranslateUi(QWidget *hough_Circle_Transformationclass)
    {
        hough_Circle_Transformationclass->setWindowTitle(QApplication::translate("hough_Circle_Transformationclass", "hough_Circle_Transformationclass", nullptr));
        label->setText(QApplication::translate("hough_Circle_Transformationclass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hough_Circle_Transformationclass: public Ui_hough_Circle_Transformationclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOUGH_CIRCLE_TRANSFORMATIONCLASS_H
