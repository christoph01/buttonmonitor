/********************************************************************************
** Form generated from reading UI file 'buttonmonitor.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTONMONITOR_H
#define UI_BUTTONMONITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ButtonMonitor
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *firstbutton;
    QLabel *secondbutton;
    QLabel *thirdbutton;

    void setupUi(QWidget *ButtonMonitor)
    {
        if (ButtonMonitor->objectName().isEmpty())
            ButtonMonitor->setObjectName(QStringLiteral("ButtonMonitor"));
        ButtonMonitor->resize(400, 300);
        layoutWidget = new QWidget(ButtonMonitor);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 401, 301));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        firstbutton = new QLabel(layoutWidget);
        firstbutton->setObjectName(QStringLiteral("firstbutton"));
        firstbutton->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: green;"));
        firstbutton->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(firstbutton);

        secondbutton = new QLabel(layoutWidget);
        secondbutton->setObjectName(QStringLiteral("secondbutton"));
        secondbutton->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));
        secondbutton->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(secondbutton);

        thirdbutton = new QLabel(layoutWidget);
        thirdbutton->setObjectName(QStringLiteral("thirdbutton"));
        thirdbutton->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));
        thirdbutton->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(thirdbutton);


        retranslateUi(ButtonMonitor);

        QMetaObject::connectSlotsByName(ButtonMonitor);
    } // setupUi

    void retranslateUi(QWidget *ButtonMonitor)
    {
        ButtonMonitor->setWindowTitle(QApplication::translate("ButtonMonitor", "ButtonMonitor", Q_NULLPTR));
        firstbutton->setText(QApplication::translate("ButtonMonitor", "1.Button: 0", Q_NULLPTR));
        secondbutton->setText(QApplication::translate("ButtonMonitor", "2.Button: 0", Q_NULLPTR));
        thirdbutton->setText(QApplication::translate("ButtonMonitor", "3.Button: 0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ButtonMonitor: public Ui_ButtonMonitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONMONITOR_H
