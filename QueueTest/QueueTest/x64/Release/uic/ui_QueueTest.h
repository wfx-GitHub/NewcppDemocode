/********************************************************************************
** Form generated from reading UI file 'QueueTest.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUEUETEST_H
#define UI_QUEUETEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QueueTestClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *BtnAddTask;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEditTaskqueue;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *textEditFinished;

    void setupUi(QMainWindow *QueueTestClass)
    {
        if (QueueTestClass->objectName().isEmpty())
            QueueTestClass->setObjectName(QString::fromUtf8("QueueTestClass"));
        QueueTestClass->resize(472, 475);
        centralWidget = new QWidget(QueueTestClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_5 = new QVBoxLayout(centralWidget);
        verticalLayout_5->setSpacing(5);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(5, 5, 5, 5);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(5);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(5, 5, 5, 5);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 5, 5, 5);
        horizontalSpacer = new QSpacerItem(240, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        BtnAddTask = new QPushButton(widget_2);
        BtnAddTask->setObjectName(QString::fromUtf8("BtnAddTask"));

        horizontalLayout_2->addWidget(BtnAddTask);

        horizontalSpacer_2 = new QSpacerItem(239, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_4->addWidget(widget_2);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        groupBox = new QGroupBox(widget_3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(5);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        textEditTaskqueue = new QTextEdit(groupBox);
        textEditTaskqueue->setObjectName(QString::fromUtf8("textEditTaskqueue"));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(12);
        textEditTaskqueue->setFont(font);

        verticalLayout->addWidget(textEditTaskqueue);


        horizontalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(widget_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        textEditFinished = new QTextEdit(groupBox_3);
        textEditFinished->setObjectName(QString::fromUtf8("textEditFinished"));
        textEditFinished->setFont(font);

        verticalLayout_3->addWidget(textEditFinished);


        horizontalLayout->addWidget(groupBox_3);


        verticalLayout_4->addWidget(widget_3);


        verticalLayout_5->addWidget(widget);

        QueueTestClass->setCentralWidget(centralWidget);

        retranslateUi(QueueTestClass);

        QMetaObject::connectSlotsByName(QueueTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *QueueTestClass)
    {
        QueueTestClass->setWindowTitle(QCoreApplication::translate("QueueTestClass", "QueueTest", nullptr));
        BtnAddTask->setText(QCoreApplication::translate("QueueTestClass", "\346\226\260\345\242\236\344\273\273\345\212\241", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QueueTestClass", "\344\273\273\345\212\241\345\210\227\350\241\250", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QueueTestClass", "\345\267\262\347\273\217\345\256\214\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QueueTestClass: public Ui_QueueTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUEUETEST_H
