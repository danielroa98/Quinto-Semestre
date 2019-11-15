/********************************************************************************
** Form generated from reading UI file 'cubo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUBO_H
#define UI_CUBO_H

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

    void setupUi(QDialog *Cubo)
    {
        if (Cubo->objectName().isEmpty())
            Cubo->setObjectName(QStringLiteral("Cubo"));
        Cubo->resize(900, 600);
        pushButton = new QPushButton(Cubo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 40, 113, 32));
        pushButton_2 = new QPushButton(Cubo);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 40, 113, 32));
        boxXinicio = new QTextEdit(Cubo);
        boxXinicio->setObjectName(QStringLiteral("boxXinicio"));
        boxXinicio->setGeometry(QRect(190, 10, 41, 21));
        label_4 = new QLabel(Cubo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(250, 10, 51, 16));
        label_3 = new QLabel(Cubo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 10, 41, 16));
        boxYinicio = new QTextEdit(Cubo);
        boxYinicio->setObjectName(QStringLiteral("boxYinicio"));
        boxYinicio->setGeometry(QRect(270, 10, 41, 21));
        pushButton_5 = new QPushButton(Cubo);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(570, 10, 151, 32));
        pushButton_3 = new QPushButton(Cubo);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(380, 40, 113, 32));
        pushButton_6 = new QPushButton(Cubo);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(570, 40, 151, 32));
        pushButton_4 = new QPushButton(Cubo);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(730, 10, 151, 32));
        pushButton_7 = new QPushButton(Cubo);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(730, 40, 151, 32));
        boxGrados = new QTextEdit(Cubo);
        boxGrados->setObjectName(QStringLiteral("boxGrados"));
        boxGrados->setGeometry(QRect(450, 10, 41, 21));
        label_5 = new QLabel(Cubo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(390, 10, 51, 16));

        retranslateUi(Cubo);

        QMetaObject::connectSlotsByName(Cubo);
    } // setupUi

    void retranslateUi(QDialog *Cubo)
    {
        Cubo->setWindowTitle(QApplication::translate("Cubo", "Cubo", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Cubo", "Dibujar", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Cubo", "Trasladar", Q_NULLPTR));
        label_4->setText(QApplication::translate("Cubo", "y:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Cubo", "x:", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Cubo", "Zoom in", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Cubo", "Rotar", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Cubo", "Reflexi\303\263n Horizontal", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Cubo", "Zoom out", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("Cubo", "Reflexi\303\263n Vetical", Q_NULLPTR));
        label_5->setText(QApplication::translate("Cubo", "grados:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Cubo: public Ui_Cubo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUBO_H
