/********************************************************************************
** Form generated from reading UI file 'prismarec.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRISMAREC_H
#define UI_PRISMAREC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_PrismaRec
{
public:
    QPushButton *pushButton;
    QLabel *label_4;
    QTextEdit *boxYinicio;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QTextEdit *boxXinicio;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QTextEdit *boxGrados;
    QLabel *label_5;
    QLabel *label;

    void setupUi(QDialog *PrismaRec)
    {
        if (PrismaRec->objectName().isEmpty())
            PrismaRec->setObjectName(QString::fromUtf8("PrismaRec"));
        PrismaRec->resize(900, 600);
        pushButton = new QPushButton(PrismaRec);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 20, 113, 32));
        label_4 = new QLabel(PrismaRec);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(250, 20, 51, 16));
        boxYinicio = new QTextEdit(PrismaRec);
        boxYinicio->setObjectName(QString::fromUtf8("boxYinicio"));
        boxYinicio->setGeometry(QRect(270, 10, 41, 31));
        pushButton_2 = new QPushButton(PrismaRec);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 50, 113, 32));
        label_3 = new QLabel(PrismaRec);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 20, 41, 16));
        boxXinicio = new QTextEdit(PrismaRec);
        boxXinicio->setObjectName(QString::fromUtf8("boxXinicio"));
        boxXinicio->setGeometry(QRect(190, 10, 41, 31));
        pushButton_5 = new QPushButton(PrismaRec);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(550, 10, 151, 32));
        pushButton_3 = new QPushButton(PrismaRec);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(370, 50, 113, 32));
        pushButton_6 = new QPushButton(PrismaRec);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(710, 10, 151, 32));
        pushButton_4 = new QPushButton(PrismaRec);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(550, 40, 151, 32));
        pushButton_7 = new QPushButton(PrismaRec);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(710, 40, 151, 32));
        boxGrados = new QTextEdit(PrismaRec);
        boxGrados->setObjectName(QString::fromUtf8("boxGrados"));
        boxGrados->setGeometry(QRect(440, 10, 41, 31));
        label_5 = new QLabel(PrismaRec);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(380, 20, 51, 16));
        label = new QLabel(PrismaRec);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 550, 361, 41));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        retranslateUi(PrismaRec);

        QMetaObject::connectSlotsByName(PrismaRec);
    } // setupUi

    void retranslateUi(QDialog *PrismaRec)
    {
        PrismaRec->setWindowTitle(QApplication::translate("PrismaRec", "Prisma Rectangular", nullptr));
        pushButton->setText(QApplication::translate("PrismaRec", "Dibujar", nullptr));
        label_4->setText(QApplication::translate("PrismaRec", "y:", nullptr));
        pushButton_2->setText(QApplication::translate("PrismaRec", "Trasladar", nullptr));
        label_3->setText(QApplication::translate("PrismaRec", "x:", nullptr));
        pushButton_5->setText(QApplication::translate("PrismaRec", "+", nullptr));
        pushButton_3->setText(QApplication::translate("PrismaRec", "Rotar", nullptr));
        pushButton_6->setText(QApplication::translate("PrismaRec", "Reflexi\303\263n Horizontal", nullptr));
        pushButton_4->setText(QApplication::translate("PrismaRec", "-", nullptr));
        pushButton_7->setText(QApplication::translate("PrismaRec", "Reflexi\303\263n Vetical", nullptr));
        label_5->setText(QApplication::translate("PrismaRec", "grados:", nullptr));
        label->setText(QApplication::translate("PrismaRec", "Impresi\303\263n de prismas rectangulares", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrismaRec: public Ui_PrismaRec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRISMAREC_H
