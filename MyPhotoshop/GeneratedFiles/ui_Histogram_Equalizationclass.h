/********************************************************************************
** Form generated from reading UI file 'Histogram_Equalizationclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTOGRAM_EQUALIZATIONCLASS_H
#define UI_HISTOGRAM_EQUALIZATIONCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Histogram_Equalizationclass
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_7;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Histogram_Equalizationclass)
    {
        if (Histogram_Equalizationclass->objectName().isEmpty())
            Histogram_Equalizationclass->setObjectName(QString::fromUtf8("Histogram_Equalizationclass"));
        Histogram_Equalizationclass->resize(1093, 832);
        gridLayout = new QGridLayout(Histogram_Equalizationclass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(Histogram_Equalizationclass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1069, 808));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 1, 1, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 30));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 2, 1, 1, 1);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(250, 300));
        groupBox->setMaximumSize(QSize(300, 300));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 20, 241, 271));
        gridLayout_3 = new QGridLayout(gridLayoutWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(gridLayoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout_3->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(gridLayoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout_3->addWidget(radioButton_2, 1, 0, 1, 1);

        radioButton_6 = new QRadioButton(gridLayoutWidget);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));

        gridLayout_3->addWidget(radioButton_6, 5, 0, 1, 1);

        radioButton_5 = new QRadioButton(gridLayoutWidget);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        gridLayout_3->addWidget(radioButton_5, 4, 0, 1, 1);

        radioButton_4 = new QRadioButton(gridLayoutWidget);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        gridLayout_3->addWidget(radioButton_4, 3, 0, 1, 1);

        radioButton_3 = new QRadioButton(gridLayoutWidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        gridLayout_3->addWidget(radioButton_3, 2, 0, 1, 1);

        radioButton_7 = new QRadioButton(gridLayoutWidget);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));

        gridLayout_3->addWidget(radioButton_7, 6, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(Histogram_Equalizationclass);
        QObject::connect(radioButton, SIGNAL(clicked()), Histogram_Equalizationclass, SLOT(on_radioBtn_clicked()));
        QObject::connect(radioButton_2, SIGNAL(clicked()), Histogram_Equalizationclass, SLOT(on_radioBtn_2_clicked()));
        QObject::connect(radioButton_3, SIGNAL(clicked()), Histogram_Equalizationclass, SLOT(on_radioBtn_3_clicked()));
        QObject::connect(radioButton_4, SIGNAL(clicked()), Histogram_Equalizationclass, SLOT(on_radioBtn_4_clicked()));
        QObject::connect(radioButton_5, SIGNAL(clicked()), Histogram_Equalizationclass, SLOT(on_radioBtn_5_clicked()));
        QObject::connect(radioButton_6, SIGNAL(clicked()), Histogram_Equalizationclass, SLOT(on_radioBtn_6_clicked()));
        QObject::connect(radioButton_7, SIGNAL(clicked()), Histogram_Equalizationclass, SLOT(on_radioBtn_7_clicked()));

        QMetaObject::connectSlotsByName(Histogram_Equalizationclass);
    } // setupUi

    void retranslateUi(QWidget *Histogram_Equalizationclass)
    {
        Histogram_Equalizationclass->setWindowTitle(QApplication::translate("Histogram_Equalizationclass", "Histogram_Equalizationclass", nullptr));
        label->setText(QApplication::translate("Histogram_Equalizationclass", "img", nullptr));
        label_2->setText(QApplication::translate("Histogram_Equalizationclass", "\346\230\276\347\244\272\346\225\210\346\236\234", nullptr));
        label_3->setText(QApplication::translate("Histogram_Equalizationclass", "\347\233\264\346\226\271\345\233\276", nullptr));
        groupBox->setTitle(QApplication::translate("Histogram_Equalizationclass", "\345\233\276\345\203\217\345\242\236\345\274\272\351\200\211\351\241\271", nullptr));
        radioButton->setText(QApplication::translate("Histogram_Equalizationclass", "\345\237\272\344\272\216\347\233\264\346\226\271\345\233\276\345\217\230\346\215\242", nullptr));
        radioButton_2->setText(QApplication::translate("Histogram_Equalizationclass", "\345\237\272\344\272\216\346\213\211\346\231\256\346\213\211\346\226\257\347\256\227\345\255\220", nullptr));
        radioButton_6->setText(QApplication::translate("Histogram_Equalizationclass", "\351\253\230\345\217\215\345\267\256\344\277\235\347\225\231", nullptr));
        radioButton_5->setText(QApplication::translate("Histogram_Equalizationclass", "\346\214\207\346\225\260\345\217\230\346\215\242", nullptr));
        radioButton_4->setText(QApplication::translate("Histogram_Equalizationclass", "\345\237\272\344\272\216\344\274\275\351\251\254\345\217\230\346\215\242", nullptr));
        radioButton_3->setText(QApplication::translate("Histogram_Equalizationclass", "\345\237\272\344\272\216\345\257\271\346\225\260Log\345\217\230\346\215\242", nullptr));
        radioButton_7->setText(QApplication::translate("Histogram_Equalizationclass", "\350\277\207\345\272\246\346\233\235\345\205\211\345\244\204\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Histogram_Equalizationclass: public Ui_Histogram_Equalizationclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTOGRAM_EQUALIZATIONCLASS_H
