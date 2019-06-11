/********************************************************************************
** Form generated from reading UI file 'finding_Image_Contourclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDING_IMAGE_CONTOURCLASS_H
#define UI_FINDING_IMAGE_CONTOURCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_finding_Image_Contourclass
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label;

    void setupUi(QWidget *finding_Image_Contourclass)
    {
        if (finding_Image_Contourclass->objectName().isEmpty())
            finding_Image_Contourclass->setObjectName(QString::fromUtf8("finding_Image_Contourclass"));
        finding_Image_Contourclass->resize(950, 709);
        gridLayout = new QGridLayout(finding_Image_Contourclass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(finding_Image_Contourclass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 926, 685));
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


        retranslateUi(finding_Image_Contourclass);

        QMetaObject::connectSlotsByName(finding_Image_Contourclass);
    } // setupUi

    void retranslateUi(QWidget *finding_Image_Contourclass)
    {
        finding_Image_Contourclass->setWindowTitle(QApplication::translate("finding_Image_Contourclass", "finding_Image_Contourclass", nullptr));
        label->setText(QApplication::translate("finding_Image_Contourclass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class finding_Image_Contourclass: public Ui_finding_Image_Contourclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDING_IMAGE_CONTOURCLASS_H
