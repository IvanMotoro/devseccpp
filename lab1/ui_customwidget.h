/********************************************************************************
** Form generated from reading UI file 'customwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMWIDGET_H
#define UI_CUSTOMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *labelURL;
    QLineEdit *labelLogin;
    QLineEdit *labelPass;
    QPushButton *toolButton;

    void setupUi(QWidget *CustomWidget)
    {
        if (CustomWidget->objectName().isEmpty())
            CustomWidget->setObjectName(QString::fromUtf8("CustomWidget"));
        CustomWidget->resize(563, 60);
        horizontalLayout = new QHBoxLayout(CustomWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelURL = new QLineEdit(CustomWidget);
        labelURL->setObjectName(QString::fromUtf8("labelURL"));
        labelURL->setReadOnly(true);

        horizontalLayout->addWidget(labelURL);

        labelLogin = new QLineEdit(CustomWidget);
        labelLogin->setObjectName(QString::fromUtf8("labelLogin"));
        labelLogin->setEchoMode(QLineEdit::Password);
        labelLogin->setReadOnly(true);

        horizontalLayout->addWidget(labelLogin);

        labelPass = new QLineEdit(CustomWidget);
        labelPass->setObjectName(QString::fromUtf8("labelPass"));
        labelPass->setEchoMode(QLineEdit::Password);
        labelPass->setReadOnly(true);

        horizontalLayout->addWidget(labelPass);

        toolButton = new QPushButton(CustomWidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setMinimumSize(QSize(100, 40));
        toolButton->setMaximumSize(QSize(100, 120));

        horizontalLayout->addWidget(toolButton);


        retranslateUi(CustomWidget);

        QMetaObject::connectSlotsByName(CustomWidget);
    } // setupUi

    void retranslateUi(QWidget *CustomWidget)
    {
        CustomWidget->setWindowTitle(QCoreApplication::translate("CustomWidget", "Form", nullptr));
        labelLogin->setText(QString());
        labelPass->setText(QString());
        toolButton->setText(QCoreApplication::translate("CustomWidget", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomWidget: public Ui_CustomWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMWIDGET_H
