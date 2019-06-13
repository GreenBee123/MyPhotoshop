/********************************************************************************
** Form generated from reading UI file 'featherclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEATHERCLASS_H
#define UI_FEATHERCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_featherclass
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *label_5;
    QSlider *SnowSpecialEffectsSlider;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *featherclass)
    {
        if (featherclass->objectName().isEmpty())
            featherclass->setObjectName(QString::fromUtf8("featherclass"));
        featherclass->resize(910, 602);
        scrollArea = new QScrollArea(featherclass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 890, 615));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 888, 613));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 3, 1, 2, 1);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 5, 1, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(65, 30));
        label_4->setMaximumSize(QSize(65, 60));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_4);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(25, 30));
        label_5->setMaximumSize(QSize(25, 60));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_5);

        SnowSpecialEffectsSlider = new QSlider(scrollAreaWidgetContents);
        SnowSpecialEffectsSlider->setObjectName(QString::fromUtf8("SnowSpecialEffectsSlider"));
        SnowSpecialEffectsSlider->setMinimumSize(QSize(200, 30));
        SnowSpecialEffectsSlider->setMaximumSize(QSize(350, 60));
        SnowSpecialEffectsSlider->setMaximum(20);
        SnowSpecialEffectsSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(SnowSpecialEffectsSlider);


        gridLayout_2->addLayout(horizontalLayout, 0, 3, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(75, 28));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(75, 28));

        horizontalLayout_2->addWidget(pushButton_2);


        gridLayout_2->addLayout(horizontalLayout_2, 4, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 6, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(featherclass);
        QObject::connect(SnowSpecialEffectsSlider, SIGNAL(valueChanged(int)), featherclass, SLOT(on_featherhorizontalSlider_valueChanged(int)));

        QMetaObject::connectSlotsByName(featherclass);
    } // setupUi

    void retranslateUi(QWidget *featherclass)
    {
        featherclass->setWindowTitle(QApplication::translate("featherclass", "featherclass", nullptr));
        label_3->setText(QApplication::translate("featherclass", "img", nullptr));
        label_2->setText(QApplication::translate("featherclass", "\351\242\204\350\247\210\346\225\210\346\236\234", nullptr));
        label_4->setText(QApplication::translate("featherclass", "\347\276\275\345\214\226\357\274\232", nullptr));
        label_5->setText(QApplication::translate("featherclass", "0", nullptr));
        pushButton->setText(QApplication::translate("featherclass", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QApplication::translate("featherclass", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class featherclass: public Ui_featherclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEATHERCLASS_H
