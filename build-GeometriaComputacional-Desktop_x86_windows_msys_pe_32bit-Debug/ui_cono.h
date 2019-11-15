/********************************************************************************
** Form generated from reading UI file 'cono.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONO_H
#define UI_CONO_H

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

    void setupUi(QDialog *Cono)
    {
        if (Cono->objectName().isEmpty())
            Cono->setObjectName(QStringLiteral("Cono"));
        Cono->resize(900, 600);
        pushButton = new QPushButton(Cono);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 40, 113, 32));
        label_3 = new QLabel(Cono);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 10, 41, 16));
        pushButton_2 = new QPushButton(Cono);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 40, 113, 32));
        label_4 = new QLabel(Cono);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(250, 10, 51, 16));
        boxYinicio = new QTextEdit(Cono);
        boxYinicio->setObjectName(QStringLiteral("boxYinicio"));
        boxYinicio->setGeometry(QRect(270, 10, 41, 21));
        boxXinicio = new QTextEdit(Cono);
        boxXinicio->setObjectName(QStringLiteral("boxXinicio"));
        boxXinicio->setGeometry(QRect(190, 10, 41, 21));
        pushButton_5 = new QPushButton(Cono);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(560, 10, 151, 32));
        pushButton_3 = new QPushButton(Cono);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(380, 40, 113, 32));
        pushButton_6 = new QPushButton(Cono);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(560, 40, 151, 32));
        pushButton_4 = new QPushButton(Cono);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(720, 10, 151, 32));
        pushButton_7 = new QPushButton(Cono);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(720, 40, 151, 32));
        boxGrados = new QTextEdit(Cono);
        boxGrados->setObjectName(QStringLiteral("boxGrados"));
        boxGrados->setGeometry(QRect(440, 10, 41, 21));
        label_5 = new QLabel(Cono);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(390, 10, 51, 16));

        retranslateUi(Cono);

        QMetaObject::connectSlotsByName(Cono);
    } // setupUi

    void retranslateUi(QDialog *Cono)
    {
        Cono->setWindowTitle(QApplication::translate("Cono", "Cono", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Cono", "Dibujar", Q_NULLPTR));
        label_3->setText(QApplication::translate("Cono", "x:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Cono", "Trasladar", Q_NULLPTR));
        label_4->setText(QApplication::translate("Cono", "y:", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Cono", "Zoom in", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Cono", "Rotar", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Cono", "Reflexi\303\263n Horizontal", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Cono", "Zoom out", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("Cono", "Reflexi\303\263n Vetical", Q_NULLPTR));
        label_5->setText(QApplication::translate("Cono", "grados:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Cono: public Ui_Cono {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONO_H
