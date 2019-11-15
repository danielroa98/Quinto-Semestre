/********************************************************************************
** Form generated from reading UI file 'cono.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONO_H
#define UI_CONO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Cono
{
public:
    QPushButton *pushButton;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QTextEdit *boxYinicio;
    QTextEdit *boxXinicio;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QTextEdit *boxGrados;
    QLabel *label_5;
    QLabel *label;

    void setupUi(QDialog *Cono)
    {
        if (Cono->objectName().isEmpty())
            Cono->setObjectName(QString::fromUtf8("Cono"));
        Cono->resize(900, 600);
        pushButton = new QPushButton(Cono);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 113, 32));
        label_3 = new QLabel(Cono);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 20, 41, 16));
        pushButton_2 = new QPushButton(Cono);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 50, 113, 32));
        label_4 = new QLabel(Cono);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(250, 20, 51, 16));
        boxYinicio = new QTextEdit(Cono);
        boxYinicio->setObjectName(QString::fromUtf8("boxYinicio"));
        boxYinicio->setGeometry(QRect(270, 10, 41, 31));
        boxXinicio = new QTextEdit(Cono);
        boxXinicio->setObjectName(QString::fromUtf8("boxXinicio"));
        boxXinicio->setGeometry(QRect(190, 10, 41, 31));
        pushButton_5 = new QPushButton(Cono);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(560, 10, 151, 32));
        pushButton_3 = new QPushButton(Cono);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(380, 50, 113, 32));
        pushButton_6 = new QPushButton(Cono);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(720, 10, 151, 32));
        pushButton_4 = new QPushButton(Cono);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(560, 40, 151, 32));
        pushButton_7 = new QPushButton(Cono);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(720, 40, 151, 32));
        boxGrados = new QTextEdit(Cono);
        boxGrados->setObjectName(QString::fromUtf8("boxGrados"));
        boxGrados->setGeometry(QRect(440, 10, 41, 31));
        label_5 = new QLabel(Cono);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(390, 20, 51, 16));
        label = new QLabel(Cono);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 560, 191, 31));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        retranslateUi(Cono);

        QMetaObject::connectSlotsByName(Cono);
    } // setupUi

    void retranslateUi(QDialog *Cono)
    {
        Cono->setWindowTitle(QApplication::translate("Cono", "Cono", nullptr));
        pushButton->setText(QApplication::translate("Cono", "Dibujar", nullptr));
        label_3->setText(QApplication::translate("Cono", "x:", nullptr));
        pushButton_2->setText(QApplication::translate("Cono", "Trasladar", nullptr));
        label_4->setText(QApplication::translate("Cono", "y:", nullptr));
        pushButton_5->setText(QApplication::translate("Cono", "+", nullptr));
        pushButton_3->setText(QApplication::translate("Cono", "Rotar", nullptr));
        pushButton_6->setText(QApplication::translate("Cono", "Reflexi\303\263n Horizontal", nullptr));
        pushButton_4->setText(QApplication::translate("Cono", "-", nullptr));
        pushButton_7->setText(QApplication::translate("Cono", "Reflexi\303\263n Vetical", nullptr));
        label_5->setText(QApplication::translate("Cono", "Grados:", nullptr));
        label->setText(QApplication::translate("Cono", "Impresi\303\263n de conos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cono: public Ui_Cono {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONO_H
