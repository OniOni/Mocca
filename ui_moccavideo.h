/********************************************************************************
** Form generated from reading UI file 'moccavideo.ui'
**
** Created: Fri Apr 1 22:52:15 2011
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOCCAVIDEO_H
#define UI_MOCCAVIDEO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MoccaVideo
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGraphicsView *graphicsView;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QPushButton *butPlayPause;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *MoccaVideo)
    {
        if (MoccaVideo->objectName().isEmpty())
            MoccaVideo->setObjectName(QString::fromUtf8("MoccaVideo"));
        MoccaVideo->resize(400, 300);
        gridLayout = new QGridLayout(MoccaVideo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(MoccaVideo);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        graphicsView = new QGraphicsView(tab);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout_2->addWidget(graphicsView);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 3);

        butPlayPause = new QPushButton(MoccaVideo);
        butPlayPause->setObjectName(QString::fromUtf8("butPlayPause"));

        gridLayout->addWidget(butPlayPause, 1, 0, 1, 1);

        pushButton = new QPushButton(MoccaVideo);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(197, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);


        retranslateUi(MoccaVideo);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MoccaVideo);
    } // setupUi

    void retranslateUi(QWidget *MoccaVideo)
    {
        MoccaVideo->setWindowTitle(QApplication::translate("MoccaVideo", "Form", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MoccaVideo", "Vid\303\251o mode", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MoccaVideo", "Debug mode", 0, QApplication::UnicodeUTF8));
        butPlayPause->setText(QApplication::translate("MoccaVideo", "Lecture", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MoccaVideo", "Stop", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MoccaVideo: public Ui_MoccaVideo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOCCAVIDEO_H
