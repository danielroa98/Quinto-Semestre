/********************************************************************************
** Form generated from reading UI file 'prismatri.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRISMATRI_H
#define UI_PRISMATRI_H

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
            PrismaTri->setObjectName(QStringLiteral("PrismaTri"));
        PrismaTri->resize(900, 600);
        pushButton = new QPushButton(PrismaTri);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 40, 113, 32));
        label_3 = new QLabel(PrismaTri);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 10, 41, 16));
        label_4 = new QLabel(PrismaTri);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(250, 10, 51, 16));
        boxYinicio = new QTextEdit(PrismaTri);
        boxYinicio->setObjectName(QStringLiteral("boxYinicio"));
        boxYinicio->setGeometry(QRect(270, 10, 41, 21));
        pushButton_2 = new QPushButton(PrismaTri);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 40, 113, 32));
        boxXinicio = new QTextEdit(PrismaTri);
        boxXinicio->setObjectName(QStringLiteral("boxXinicio"));
        boxXinicio->setGeometry(QRect(190, 10, 41, 21));
        pushButton_5 = new QPushButton(PrismaTri);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(560, 10, 151, 32));
        pushButton_3 = new QPushButton(PrismaTri);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(370, 40, 113, 32));
        pushButton_6 = new QPushButton(PrismaTri);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(560, 40, 151, 32));
        pushButton_4 = new QPushButton(PrismaTri);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(720, 10, 151, 32));
        pushButton_7 = new QPushButton(PrismaTri);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(720, 40, 151, 32));
        boxGrados = new QTextEdit(PrismaTri);
        boxGrados->setObjectName(QStringLiteral("boxGrados"));
        boxGrados->setGeometry(QRect(440, 10, 41, 21));
        label_5 = new QLabel(PrismaTri);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(380, 10, 51, 16));

        retranslateUi(PrismaTri);

        QMetaObject::connectSlotsByName(PrismaTri);
    } // setupUi

    void retranslateUi(QDialog *PrismaTri)
    {
        PrismaTri->setWindowTitle(QApplication::translate("PrismaTri", "Prisma Triangular", Q_NULLPTR));
        pushButton->setText(QApplication::translate("PrismaTri", "Dibujar", Q_NULLPTR));
        label_3->setText(QApplication::translate("PrismaTri", "x:", Q_NULLPTR));
        label_4->setText(QApplication::translate("PrismaTri", "y:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("PrismaTri", "Trasladar", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("PrismaTri", "Zoom in", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("PrismaTri", "Rotar", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("PrismaTri", "Reflexi\303\263n Horizontal", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("PrismaTri", "Zoom out", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("PrismaTri", "Reflexi\303\263n Vetical", Q_NULLPTR));
        label_5->setText(QApplication::translate("PrismaTri", "grados:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PrismaTri: public Ui_PrismaTri {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRISMATRI_H
