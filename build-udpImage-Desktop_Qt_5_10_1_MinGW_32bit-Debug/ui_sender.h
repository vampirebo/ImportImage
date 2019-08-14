/********************************************************************************
** Form generated from reading UI file 'sender.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDER_H
#define UI_SENDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sender
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *select;
    QPushButton *send;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *pic;

    void setupUi(QWidget *Sender)
    {
        if (Sender->objectName().isEmpty())
            Sender->setObjectName(QStringLiteral("Sender"));
        Sender->resize(400, 300);
        verticalLayout = new QVBoxLayout(Sender);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(Sender);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        select = new QPushButton(widget);
        select->setObjectName(QStringLiteral("select"));

        horizontalLayout->addWidget(select);

        send = new QPushButton(widget);
        send->setObjectName(QStringLiteral("send"));

        horizontalLayout->addWidget(send);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(Sender);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pic = new QLabel(widget_2);
        pic->setObjectName(QStringLiteral("pic"));
        pic->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(pic);


        verticalLayout->addWidget(widget_2);


        retranslateUi(Sender);

        QMetaObject::connectSlotsByName(Sender);
    } // setupUi

    void retranslateUi(QWidget *Sender)
    {
        Sender->setWindowTitle(QApplication::translate("Sender", "Sender", nullptr));
        select->setText(QApplication::translate("Sender", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        send->setText(QApplication::translate("Sender", "\345\217\221\351\200\201", nullptr));
        pic->setText(QApplication::translate("Sender", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sender: public Ui_Sender {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDER_H
