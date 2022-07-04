/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QPushButton *pushButton_v;
    QPushButton *pushButton_0;
    QPushButton *pushButton_eq;
    QPushButton *pushButton_t;
    QPushButton *pushButton_3;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_d;
    QPushButton *pushButton_p;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_5;
    QPushButton *pushButton_m;
    QPushButton *pushButton_h;
    QPushButton *pushButton_ac;
    QLabel *screen;

    void setupUi(QWidget *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(480, 640);
        pushButton_v = new QPushButton(Calculator);
        pushButton_v->setObjectName(QString::fromUtf8("pushButton_v"));
        pushButton_v->setGeometry(QRect(0, 520, 120, 120));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        pushButton_v->setFont(font);
        pushButton_v->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_0 = new QPushButton(Calculator);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(120, 520, 120, 120));
        pushButton_0->setFont(font);
        pushButton_0->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_eq = new QPushButton(Calculator);
        pushButton_eq->setObjectName(QString::fromUtf8("pushButton_eq"));
        pushButton_eq->setGeometry(QRect(240, 520, 120, 120));
        pushButton_eq->setFont(font);
        pushButton_eq->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_eq->setStyleSheet(QString::fromUtf8("background-color: rgb(98, 160, 234);"));
        pushButton_t = new QPushButton(Calculator);
        pushButton_t->setObjectName(QString::fromUtf8("pushButton_t"));
        pushButton_t->setGeometry(QRect(360, 520, 120, 120));
        pushButton_t->setFont(font);
        pushButton_t->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_t->setStyleSheet(QString::fromUtf8("background-color: rgb(98, 160, 234);"));
        pushButton_3 = new QPushButton(Calculator);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(240, 400, 120, 120));
        pushButton_3->setFont(font);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_1 = new QPushButton(Calculator);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(0, 400, 120, 120));
        pushButton_1->setFont(font);
        pushButton_1->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2 = new QPushButton(Calculator);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 400, 120, 120));
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_d = new QPushButton(Calculator);
        pushButton_d->setObjectName(QString::fromUtf8("pushButton_d"));
        pushButton_d->setGeometry(QRect(360, 400, 120, 120));
        pushButton_d->setFont(font);
        pushButton_d->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_d->setStyleSheet(QString::fromUtf8("background-color: rgb(98, 160, 234);"));
        pushButton_p = new QPushButton(Calculator);
        pushButton_p->setObjectName(QString::fromUtf8("pushButton_p"));
        pushButton_p->setGeometry(QRect(360, 160, 120, 120));
        pushButton_p->setFont(font);
        pushButton_p->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_p->setAutoFillBackground(false);
        pushButton_p->setStyleSheet(QString::fromUtf8("background-color: rgb(98, 160, 234);"));
        pushButton_6 = new QPushButton(Calculator);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(240, 280, 120, 120));
        pushButton_6->setFont(font);
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_8 = new QPushButton(Calculator);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(120, 160, 120, 120));
        pushButton_8->setFont(font);
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4 = new QPushButton(Calculator);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 280, 120, 120));
        pushButton_4->setFont(font);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7 = new QPushButton(Calculator);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 160, 120, 120));
        pushButton_7->setFont(font);
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_9 = new QPushButton(Calculator);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(240, 160, 120, 120));
        pushButton_9->setFont(font);
        pushButton_9->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5 = new QPushButton(Calculator);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(120, 280, 120, 120));
        pushButton_5->setFont(font);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_m = new QPushButton(Calculator);
        pushButton_m->setObjectName(QString::fromUtf8("pushButton_m"));
        pushButton_m->setGeometry(QRect(360, 280, 120, 120));
        pushButton_m->setFont(font);
        pushButton_m->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_m->setStyleSheet(QString::fromUtf8("background-color: rgb(98, 160, 234);"));
        pushButton_h = new QPushButton(Calculator);
        pushButton_h->setObjectName(QString::fromUtf8("pushButton_h"));
        pushButton_h->setGeometry(QRect(0, 130, 240, 30));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        pushButton_h->setFont(font1);
        pushButton_h->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_ac = new QPushButton(Calculator);
        pushButton_ac->setObjectName(QString::fromUtf8("pushButton_ac"));
        pushButton_ac->setGeometry(QRect(240, 130, 240, 30));
        pushButton_ac->setFont(font1);
        pushButton_ac->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_ac->setStyleSheet(QString::fromUtf8("color: rgb(224, 27, 36);"));
        screen = new QLabel(Calculator);
        screen->setObjectName(QString::fromUtf8("screen"));
        screen->setGeometry(QRect(0, 0, 481, 131));
        screen->setLayoutDirection(Qt::RightToLeft);
        screen->setAutoFillBackground(false);
        screen->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 30pt \"FreeSans\";"));
        screen->setTextFormat(Qt::AutoText);
        screen->setScaledContents(false);
        screen->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        screen->setMargin(5);
        screen->raise();
        pushButton_v->raise();
        pushButton_0->raise();
        pushButton_eq->raise();
        pushButton_t->raise();
        pushButton_3->raise();
        pushButton_1->raise();
        pushButton_2->raise();
        pushButton_d->raise();
        pushButton_p->raise();
        pushButton_6->raise();
        pushButton_8->raise();
        pushButton_4->raise();
        pushButton_7->raise();
        pushButton_9->raise();
        pushButton_5->raise();
        pushButton_m->raise();
        pushButton_h->raise();
        pushButton_ac->raise();

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QWidget *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        pushButton_v->setText(QCoreApplication::translate("Calculator", ",", nullptr));
        pushButton_0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        pushButton_eq->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        pushButton_t->setText(QCoreApplication::translate("Calculator", "x", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        pushButton_1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        pushButton_d->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        pushButton_p->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        pushButton_m->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        pushButton_h->setText(QCoreApplication::translate("Calculator", "Hist", nullptr));
        pushButton_ac->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        screen->setText(QCoreApplication::translate("Calculator", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
