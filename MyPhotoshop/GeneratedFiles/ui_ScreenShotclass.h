/********************************************************************************
** Form generated from reading UI file 'ScreenShotclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSHOTCLASS_H
#define UI_SCREENSHOTCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScreenShotclass
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ScreenShotclass)
    {
        if (ScreenShotclass->objectName().isEmpty())
            ScreenShotclass->setObjectName(QString::fromUtf8("ScreenShotclass"));
        ScreenShotclass->resize(506, 477);
        gridLayout = new QGridLayout(ScreenShotclass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(ScreenShotclass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 482, 453));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(ScreenShotclass);

        QMetaObject::connectSlotsByName(ScreenShotclass);
    } // setupUi

    void retranslateUi(QWidget *ScreenShotclass)
    {
        ScreenShotclass->setWindowTitle(QApplication::translate("ScreenShotclass", "ScreenShotclass", nullptr));
        label->setText(QApplication::translate("ScreenShotclass", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("ScreenShotclass", "\346\210\252\345\233\276\346\225\210\346\236\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScreenShotclass: public Ui_ScreenShotclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSHOTCLASS_H
