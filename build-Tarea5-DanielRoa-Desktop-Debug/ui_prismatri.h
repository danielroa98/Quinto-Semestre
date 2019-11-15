/********************************************************************************
** Form generated from reading UI file 'prismatri.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRISMATRI_H
#define UI_PRISMATRI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_PrismaTri
{
public:
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *boxYinicio;
    QPushButton *pushButton_2;
    QTextEdit *boxXinicio;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QTextEdit *boxGrados;
    QLabel *label_5;

    void setupUi(QDialog *PrismaTri)
    {
        if (PrismaTri->objectName().isEmpty())
            PrismaTri->setObjectName(QString::fromUtf8("PrismaTri"));
        PrismaTri->resize(900, 600);
        pushButton = new QPushButton(PrismaTri);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 113, 32));
        label_3 = new QLabel(PrismaTri);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 20, 41, 16));
        label_4 = new QLabel(PrismaTri);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(250, 20, 51, 16));
        boxYinicio = new QTextEdit(PrismaTri);
        boxYinicio->setObjectName(QString::fromUtf8("boxYinicio"));
        boxYinicio->setGeometry(QRect(270, 10, 41, 31));
        pushButton_2 = new QPushButton(PrismaTri);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 50, 113, 32));
        boxXinicio = new QTextEdit(PrismaTri);
        boxXinicio->setObjectName(QString::fromUtf8("boxXinicio"));
        boxXinicio->setGeometry(QRect(190, 10, 41, 31));
        pushButton_5 = new QPushButton(PrismaTri);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(560, 10, 151, 32));
        pushButton_3 = new QPushButton(PrismaTri);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(370, 50, 113, 32));
        pushButton_6 = new QPushButton(PrismaTri);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(720, 10, 151, 32));
        pushButton_4 = new QPushButton(PrismaTri);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(560, 40, 151, 32));
        pushButton_7 = new QPushButton(PrismaTri);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(720, 40, 151, 32));
        boxGrados = new QTextEdit(PrismaTri);
        boxGrados->setObjectName(QString::fromUtf8("boxGrados"));
        boxGrados->setGeometry(QRect(440, 10, 41, 31));
        label_5 = new QLabel(PrismaTri);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(380, 20, 51, 16));

        retranslateUi(PrismaTri);

        QMetaObject::connectSlotsByName(PrismaTri);
    } // setupUi

    void retranslateUi(QDialog *PrismaTri)
    {
        PrismaTri->setWindowTitle(QApplication::translate("PrismaTri", "Prisma Triangular", nullptr));
        pushButton->setText(QApplication::translate("PrismaTri", "Dibujar", nullptr));
        label_3->setText(QApplication::translate("PrismaTri", "x:", nullptr));
        label_4->setText(QApplication::translate("PrismaTri", "y:", nullptr));
        pushButton_2->setText(QApplication::translate("PrismaTri", "Trasladar", nullptr));
        pushButton_5->setText(QApplication::translate("PrismaTri", "+", nullptr));
        pushButton_3->setText(QApplication::translate("PrismaTri", "Rotar", nullptr));
        pushButton_6->setText(QApplication::translate("PrismaTri", "Reflexi\303\263n Horizontal", nullptr));
        pushButton_4->setText(QApplication::translate("PrismaTri", "-", nullptr));
        pushButton_7->setText(QApplication::translate("PrismaTri", "Reflexi\303\263n Vetical", nullptr));
        label_5->setText(QApplication::translate("PrismaTri", "grados:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrismaTri: public Ui_PrismaTri {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRISMATRI_H
