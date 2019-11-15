/********************************************************************************
** Form generated from reading UI file 'arcs.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCS_H
#define UI_ARCS_H

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

class Ui_Arc
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

    void setupUi(QDialog *Arc)
    {
        if (Arc->objectName().isEmpty())
            Arc->setObjectName(QStringLiteral("Arc"));
        Arc->resize(900, 600);
        label = new QLabel(Arc);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 41, 16));
        label_2 = new QLabel(Arc);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 10, 51, 16));
        boxRadio = new QTextEdit(Arc);
        boxRadio->setObjectName(QStringLiteral("boxRadio"));
        boxRadio->setGeometry(QRect(60, 10, 41, 21));
        boxAngulo = new QTextEdit(Arc);
        boxAngulo->setObjectName(QStringLiteral("boxAngulo"));
        boxAngulo->setGeometry(QRect(160, 10, 41, 21));
        pushButton = new QPushButton(Arc);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(50, 40, 113, 32));
        label_3 = new QLabel(Arc);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(240, 10, 41, 16));
        boxXinicio = new QTextEdit(Arc);
        boxXinicio->setObjectName(QStringLiteral("boxXinicio"));
        boxXinicio->setGeometry(QRect(260, 10, 41, 21));
        label_4 = new QLabel(Arc);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(320, 10, 51, 16));
        boxYinicio = new QTextEdit(Arc);
        boxYinicio->setObjectName(QStringLiteral("boxYinicio"));
        boxYinicio->setGeometry(QRect(340, 10, 41, 21));
        pushButton_2 = new QPushButton(Arc);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 40, 113, 32));
        pushButton_3 = new QPushButton(Arc);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(432, 40, 101, 32));
        pushButton_4 = new QPushButton(Arc);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(600, 10, 151, 32));
        pushButton_5 = new QPushButton(Arc);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(750, 10, 131, 32));
        pushButton_6 = new QPushButton(Arc);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(600, 40, 151, 32));
        pushButton_7 = new QPushButton(Arc);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(750, 40, 131, 32));
        boxGrados = new QTextEdit(Arc);
        boxGrados->setObjectName(QStringLiteral("boxGrados"));
        boxGrados->setGeometry(QRect(490, 10, 41, 21));
        label_5 = new QLabel(Arc);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(440, 10, 51, 16));

        retranslateUi(Arc);

        QMetaObject::connectSlotsByName(Arc);
    } // setupUi

    void retranslateUi(QDialog *Arc)
    {
        Arc->setWindowTitle(QApplication::translate("Arc", "Arc", Q_NULLPTR));
        label->setText(QApplication::translate("Arc", "radio:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Arc", "\303\241ngulo:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Arc", "Dibujar", Q_NULLPTR));
        label_3->setText(QApplication::translate("Arc", "x:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Arc", "y:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Arc", "Trasladar", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Arc", "Rotar", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Arc", "Zoom in", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Arc", "Zoom out", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Arc", "Reflexi\303\263n horizontal", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("Arc", "Reflexi\303\263n vertical", Q_NULLPTR));
        label_5->setText(QApplication::translate("Arc", "grados:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Arc: public Ui_Arc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCS_H
