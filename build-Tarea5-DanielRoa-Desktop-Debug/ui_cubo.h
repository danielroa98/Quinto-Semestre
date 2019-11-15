/********************************************************************************
** Form generated from reading UI file 'cubo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUBO_H
#define UI_CUBO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Cubo
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextEdit *boxXinicio;
    QLabel *label_4;
    QLabel *label_3;
    QTextEdit *boxYinicio;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QTextEdit *boxGrados;
    QLabel *label_5;
    QLabel *label;

    void setupUi(QDialog *Cubo)
    {
        if (Cubo->objectName().isEmpty())
            Cubo->setObjectName(QString::fromUtf8("Cubo"));
        Cubo->resize(900, 600);
        pushButton = new QPushButton(Cubo);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 113, 32));
        pushButton_2 = new QPushButton(Cubo);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 50, 113, 32));
        boxXinicio = new QTextEdit(Cubo);
        boxXinicio->setObjectName(QString::fromUtf8("boxXinicio"));
        boxXinicio->setGeometry(QRect(190, 10, 41, 31));
        label_4 = new QLabel(Cubo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(250, 20, 51, 16));
        label_3 = new QLabel(Cubo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 20, 41, 16));
        boxYinicio = new QTextEdit(Cubo);
        boxYinicio->setObjectName(QString::fromUtf8("boxYinicio"));
        boxYinicio->setGeometry(QRect(270, 10, 41, 31));
        pushButton_5 = new QPushButton(Cubo);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(570, 10, 151, 32));
        pushButton_3 = new QPushButton(Cubo);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(380, 50, 113, 32));
        pushButton_6 = new QPushButton(Cubo);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(730, 10, 151, 32));
        pushButton_4 = new QPushButton(Cubo);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(570, 40, 151, 32));
        pushButton_7 = new QPushButton(Cubo);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(730, 40, 151, 32));
        boxGrados = new QTextEdit(Cubo);
        boxGrados->setObjectName(QString::fromUtf8("boxGrados"));
        boxGrados->setGeometry(QRect(450, 10, 41, 31));
        label_5 = new QLabel(Cubo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(390, 20, 51, 16));
        label = new QLabel(Cubo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 550, 181, 41));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        retranslateUi(Cubo);

        QMetaObject::connectSlotsByName(Cubo);
    } // setupUi

    void retranslateUi(QDialog *Cubo)
    {
        Cubo->setWindowTitle(QApplication::translate("Cubo", "Cubo", nullptr));
        pushButton->setText(QApplication::translate("Cubo", "Dibujar", nullptr));
        pushButton_2->setText(QApplication::translate("Cubo", "Trasladar", nullptr));
        label_4->setText(QApplication::translate("Cubo", "y:", nullptr));
        label_3->setText(QApplication::translate("Cubo", "x:", nullptr));
        pushButton_5->setText(QApplication::translate("Cubo", "+", nullptr));
        pushButton_3->setText(QApplication::translate("Cubo", "Rotar", nullptr));
        pushButton_6->setText(QApplication::translate("Cubo", "Reflexi\303\263n Horizontal", nullptr));
        pushButton_4->setText(QApplication::translate("Cubo", "-", nullptr));
        pushButton_7->setText(QApplication::translate("Cubo", "Reflexi\303\263n Vetical", nullptr));
        label_5->setText(QApplication::translate("Cubo", "Grados:", nullptr));
        label->setText(QApplication::translate("Cubo", "Impresi\303\263n de cubos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cubo: public Ui_Cubo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUBO_H
