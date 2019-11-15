/********************************************************************************
** Form generated from reading UI file 'poligonos.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLIGONOS_H
#define UI_POLIGONOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
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

    void setupUi(QDialog *Poligonos)
    {
        if (Poligonos->objectName().isEmpty())
            Poligonos->setObjectName(QStringLiteral("Poligonos"));
        Poligonos->resize(900, 600);
        pushButton = new QPushButton(Poligonos);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 40, 113, 31));
        labelXinicio = new QLabel(Poligonos);
        labelXinicio->setObjectName(QStringLiteral("labelXinicio"));
        labelXinicio->setGeometry(QRect(190, 10, 21, 20));
        labelYinicio = new QLabel(Poligonos);
        labelYinicio->setObjectName(QStringLiteral("labelYinicio"));
        labelYinicio->setGeometry(QRect(260, 10, 21, 16));
        labelXfin = new QLabel(Poligonos);
        labelXfin->setObjectName(QStringLiteral("labelXfin"));
        labelXfin->setGeometry(QRect(40, 10, 61, 16));
        boxXinicio = new QTextEdit(Poligonos);
        boxXinicio->setObjectName(QStringLiteral("boxXinicio"));
        boxXinicio->setGeometry(QRect(210, 10, 41, 21));
        boxXfin = new QTextEdit(Poligonos);
        boxXfin->setObjectName(QStringLiteral("boxXfin"));
        boxXfin->setGeometry(QRect(80, 10, 41, 21));
        boxYinicio = new QTextEdit(Poligonos);
        boxYinicio->setObjectName(QStringLiteral("boxYinicio"));
        boxYinicio->setGeometry(QRect(280, 10, 41, 21));
        pushButton_2 = new QPushButton(Poligonos);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 40, 113, 32));
        pushButton_3 = new QPushButton(Poligonos);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(390, 40, 113, 32));
        pushButton_4 = new QPushButton(Poligonos);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(730, 10, 151, 32));
        pushButton_5 = new QPushButton(Poligonos);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(570, 10, 151, 32));
        pushButton_6 = new QPushButton(Poligonos);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(570, 40, 151, 32));
        pushButton_7 = new QPushButton(Poligonos);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(730, 40, 151, 32));
        boxGrados = new QTextEdit(Poligonos);
        boxGrados->setObjectName(QStringLiteral("boxGrados"));
        boxGrados->setGeometry(QRect(460, 10, 41, 21));
        label_5 = new QLabel(Poligonos);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(400, 10, 51, 16));

        retranslateUi(Poligonos);

        QMetaObject::connectSlotsByName(Poligonos);
    } // setupUi

    void retranslateUi(QDialog *Poligonos)
    {
        Poligonos->setWindowTitle(QApplication::translate("Poligonos", "Pol\303\255gonos", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Poligonos", "Dibujar", Q_NULLPTR));
        labelXinicio->setText(QApplication::translate("Poligonos", "x:", Q_NULLPTR));
        labelYinicio->setText(QApplication::translate("Poligonos", "y:", Q_NULLPTR));
        labelXfin->setText(QApplication::translate("Poligonos", "lados:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Poligonos", "Trasladar", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Poligonos", "Rotar", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Poligonos", "Zoom out", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Poligonos", "Zoom in", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Poligonos", "Reflexi\303\263n Horizontal", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("Poligonos", "Reflexi\303\263n Vetical", Q_NULLPTR));
        label_5->setText(QApplication::translate("Poligonos", "grados:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Poligonos: public Ui_Poligonos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLIGONOS_H
