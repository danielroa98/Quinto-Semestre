/********************************************************************************
** Form generated from reading UI file 'poligonos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLIGONOS_H
#define UI_POLIGONOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Poligonos
{
public:
    QPushButton *pushButton;
    QLabel *labelXinicio;
    QLabel *labelYinicio;
    QLabel *labelXfin;
    QTextEdit *boxXinicio;
    QTextEdit *boxXfin;
    QTextEdit *boxYinicio;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QTextEdit *boxGrados;
    QLabel *label_5;
    QLabel *label;

    void setupUi(QDialog *Poligonos)
    {
        if (Poligonos->objectName().isEmpty())
            Poligonos->setObjectName(QString::fromUtf8("Poligonos"));
        Poligonos->resize(900, 600);
        pushButton = new QPushButton(Poligonos);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 50, 113, 31));
        labelXinicio = new QLabel(Poligonos);
        labelXinicio->setObjectName(QString::fromUtf8("labelXinicio"));
        labelXinicio->setGeometry(QRect(190, 20, 21, 20));
        labelYinicio = new QLabel(Poligonos);
        labelYinicio->setObjectName(QString::fromUtf8("labelYinicio"));
        labelYinicio->setGeometry(QRect(260, 20, 21, 16));
        labelXfin = new QLabel(Poligonos);
        labelXfin->setObjectName(QString::fromUtf8("labelXfin"));
        labelXfin->setGeometry(QRect(40, 20, 61, 16));
        boxXinicio = new QTextEdit(Poligonos);
        boxXinicio->setObjectName(QString::fromUtf8("boxXinicio"));
        boxXinicio->setGeometry(QRect(210, 10, 41, 31));
        QFont font;
        font.setPointSize(14);
        boxXinicio->setFont(font);
        boxXfin = new QTextEdit(Poligonos);
        boxXfin->setObjectName(QString::fromUtf8("boxXfin"));
        boxXfin->setGeometry(QRect(80, 10, 41, 31));
        boxYinicio = new QTextEdit(Poligonos);
        boxYinicio->setObjectName(QString::fromUtf8("boxYinicio"));
        boxYinicio->setGeometry(QRect(280, 10, 41, 31));
        boxYinicio->setFont(font);
        pushButton_2 = new QPushButton(Poligonos);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 50, 113, 32));
        pushButton_3 = new QPushButton(Poligonos);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(390, 50, 113, 32));
        pushButton_4 = new QPushButton(Poligonos);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(570, 40, 151, 32));
        pushButton_5 = new QPushButton(Poligonos);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(570, 10, 151, 32));
        pushButton_6 = new QPushButton(Poligonos);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(730, 10, 151, 32));
        pushButton_7 = new QPushButton(Poligonos);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(730, 40, 151, 32));
        boxGrados = new QTextEdit(Poligonos);
        boxGrados->setObjectName(QString::fromUtf8("boxGrados"));
        boxGrados->setGeometry(QRect(460, 10, 41, 31));
        boxGrados->setFont(font);
        label_5 = new QLabel(Poligonos);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(400, 20, 51, 16));
        label = new QLabel(Poligonos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 540, 241, 41));
        QFont font1;
        font1.setPointSize(15);
        label->setFont(font1);

        retranslateUi(Poligonos);

        QMetaObject::connectSlotsByName(Poligonos);
    } // setupUi

    void retranslateUi(QDialog *Poligonos)
    {
        Poligonos->setWindowTitle(QApplication::translate("Poligonos", "Pol\303\255gonos", nullptr));
        pushButton->setText(QApplication::translate("Poligonos", "Dibujar", nullptr));
        labelXinicio->setText(QApplication::translate("Poligonos", "x:", nullptr));
        labelYinicio->setText(QApplication::translate("Poligonos", "y:", nullptr));
        labelXfin->setText(QApplication::translate("Poligonos", "lados:", nullptr));
        pushButton_2->setText(QApplication::translate("Poligonos", "Trasladar", nullptr));
        pushButton_3->setText(QApplication::translate("Poligonos", "Rotar", nullptr));
        pushButton_4->setText(QApplication::translate("Poligonos", "-", nullptr));
        pushButton_5->setText(QApplication::translate("Poligonos", "+", nullptr));
        pushButton_6->setText(QApplication::translate("Poligonos", "Reflexi\303\263n Horizontal", nullptr));
        pushButton_7->setText(QApplication::translate("Poligonos", "Reflexi\303\263n Vetical", nullptr));
        label_5->setText(QApplication::translate("Poligonos", "grados:", nullptr));
        label->setText(QApplication::translate("Poligonos", "Impresi\303\263n de pol\303\255gonos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Poligonos: public Ui_Poligonos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLIGONOS_H
