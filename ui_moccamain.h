/********************************************************************************
** Form generated from reading UI file 'moccamain.ui'
**
** Created: Fri Apr 1 22:52:15 2011
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOCCAMAIN_H
#define UI_MOCCAMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MoccaMain
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtIP;
    QSpinBox *spnPort;
    QPushButton *butConnecter;
    QPushButton *pushButton;
    QTreeWidget *treeWidget;
    QSpacerItem *horizontalSpacer;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MoccaMain)
    {
        if (MoccaMain->objectName().isEmpty())
            MoccaMain->setObjectName(QString::fromUtf8("MoccaMain"));
        MoccaMain->resize(447, 299);
        centralwidget = new QWidget(MoccaMain);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        txtIP = new QLineEdit(groupBox);
        txtIP->setObjectName(QString::fromUtf8("txtIP"));
        txtIP->setMinimumSize(QSize(140, 0));

        horizontalLayout->addWidget(txtIP);

        spnPort = new QSpinBox(groupBox);
        spnPort->setObjectName(QString::fromUtf8("spnPort"));
        spnPort->setMaximum(65000);

        horizontalLayout->addWidget(spnPort);


        gridLayout->addWidget(groupBox, 0, 0, 2, 1);

        butConnecter = new QPushButton(centralwidget);
        butConnecter->setObjectName(QString::fromUtf8("butConnecter"));
        butConnecter->setCheckable(false);

        gridLayout->addWidget(butConnecter, 0, 2, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 2, 1, 1);

        treeWidget = new QTreeWidget(centralwidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setUniformRowHeights(true);
        treeWidget->setItemsExpandable(false);
        treeWidget->setSortingEnabled(true);
        treeWidget->setAnimated(false);
        treeWidget->setHeaderHidden(false);
        treeWidget->setExpandsOnDoubleClick(false);

        gridLayout->addWidget(treeWidget, 2, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 2, 1);

        MoccaMain->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MoccaMain);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MoccaMain->setStatusBar(statusbar);

        retranslateUi(MoccaMain);

        QMetaObject::connectSlotsByName(MoccaMain);
    } // setupUi

    void retranslateUi(QMainWindow *MoccaMain)
    {
        MoccaMain->setWindowTitle(QApplication::translate("MoccaMain", "Mocca v0.1", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MoccaMain", "Adresse du serveur", 0, QApplication::UnicodeUTF8));
        butConnecter->setText(QApplication::translate("MoccaMain", "Se connecter", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MoccaMain", "Se d\303\251connecter", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(5, QApplication::translate("MoccaMain", "Protocole", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(4, QApplication::translate("MoccaMain", "Adresse", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("MoccaMain", "FPS", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("MoccaMain", "Type", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("MoccaMain", "Titre", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("MoccaMain", "ID", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MoccaMain: public Ui_MoccaMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOCCAMAIN_H
