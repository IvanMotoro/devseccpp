/********************************************************************************
** Form generated from reading UI file 'siteAdd.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SITEADD_H
#define UI_SITEADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SiteAdd
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *inputUrl;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *inputLogin;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *inputPass;

    void setupUi(QDialog *SiteAdd)
    {
        if (SiteAdd->objectName().isEmpty())
            SiteAdd->setObjectName(QString::fromUtf8("SiteAdd"));
        SiteAdd->resize(400, 300);
        buttonBox = new QDialogButtonBox(SiteAdd);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(0, 240, 310, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);
        verticalLayoutWidget = new QWidget(SiteAdd);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(90, 30, 261, 191));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(60, 0));
        label_2->setMaximumSize(QSize(500, 16777215));

        horizontalLayout_2->addWidget(label_2);

        inputUrl = new QLineEdit(verticalLayoutWidget);
        inputUrl->setObjectName(QString::fromUtf8("inputUrl"));

        horizontalLayout_2->addWidget(inputUrl);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(60, 0));
        label->setMaximumSize(QSize(500, 16777215));

        horizontalLayout->addWidget(label);

        inputLogin = new QLineEdit(verticalLayoutWidget);
        inputLogin->setObjectName(QString::fromUtf8("inputLogin"));
        inputLogin->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(inputLogin);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(60, 0));
        label_3->setMaximumSize(QSize(500, 16777215));

        horizontalLayout_3->addWidget(label_3);

        inputPass = new QLineEdit(verticalLayoutWidget);
        inputPass->setObjectName(QString::fromUtf8("inputPass"));
        inputPass->setMaximumSize(QSize(300, 16777215));
        inputPass->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(inputPass);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(SiteAdd);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SiteAdd, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SiteAdd, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SiteAdd);
    } // setupUi

    void retranslateUi(QDialog *SiteAdd)
    {
        SiteAdd->setWindowTitle(QCoreApplication::translate("SiteAdd", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("SiteAdd", "URL", nullptr));
        label->setText(QCoreApplication::translate("SiteAdd", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_3->setText(QCoreApplication::translate("SiteAdd", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SiteAdd: public Ui_SiteAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SITEADD_H
