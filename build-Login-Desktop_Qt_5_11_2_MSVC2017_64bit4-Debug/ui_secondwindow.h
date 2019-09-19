/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_secondWindow
{
public:
    QLabel *label;

    void setupUi(QDialog *secondWindow)
    {
        if (secondWindow->objectName().isEmpty())
            secondWindow->setObjectName(QStringLiteral("secondWindow"));
        secondWindow->resize(400, 300);
        label = new QLabel(secondWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 100, 91, 111));

        retranslateUi(secondWindow);

        QMetaObject::connectSlotsByName(secondWindow);
    } // setupUi

    void retranslateUi(QDialog *secondWindow)
    {
        secondWindow->setWindowTitle(QApplication::translate("secondWindow", "Dialog", nullptr));
        label->setText(QApplication::translate("secondWindow", "Login successful", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondWindow: public Ui_secondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
