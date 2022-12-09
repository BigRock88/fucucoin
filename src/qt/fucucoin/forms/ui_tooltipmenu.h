/********************************************************************************
** Form generated from reading UI file 'tooltipmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLTIPMENU_H
#define UI_TOOLTIPMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TooltipMenu
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *container;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnCopy;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnEdit;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnDelete;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnLast;

    void setupUi(QWidget *TooltipMenu)
    {
        if (TooltipMenu->objectName().isEmpty())
            TooltipMenu->setObjectName(QStringLiteral("TooltipMenu"));
        TooltipMenu->resize(90, 110);
        TooltipMenu->setMinimumSize(QSize(90, 110));
        TooltipMenu->setMaximumSize(QSize(16777215, 140));
        verticalLayout_2 = new QVBoxLayout(TooltipMenu);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        container = new QWidget(TooltipMenu);
        container->setObjectName(QStringLiteral("container"));
        verticalLayout_3 = new QVBoxLayout(container);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnCopy = new QPushButton(container);
        btnCopy->setObjectName(QStringLiteral("btnCopy"));
        btnCopy->setMinimumSize(QSize(30, 30));
        btnCopy->setMaximumSize(QSize(16777215, 30));
        btnCopy->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(btnCopy);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btnEdit = new QPushButton(container);
        btnEdit->setObjectName(QStringLiteral("btnEdit"));
        btnEdit->setMinimumSize(QSize(30, 30));
        btnEdit->setMaximumSize(QSize(16777215, 30));
        btnEdit->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(btnEdit);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        btnDelete = new QPushButton(container);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));
        btnDelete->setMinimumSize(QSize(30, 30));
        btnDelete->setMaximumSize(QSize(16777215, 30));
        btnDelete->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(btnDelete);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        btnLast = new QPushButton(container);
        btnLast->setObjectName(QStringLiteral("btnLast"));
        btnLast->setMinimumSize(QSize(30, 30));
        btnLast->setMaximumSize(QSize(16777215, 30));
        btnLast->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_5->addWidget(btnLast);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_2->addWidget(container);


        retranslateUi(TooltipMenu);

        QMetaObject::connectSlotsByName(TooltipMenu);
    } // setupUi

    void retranslateUi(QWidget *TooltipMenu)
    {
        TooltipMenu->setWindowTitle(QApplication::translate("TooltipMenu", "Form", Q_NULLPTR));
        btnCopy->setText(QApplication::translate("TooltipMenu", "Copy", Q_NULLPTR));
        btnEdit->setText(QApplication::translate("TooltipMenu", "Edit", Q_NULLPTR));
        btnDelete->setText(QApplication::translate("TooltipMenu", "Delete", Q_NULLPTR));
        btnLast->setText(QApplication::translate("TooltipMenu", "Last", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TooltipMenu: public Ui_TooltipMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLTIPMENU_H
