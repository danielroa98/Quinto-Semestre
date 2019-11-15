/********************************************************************************
** Form generated from reading UI file 'prismarec.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRISMAREC_H
#define UI_PRISMAREC_H

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

    void setupUi(QDialog *PrismaRec)
    {
        if (PrismaRec->objectName().isEmpty())
            PrismaRec->setObjectName(QStringLiteral("PrismaRec"));
        PrismaRec->resize(900, 600);
        pushButton = new QPushButton(PrismaRec);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 40, 113, 32));
        label_4 = new QLabel(PrismaRec);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(250, 10, 51, 16));
        boxYinicio = new QTextEdit(PrismaRec);
        boxYinicio->setObjectName(QStringLiteral("boxYinicio"));
        boxYinicio->setGeometry(QRect(270, 10, 41, 21));
        pushButton_2 = new QPushButton(PrismaRec);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 40, 113, 32));
        label_3 = new QLabel(PrismaRec);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 10, 41, 16));
        boxXinicio = new QTextEdit(PrismaRec);
        boxXinicio->setObjectName(QStringLiteral("boxXinicio"));
        boxXinicio->setGeometry(QRect(190, 10, 41, 21));
        pushButton_5 = new QPushButton(PrismaRec);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(550, 10, 151, 32));
        pushButton_3 = new QPushButton(PrismaRec);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(370, 40, 113, 32));
        pushButton_6 = new QPushButton(PrismaRec);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(550, 40, 151, 32));
        pushButton_4 = new QPushButton(PrismaRec);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(710, 10, 151, 32));
        pushButton_7 = new QPushButton(PrismaRec);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(710, 40, 151, 32));
        boxGrados = new QTextEdit(PrismaRec);
        boxGrados->setObjectName(QStringLiteral("boxGrados"));
        boxGrados->setGeometry(QRect(440, 10, 41, 21));
        label_5 = new QLabel(PrismaRec);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(380, 10, 51, 16));

        retranslateUi(PrismaRec);

        QMetaObject::connectSlotsByName(PrismaRec);
    } // setupUi

    void retranslateUi(QDialog *PrismaRec)
    {
        PrismaRec->setWindowTitle(QApplication::translate("PrismaRec", "Prisma Rectangular", Q_NULLPTR));
        pushButton->setText(QApplication::translate("PrismaRec", "Dibujar", Q_NULLPTR));
        label_4->setText(QApplication::translate("PrismaRec", "y:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("PrismaRec", "Trasladar", Q_NULLPTR));
        label_3->setText(QApplication::translate("PrismaRec", "x:", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("PrismaRec", "Zoom in", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("PrismaRec", "Rotar", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("PrismaRec", "Reflexi\303\263n Horizontal", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("PrismaRec", "Zoom out", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("PrismaRec", "Reflexi\303\263n Vetical", Q_NULLPTR));
        label_5->setText(QApplication::translate("PrismaRec", "grados:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PrismaRec: public Ui_PrismaRec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRISMAREC_H
