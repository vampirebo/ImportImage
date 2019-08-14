/********************************************************************************
** Form generated from reading UI file 'receiver.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVER_H
#define UI_RECEIVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Receiver
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QWidget *Receiver)
    {
        if (Receiver->objectName().isEmpty())
            Receiver->setObjectName(QStringLiteral("Receiver"));
        Receiver->resize(351, 318);
        gridLayout = new QGridLayout(Receiver);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Receiver);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(Receiver);

        QMetaObject::connectSlotsByName(Receiver);
    } // setupUi

    void retranslateUi(QWidget *Receiver)
    {
        Receiver->setWindowTitle(QApplication::translate("Receiver", "Form", nullptr));
        label->setText(QApplication::translate("Receiver", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Receiver: public Ui_Receiver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVER_H
