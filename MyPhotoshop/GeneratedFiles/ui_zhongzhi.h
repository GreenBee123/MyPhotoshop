/********************************************************************************
** Form generated from reading UI file 'zhongzhi.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHONGZHI_H
#define UI_ZHONGZHI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zhongzhi
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *label_3;
    QSlider *horizontalSlider;
    QComboBox *comboBox;

    void setupUi(QWidget *zhongzhi)
    {
        if (zhongzhi->objectName().isEmpty())
            zhongzhi->setObjectName(QString::fromUtf8("zhongzhi"));
        zhongzhi->resize(1040, 840);
        zhongzhi->setMinimumSize(QSize(500, 350));
        groupBox = new QGroupBox(zhongzhi);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 600, 400));
        groupBox->setMinimumSize(QSize(600, 400));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        scrollArea_2 = new QScrollArea(groupBox);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 574, 359));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label = new QLabel(scrollAreaWidgetContents_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_3->addWidget(scrollArea_2, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(zhongzhi);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 430, 600, 400));
        groupBox_2->setMinimumSize(QSize(600, 400));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(groupBox_2);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 574, 359));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        label_3 = new QLabel(zhongzhi);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(730, 30, 72, 21));
        horizontalSlider = new QSlider(zhongzhi);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(800, 30, 181, 22));
        horizontalSlider->setMaximum(10);
        horizontalSlider->setOrientation(Qt::Horizontal);
        comboBox = new QComboBox(zhongzhi);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(830, 170, 87, 22));

        retranslateUi(zhongzhi);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), zhongzhi, SLOT(on_horizontalSlider_valueChanged(int)));

        QMetaObject::connectSlotsByName(zhongzhi);
    } // setupUi

    void retranslateUi(QWidget *zhongzhi)
    {
        zhongzhi->setWindowTitle(QApplication::translate("zhongzhi", "zhongzhi", nullptr));
        groupBox->setTitle(QApplication::translate("zhongzhi", "GroupBox", nullptr));
        label->setText(QApplication::translate("zhongzhi", "img", nullptr));
        groupBox_2->setTitle(QApplication::translate("zhongzhi", "GroupBox", nullptr));
        label_4->setText(QApplication::translate("zhongzhi", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("zhongzhi", "\346\273\221\345\212\250\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zhongzhi: public Ui_zhongzhi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHONGZHI_H
