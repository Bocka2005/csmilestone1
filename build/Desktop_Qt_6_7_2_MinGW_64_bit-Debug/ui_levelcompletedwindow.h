/********************************************************************************
** Form generated from reading UI file 'levelcompletedwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEVELCOMPLETEDWINDOW_H
#define UI_LEVELCOMPLETEDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LevelCompletedWindow
{
public:
    QLabel *label;
    QPushButton *yes_butt;
    QPushButton *no_butt;
    QLabel *label_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(597, 317);
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 10, 531, 111));
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
        yes_butt = new QPushButton(Dialog);
        yes_butt->setObjectName("yes_butt");
        yes_butt->setGeometry(QRect(160, 250, 131, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Calibri")});
        font1.setPointSize(12);
        yes_butt->setFont(font1);
        no_butt = new QPushButton(Dialog);
        no_butt->setObjectName("no_butt");
        no_butt->setGeometry(QRect(320, 250, 131, 41));
        no_butt->setFont(font1);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 110, 501, 101));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Calibri")});
        font2.setPointSize(26);
        label_2->setFont(font2);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("LevelCompletedWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("LevelCompletedWindow", "Level Completed!", nullptr));
#if QT_CONFIG(tooltip)
        yes_butt->setToolTip(QCoreApplication::translate("LevelCompletedWindow", "Continue", nullptr));
#endif // QT_CONFIG(tooltip)
        yes_butt->setText(QCoreApplication::translate("LevelCompletedWindow", "Yes", nullptr));
#if QT_CONFIG(tooltip)
        no_butt->setToolTip(QCoreApplication::translate("LevelCompletedWindow", "Quit", nullptr));
#endif // QT_CONFIG(tooltip)
        no_butt->setText(QCoreApplication::translate("LevelCompletedWindow", "No", nullptr));
        label_2->setText(QCoreApplication::translate("LevelCompletedWindow", "Would you like to continue playing?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LevelCompletedWindow: public Ui_LevelCompletedWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVELCOMPLETEDWINDOW_H
