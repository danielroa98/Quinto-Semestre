/********************************************************************************
** Form generated from reading UI file 'arcos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCOS_H
#define UI_ARCOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Arcos
{
public:
    QLabel *label;
    QLabel *label_2;
    QTextEdit *boxRadio;
    QTextEdit *boxAngulo;
    QPushButton *pushButton;
    QLabel *label_3;
    QTextEdit *boxXinicio;
    QLabel *label_4;
    QTextEdit *boxYinicio;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QTextEdit *boxGrados;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *Arcos)
    {
        if (Arcos->objectName().isEmpty())
            Arcos->setObjectName(QString::fromUtf8("Arcos"));
        Arcos->resize(900, 600);
        label = new QLabel(Arcos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 16, 51, 21));
        label_2 = new QLabel(Arcos);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 16, 61, 21));
        boxRadio = new QTextEdit(Arcos);
        boxRadio->setObjectName(QString::fromUtf8("boxRadio"));
        boxRadio->setGeometry(QRect(60, 10, 41, 31));
        boxAngulo = new QTextEdit(Arcos);
        boxAngulo->setObjectName(QString::fromUtf8("boxAngulo"));
        boxAngulo->setGeometry(QRect(160, 10, 41, 31));
        pushButton = new QPushButton(Arcos);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(50, 50, 113, 32));
        label_3 = new QLabel(Arcos);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 10, 41, 16));
        boxXinicio = new QTextEdit(Arcos);
        boxXinicio->setObjectName(QString::fromUtf8("boxXinicio"));
        boxXinicio->setGeometry(QRect(260, 6, 41, 31));
        label_4 = new QLabel(Arcos);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(320, 10, 51, 16));
        boxYinicio = new QTextEdit(Arcos);
        boxYinicio->setObjectName(QString::fromUtf8("boxYinicio"));
        boxYinicio->setGeometry(QRect(340, 6, 41, 31));
        pushButton_2 = new QPushButton(Arcos);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 50, 113, 32));
        pushButton_3 = new QPushButton(Arcos);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(432, 50, 101, 32));
        pushButton_4 = new QPushButton(Arcos);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(600, 10, 151, 32));
        pushButton_5 = new QPushButton(Arcos);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(750, 10, 131, 32));
        pushButton_6 = new QPushButton(Arcos);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(600, 40, 151, 32));
        pushButton_7 = new QPushButton(Arcos);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(750, 40, 131, 32));
        boxGrados = new QTextEdit(Arcos);
        boxGrados->setObjectName(QString::fromUtf8("boxGrados"));
        boxGrados->setGeometry(QRect(490, 6, 41, 31));
        label_5 = new QLabel(Arcos);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(440, 10, 51, 16));
        label_6 = new QLabel(Arcos);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(330, 550, 211, 51));
        QFont font;
        font.setPointSize(15);
        label_6->setFont(font);

        retranslateUi(Arcos);

        QMetaObject::connectSlotsByName(Arcos);
    } // setupUi

    void retranslateUi(QDialog *Arcos)
    {
        Arcos->setWindowTitle(QApplication::translate("Arcos", "Arcos", nullptr));
        label->setText(QApplication::translate("Arcos", "Radio:", nullptr));
        label_2->setText(QApplication::translate("Arcos", "\303\201ngulo:", nullptr));
        pushButton->setText(QApplication::translate("Arcos", "Dibujar", nullptr));
        label_3->setText(QApplication::translate("Arcos", "x:", nullptr));
        label_4->setText(QApplication::translate("Arcos", "y:", nullptr));
        pushButton_2->setText(QApplication::translate("Arcos", "Trasladar", nullptr));
        pushButton_3->setText(QApplication::translate("Arcos", "Rotar", nullptr));
        pushButton_4->setText(QApplication::translate("Arcos", "+", nullptr));
        pushButton_5->setText(QApplication::translate("Arcos", "-", nullptr));
        pushButton_6->setText(QApplication::translate("Arcos", "Reflexi\303\263n horizontal", nullptr));
        pushButton_7->setText(QApplication::translate("Arcos", "Reflexi\303\263n vertical", nullptr));
        label_5->setText(QApplication::translate("Arcos", "grados:", nullptr));
        label_6->setText(QApplication::translate("Arcos", "Impresi\303\263n de los arcos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Arcos: public Ui_Arcos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCOS_H
