/********************************************************************************
** Form generated from reading UI file 'QR_Codeclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QR_CODECLASS_H
#define UI_QR_CODECLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QR_Codeclass
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *QR_Codeclass)
    {
        if (QR_Codeclass->objectName().isEmpty())
            QR_Codeclass->setObjectName(QString::fromUtf8("QR_Codeclass"));
        QR_Codeclass->resize(543, 449);
        gridLayout = new QGridLayout(QR_Codeclass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(QR_Codeclass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 519, 425));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_2->addWidget(label, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 0, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 1, 1, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 5, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(QR_Codeclass);

        QMetaObject::connectSlotsByName(QR_Codeclass);
    } // setupUi

    void retranslateUi(QWidget *QR_Codeclass)
    {
        QR_Codeclass->setWindowTitle(QApplication::translate("QR_Codeclass", "QR_Codeclass", nullptr));
        label_2->setText(QApplication::translate("QR_Codeclass", "\346\243\200\346\265\213\347\273\223\346\236\234", nullptr));
        label->setText(QApplication::translate("QR_Codeclass", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("QR_Codeclass", "\346\272\220\345\233\276\345\203\217", nullptr));
        label_3->setText(QApplication::translate("QR_Codeclass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QR_Codeclass: public Ui_QR_Codeclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QR_CODECLASS_H
