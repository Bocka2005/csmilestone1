/********************************************************************************
** Form generated from reading UI file 'gameoverwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOVERWINDOW_H
#define UI_GAMEOVERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GameOverWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *yes_butt;
    QPushButton *no_butt;

    void setupUi(QDialog *GameOverWindow)
    {
        if (GameOverWindow->objectName().isEmpty())
            GameOverWindow->setObjectName("GameOverWindow");
        GameOverWindow->resize(557, 355);
        label = new QLabel(GameOverWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 10, 371, 111));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        label->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Calibri")});
        font.setPointSize(55);
        label->setFont(font);
        label_2 = new QLabel(GameOverWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 110, 411, 101));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Calibri")});
        font1.setPointSize(26);
        label_2->setFont(font1);
        yes_butt = new QPushButton(GameOverWindow);
        yes_butt->setObjectName("yes_butt");
        yes_butt->setGeometry(QRect(130, 250, 131, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Calibri")});
        font2.setPointSize(12);
        yes_butt->setFont(font2);
        no_butt = new QPushButton(GameOverWindow);
        no_butt->setObjectName("no_butt");
        no_butt->setGeometry(QRect(290, 250, 131, 41));
        no_butt->setFont(font2);

        retranslateUi(GameOverWindow);

        QMetaObject::connectSlotsByName(GameOverWindow);
    } // setupUi

    void retranslateUi(QDialog *GameOverWindow)
    {
        GameOverWindow->setWindowTitle(QCoreApplication::translate("GameOverWindow", "Game Over", nullptr));
        label->setText(QCoreApplication::translate("GameOverWindow", "GAME OVER", nullptr));
        label_2->setText(QCoreApplication::translate("GameOverWindow", "Would you like to play again?", nullptr));
#if QT_CONFIG(tooltip)
        yes_butt->setToolTip(QCoreApplication::translate("GameOverWindow", "Continue", nullptr));
#endif // QT_CONFIG(tooltip)
        yes_butt->setText(QCoreApplication::translate("GameOverWindow", "Yes, Retry!", nullptr));
#if QT_CONFIG(tooltip)
        no_butt->setToolTip(QCoreApplication::translate("GameOverWindow", "Quit", nullptr));
#endif // QT_CONFIG(tooltip)
        no_butt->setText(QCoreApplication::translate("GameOverWindow", "No, Quit!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameOverWindow: public Ui_GameOverWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVERWINDOW_H
