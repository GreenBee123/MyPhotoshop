/********************************************************************************
** Form generated from reading UI file 'histogramclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTOGRAMCLASS_H
#define UI_HISTOGRAMCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_histogramclass
{
public:

    void setupUi(QWidget *histogramclass)
    {
        if (histogramclass->objectName().isEmpty())
            histogramclass->setObjectName(QString::fromUtf8("histogramclass"));
        histogramclass->resize(400, 300);

        retranslateUi(histogramclass);

        QMetaObject::connectSlotsByName(histogramclass);
    } // setupUi

    void retranslateUi(QWidget *histogramclass)
    {
        histogramclass->setWindowTitle(QApplication::translate("histogramclass", "histogramclass", nullptr));
    } // retranslateUi

};

namespace Ui {
    class histogramclass: public Ui_histogramclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTOGRAMCLASS_H
