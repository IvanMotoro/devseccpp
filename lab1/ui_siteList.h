/********************************************************************************
** Form generated from reading UI file 'siteList.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SITELIST_H
#define UI_SITELIST_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SiteList
{
public:
    QListWidget *listWidget;
    QPushButton *addAccBtn;
    QLineEdit *searchInput;
    QPushButton *searchButton;

    void setupUi(QDialog *SiteList)
    {
        if (SiteList->objectName().isEmpty())
            SiteList->setObjectName(QString::fromUtf8("SiteList"));
        SiteList->resize(614, 517);
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/artjm/Desktop/64x64.png"), QSize(), QIcon::Normal, QIcon::Off);
        SiteList->setWindowIcon(icon);
        SiteList->setWindowOpacity(1.000000000000000);
        listWidget = new QListWidget(SiteList);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 70, 571, 431));
        listWidget->setResizeMode(QListView::Fixed);
        listWidget->setSpacing(0);
        addAccBtn = new QPushButton(SiteList);
        addAccBtn->setObjectName(QString::fromUtf8("addAccBtn"));
        addAccBtn->setGeometry(QRect(250, 20, 200, 41));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addAccBtn->sizePolicy().hasHeightForWidth());
        addAccBtn->setSizePolicy(sizePolicy);
        addAccBtn->setMinimumSize(QSize(120, 0));
        searchInput = new QLineEdit(SiteList);
        searchInput->setObjectName(QString::fromUtf8("searchInput"));
        searchInput->setGeometry(QRect(20, 30, 113, 24));
        searchButton = new QPushButton(SiteList);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(140, 30, 51, 24));

        retranslateUi(SiteList);

        QMetaObject::connectSlotsByName(SiteList);
    } // setupUi

    void retranslateUi(QDialog *SiteList)
    {
        SiteList->setWindowTitle(QCoreApplication::translate("SiteList", "Dialog", nullptr));
        addAccBtn->setText(QCoreApplication::translate("SiteList", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\320\260\320\271\321\202", nullptr));
        searchButton->setText(QCoreApplication::translate("SiteList", "\320\237\320\276\320\270\321\201\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SiteList: public Ui_SiteList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SITELIST_H
