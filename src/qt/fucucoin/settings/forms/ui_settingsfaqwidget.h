/********************************************************************************
** Form generated from reading UI file 'settingsfaqwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSFAQWIDGET_H
#define UI_SETTINGSFAQWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/fucucoin/pfborderimage.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsFaqWidget
{
public:
    QHBoxLayout *horizontalLayout;
    PFBorderImage *container;
    QVBoxLayout *verticalLayoutcont;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonExit;
    QHBoxLayout *horizontalLayout_6;
    QWidget *left;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *containerButtons;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_9;
    QPushButton *pushButton_Intro;
    QPushButton *pushButton_UnspendableFUCU;
    QPushButton *pushButton_Stake;
    QPushButton *pushButton_Support;
    QPushButton *pushButton_Masternode;
    QPushButton *pushButton_MNController;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelWebLink;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonWebLink;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QWidget *right;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollAreaFaq;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_Intro;
    QHBoxLayout *horizontalLayout_Intro;
    QLabel *labelNumber_Intro;
    QVBoxLayout *verticalLayout_Intro;
    QLabel *labelSubtitle_Intro;
    QSpacerItem *verticalSpacer1_Intro;
    QLabel *labelContent_Intro;
    QSpacerItem *verticalSpacer2_Intro;
    QWidget *widget_UnspendableFUCU;
    QHBoxLayout *horizontalPage_UnspendableFUCU;
    QLabel *labelNumber_UnspendableFUCU;
    QVBoxLayout *verticalLayout_UnspendableFUCU;
    QLabel *labelSubtitle_UnspendableFUCU;
    QSpacerItem *verticalSpacer1_UnspendableFUCU;
    QLabel *labelContent_UnspendableFUCU;
    QSpacerItem *verticalSpacer2_UnspendableFUCU;
    QWidget *widget_Stake;
    QHBoxLayout *horizontalpage_Stake;
    QLabel *labelNumber_Stake;
    QVBoxLayout *verticalLayoutpage_Stake;
    QLabel *labelSubtitle_Stake;
    QSpacerItem *verticalSpacer1_Stake;
    QLabel *labelContent_Stake;
    QSpacerItem *verticalSpacer2_Stake;
    QWidget *widget_Support;
    QHBoxLayout *horizontalpage_Support;
    QLabel *labelNumber_Support;
    QVBoxLayout *verticalLayoutpage_Support;
    QLabel *labelSubtitle_Support;
    QSpacerItem *verticalSpacer1_Support;
    QLabel *labelContent_Support;
    QSpacerItem *verticalSpacer2_Support;
    QWidget *widget_Masternode;
    QHBoxLayout *horizontalpage_Masternode;
    QLabel *labelNumber_Masternode;
    QVBoxLayout *verticalLayoutpage_Masternode;
    QLabel *labelSubtitle_Masternode;
    QSpacerItem *verticalSpacer1_Masternode;
    QLabel *labelContent_Masternode;
    QSpacerItem *verticalSpacer2_Masternode;
    QWidget *widget_MNController;
    QHBoxLayout *horizontalpage_MNController;
    QLabel *labelNumber_MNController;
    QVBoxLayout *verticalLayoutpage_MNController;
    QLabel *labelSubtitle_MNController;
    QSpacerItem *verticalSpacer1_MNController;
    QLabel *labelContent_MNController;
    QSpacerItem *verticalSpacer2_MNController;

    void setupUi(QWidget *SettingsFaqWidget)
    {
        if (SettingsFaqWidget->objectName().isEmpty())
            SettingsFaqWidget->setObjectName(QStringLiteral("SettingsFaqWidget"));
        SettingsFaqWidget->resize(1203, 1741);
        horizontalLayout = new QHBoxLayout(SettingsFaqWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        container = new PFBorderImage(SettingsFaqWidget);
        container->setObjectName(QStringLiteral("container"));
        verticalLayoutcont = new QVBoxLayout(container);
        verticalLayoutcont->setObjectName(QStringLiteral("verticalLayoutcont"));
        verticalLayoutcont->setContentsMargins(36, 44, 36, 44);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(10, -1, 10, -1);
        labelTitle = new QLabel(container);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        horizontalLayout_3->addWidget(labelTitle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonExit = new QPushButton(container);
        pushButtonExit->setObjectName(QStringLiteral("pushButtonExit"));

        horizontalLayout_3->addWidget(pushButtonExit);


        verticalLayoutcont->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        left = new QWidget(container);
        left->setObjectName(QStringLiteral("left"));
        verticalLayout_3 = new QVBoxLayout(left);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        containerButtons = new QWidget(left);
        containerButtons->setObjectName(QStringLiteral("containerButtons"));
        verticalLayout = new QVBoxLayout(containerButtons);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(containerButtons);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_9 = new QVBoxLayout(groupBox);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        pushButton_Intro = new QPushButton(groupBox);
        pushButton_Intro->setObjectName(QStringLiteral("pushButton_Intro"));
        pushButton_Intro->setMinimumSize(QSize(0, 50));
        pushButton_Intro->setMaximumSize(QSize(16777215, 50));
        pushButton_Intro->setFocusPolicy(Qt::NoFocus);
        pushButton_Intro->setCheckable(true);
        pushButton_Intro->setChecked(true);
        pushButton_Intro->setAutoExclusive(true);

        verticalLayout_9->addWidget(pushButton_Intro);

        pushButton_UnspendableFUCU = new QPushButton(groupBox);
        pushButton_UnspendableFUCU->setObjectName(QStringLiteral("pushButton_UnspendableFUCU"));
        pushButton_UnspendableFUCU->setMinimumSize(QSize(0, 50));
        pushButton_UnspendableFUCU->setMaximumSize(QSize(16777215, 50));
        pushButton_UnspendableFUCU->setFocusPolicy(Qt::NoFocus);
        pushButton_UnspendableFUCU->setCheckable(true);
        pushButton_UnspendableFUCU->setAutoExclusive(true);

        verticalLayout_9->addWidget(pushButton_UnspendableFUCU);

        pushButton_Stake = new QPushButton(groupBox);
        pushButton_Stake->setObjectName(QStringLiteral("pushButton_Stake"));
        pushButton_Stake->setMinimumSize(QSize(0, 50));
        pushButton_Stake->setFocusPolicy(Qt::NoFocus);
        pushButton_Stake->setCheckable(true);
        pushButton_Stake->setAutoExclusive(true);

        verticalLayout_9->addWidget(pushButton_Stake);

        pushButton_Support = new QPushButton(groupBox);
        pushButton_Support->setObjectName(QStringLiteral("pushButton_Support"));
        pushButton_Support->setMinimumSize(QSize(0, 50));
        pushButton_Support->setFocusPolicy(Qt::NoFocus);
        pushButton_Support->setCheckable(true);
        pushButton_Support->setAutoExclusive(true);

        verticalLayout_9->addWidget(pushButton_Support);

        pushButton_Masternode = new QPushButton(groupBox);
        pushButton_Masternode->setObjectName(QStringLiteral("pushButton_Masternode"));
        pushButton_Masternode->setMinimumSize(QSize(0, 50));
        pushButton_Masternode->setFocusPolicy(Qt::NoFocus);
        pushButton_Masternode->setCheckable(true);
        pushButton_Masternode->setAutoExclusive(true);

        verticalLayout_9->addWidget(pushButton_Masternode);

        pushButton_MNController = new QPushButton(groupBox);
        pushButton_MNController->setObjectName(QStringLiteral("pushButton_MNController"));
        pushButton_MNController->setMinimumSize(QSize(0, 50));
        pushButton_MNController->setFocusPolicy(Qt::NoFocus);
        pushButton_MNController->setCheckable(true);
        pushButton_MNController->setAutoExclusive(true);

        verticalLayout_9->addWidget(pushButton_MNController);


        verticalLayout->addWidget(groupBox);


        verticalLayout_2->addWidget(containerButtons);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelWebLink = new QLabel(left);
        labelWebLink->setObjectName(QStringLiteral("labelWebLink"));

        horizontalLayout_2->addWidget(labelWebLink);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pushButtonWebLink = new QPushButton(left);
        pushButtonWebLink->setObjectName(QStringLiteral("pushButtonWebLink"));
        pushButtonWebLink->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(pushButtonWebLink);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_6->addWidget(left);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        right = new QWidget(container);
        right->setObjectName(QStringLiteral("right"));
        verticalLayout_5 = new QVBoxLayout(right);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        scrollAreaFaq = new QScrollArea(right);
        scrollAreaFaq->setObjectName(QStringLiteral("scrollAreaFaq"));
        scrollAreaFaq->setStyleSheet(QStringLiteral("#scrollAreaFaq { background:transparent; }"));
        scrollAreaFaq->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollAreaFaq->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollAreaFaq->setWidgetResizable(true);
        scrollAreaFaq->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 642, 1614));
        scrollAreaWidgetContents->setAutoFillBackground(false);
        scrollAreaWidgetContents->setStyleSheet(QStringLiteral("#scrollAreaWidgetContents { background:transparent; }"));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        widget_Intro = new QWidget(scrollAreaWidgetContents);
        widget_Intro->setObjectName(QStringLiteral("widget_Intro"));
        widget_Intro->setMinimumSize(QSize(300, 0));
        horizontalLayout_Intro = new QHBoxLayout(widget_Intro);
        horizontalLayout_Intro->setObjectName(QStringLiteral("horizontalLayout_Intro"));
        labelNumber_Intro = new QLabel(widget_Intro);
        labelNumber_Intro->setObjectName(QStringLiteral("labelNumber_Intro"));
        labelNumber_Intro->setMinimumSize(QSize(24, 24));
        labelNumber_Intro->setMaximumSize(QSize(16777215, 24));
        labelNumber_Intro->setAlignment(Qt::AlignCenter);

        horizontalLayout_Intro->addWidget(labelNumber_Intro, 0, Qt::AlignTop);

        verticalLayout_Intro = new QVBoxLayout();
        verticalLayout_Intro->setObjectName(QStringLiteral("verticalLayout_Intro"));
        verticalLayout_Intro->setContentsMargins(20, -1, 20, -1);
        labelSubtitle_Intro = new QLabel(widget_Intro);
        labelSubtitle_Intro->setObjectName(QStringLiteral("labelSubtitle_Intro"));
        labelSubtitle_Intro->setWordWrap(true);

        verticalLayout_Intro->addWidget(labelSubtitle_Intro);

        verticalSpacer1_Intro = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_Intro->addItem(verticalSpacer1_Intro);

        labelContent_Intro = new QLabel(widget_Intro);
        labelContent_Intro->setObjectName(QStringLiteral("labelContent_Intro"));
        labelContent_Intro->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelContent_Intro->setWordWrap(true);

        verticalLayout_Intro->addWidget(labelContent_Intro);

        verticalSpacer2_Intro = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Intro->addItem(verticalSpacer2_Intro);


        horizontalLayout_Intro->addLayout(verticalLayout_Intro);

        horizontalLayout_Intro->setStretch(1, 1);

        verticalLayout_7->addWidget(widget_Intro);

        widget_UnspendableFUCU = new QWidget(scrollAreaWidgetContents);
        widget_UnspendableFUCU->setObjectName(QStringLiteral("widget_UnspendableFUCU"));
        horizontalPage_UnspendableFUCU = new QHBoxLayout(widget_UnspendableFUCU);
        horizontalPage_UnspendableFUCU->setObjectName(QStringLiteral("horizontalPage_UnspendableFUCU"));
        labelNumber_UnspendableFUCU = new QLabel(widget_UnspendableFUCU);
        labelNumber_UnspendableFUCU->setObjectName(QStringLiteral("labelNumber_UnspendableFUCU"));
        labelNumber_UnspendableFUCU->setMinimumSize(QSize(24, 24));
        labelNumber_UnspendableFUCU->setMaximumSize(QSize(16777215, 24));
        labelNumber_UnspendableFUCU->setAlignment(Qt::AlignCenter);

        horizontalPage_UnspendableFUCU->addWidget(labelNumber_UnspendableFUCU, 0, Qt::AlignTop);

        verticalLayout_UnspendableFUCU = new QVBoxLayout();
        verticalLayout_UnspendableFUCU->setSpacing(0);
        verticalLayout_UnspendableFUCU->setObjectName(QStringLiteral("verticalLayout_UnspendableFUCU"));
        verticalLayout_UnspendableFUCU->setContentsMargins(20, -1, 20, -1);
        labelSubtitle_UnspendableFUCU = new QLabel(widget_UnspendableFUCU);
        labelSubtitle_UnspendableFUCU->setObjectName(QStringLiteral("labelSubtitle_UnspendableFUCU"));
        labelSubtitle_UnspendableFUCU->setWordWrap(true);

        verticalLayout_UnspendableFUCU->addWidget(labelSubtitle_UnspendableFUCU);

        verticalSpacer1_UnspendableFUCU = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_UnspendableFUCU->addItem(verticalSpacer1_UnspendableFUCU);

        labelContent_UnspendableFUCU = new QLabel(widget_UnspendableFUCU);
        labelContent_UnspendableFUCU->setObjectName(QStringLiteral("labelContent_UnspendableFUCU"));
        labelContent_UnspendableFUCU->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelContent_UnspendableFUCU->setWordWrap(true);

        verticalLayout_UnspendableFUCU->addWidget(labelContent_UnspendableFUCU);

        verticalSpacer2_UnspendableFUCU = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_UnspendableFUCU->addItem(verticalSpacer2_UnspendableFUCU);


        horizontalPage_UnspendableFUCU->addLayout(verticalLayout_UnspendableFUCU);

        horizontalPage_UnspendableFUCU->setStretch(1, 1);

        verticalLayout_7->addWidget(widget_UnspendableFUCU);

        widget_Stake = new QWidget(scrollAreaWidgetContents);
        widget_Stake->setObjectName(QStringLiteral("widget_Stake"));
        horizontalpage_Stake = new QHBoxLayout(widget_Stake);
        horizontalpage_Stake->setObjectName(QStringLiteral("horizontalpage_Stake"));
        labelNumber_Stake = new QLabel(widget_Stake);
        labelNumber_Stake->setObjectName(QStringLiteral("labelNumber_Stake"));
        labelNumber_Stake->setMinimumSize(QSize(24, 24));
        labelNumber_Stake->setMaximumSize(QSize(16777215, 24));
        labelNumber_Stake->setAlignment(Qt::AlignCenter);

        horizontalpage_Stake->addWidget(labelNumber_Stake, 0, Qt::AlignTop);

        verticalLayoutpage_Stake = new QVBoxLayout();
        verticalLayoutpage_Stake->setObjectName(QStringLiteral("verticalLayoutpage_Stake"));
        verticalLayoutpage_Stake->setContentsMargins(20, -1, 20, -1);
        labelSubtitle_Stake = new QLabel(widget_Stake);
        labelSubtitle_Stake->setObjectName(QStringLiteral("labelSubtitle_Stake"));
        labelSubtitle_Stake->setWordWrap(true);

        verticalLayoutpage_Stake->addWidget(labelSubtitle_Stake);

        verticalSpacer1_Stake = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutpage_Stake->addItem(verticalSpacer1_Stake);

        labelContent_Stake = new QLabel(widget_Stake);
        labelContent_Stake->setObjectName(QStringLiteral("labelContent_Stake"));
        labelContent_Stake->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelContent_Stake->setWordWrap(true);

        verticalLayoutpage_Stake->addWidget(labelContent_Stake);

        verticalSpacer2_Stake = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutpage_Stake->addItem(verticalSpacer2_Stake);


        horizontalpage_Stake->addLayout(verticalLayoutpage_Stake);

        horizontalpage_Stake->setStretch(1, 1);

        verticalLayout_7->addWidget(widget_Stake);

        widget_Support = new QWidget(scrollAreaWidgetContents);
        widget_Support->setObjectName(QStringLiteral("widget_Support"));
        horizontalpage_Support = new QHBoxLayout(widget_Support);
        horizontalpage_Support->setObjectName(QStringLiteral("horizontalpage_Support"));
        labelNumber_Support = new QLabel(widget_Support);
        labelNumber_Support->setObjectName(QStringLiteral("labelNumber_Support"));
        labelNumber_Support->setMinimumSize(QSize(24, 24));
        labelNumber_Support->setMaximumSize(QSize(16777215, 24));
        labelNumber_Support->setAlignment(Qt::AlignCenter);

        horizontalpage_Support->addWidget(labelNumber_Support, 0, Qt::AlignTop);

        verticalLayoutpage_Support = new QVBoxLayout();
        verticalLayoutpage_Support->setObjectName(QStringLiteral("verticalLayoutpage_Support"));
        verticalLayoutpage_Support->setContentsMargins(20, -1, 20, -1);
        labelSubtitle_Support = new QLabel(widget_Support);
        labelSubtitle_Support->setObjectName(QStringLiteral("labelSubtitle_Support"));
        labelSubtitle_Support->setWordWrap(true);

        verticalLayoutpage_Support->addWidget(labelSubtitle_Support);

        verticalSpacer1_Support = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutpage_Support->addItem(verticalSpacer1_Support);

        labelContent_Support = new QLabel(widget_Support);
        labelContent_Support->setObjectName(QStringLiteral("labelContent_Support"));
        labelContent_Support->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelContent_Support->setWordWrap(true);

        verticalLayoutpage_Support->addWidget(labelContent_Support);

        verticalSpacer2_Support = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutpage_Support->addItem(verticalSpacer2_Support);


        horizontalpage_Support->addLayout(verticalLayoutpage_Support);

        horizontalpage_Support->setStretch(1, 1);

        verticalLayout_7->addWidget(widget_Support);

        widget_Masternode = new QWidget(scrollAreaWidgetContents);
        widget_Masternode->setObjectName(QStringLiteral("widget_Masternode"));
        horizontalpage_Masternode = new QHBoxLayout(widget_Masternode);
        horizontalpage_Masternode->setObjectName(QStringLiteral("horizontalpage_Masternode"));
        labelNumber_Masternode = new QLabel(widget_Masternode);
        labelNumber_Masternode->setObjectName(QStringLiteral("labelNumber_Masternode"));
        labelNumber_Masternode->setMinimumSize(QSize(24, 24));
        labelNumber_Masternode->setMaximumSize(QSize(16777215, 24));
        labelNumber_Masternode->setAlignment(Qt::AlignCenter);

        horizontalpage_Masternode->addWidget(labelNumber_Masternode, 0, Qt::AlignTop);

        verticalLayoutpage_Masternode = new QVBoxLayout();
        verticalLayoutpage_Masternode->setObjectName(QStringLiteral("verticalLayoutpage_Masternode"));
        verticalLayoutpage_Masternode->setContentsMargins(20, -1, 20, -1);
        labelSubtitle_Masternode = new QLabel(widget_Masternode);
        labelSubtitle_Masternode->setObjectName(QStringLiteral("labelSubtitle_Masternode"));
        labelSubtitle_Masternode->setWordWrap(true);

        verticalLayoutpage_Masternode->addWidget(labelSubtitle_Masternode);

        verticalSpacer1_Masternode = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutpage_Masternode->addItem(verticalSpacer1_Masternode);

        labelContent_Masternode = new QLabel(widget_Masternode);
        labelContent_Masternode->setObjectName(QStringLiteral("labelContent_Masternode"));
        labelContent_Masternode->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelContent_Masternode->setWordWrap(true);

        verticalLayoutpage_Masternode->addWidget(labelContent_Masternode);

        verticalSpacer2_Masternode = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutpage_Masternode->addItem(verticalSpacer2_Masternode);


        horizontalpage_Masternode->addLayout(verticalLayoutpage_Masternode);

        horizontalpage_Masternode->setStretch(1, 1);

        verticalLayout_7->addWidget(widget_Masternode);

        widget_MNController = new QWidget(scrollAreaWidgetContents);
        widget_MNController->setObjectName(QStringLiteral("widget_MNController"));
        horizontalpage_MNController = new QHBoxLayout(widget_MNController);
        horizontalpage_MNController->setObjectName(QStringLiteral("horizontalpage_MNController"));
        labelNumber_MNController = new QLabel(widget_MNController);
        labelNumber_MNController->setObjectName(QStringLiteral("labelNumber_MNController"));
        labelNumber_MNController->setMinimumSize(QSize(24, 24));
        labelNumber_MNController->setMaximumSize(QSize(16777215, 24));
        labelNumber_MNController->setAlignment(Qt::AlignCenter);

        horizontalpage_MNController->addWidget(labelNumber_MNController, 0, Qt::AlignTop);

        verticalLayoutpage_MNController = new QVBoxLayout();
        verticalLayoutpage_MNController->setObjectName(QStringLiteral("verticalLayoutpage_MNController"));
        verticalLayoutpage_MNController->setContentsMargins(20, -1, 20, -1);
        labelSubtitle_MNController = new QLabel(widget_MNController);
        labelSubtitle_MNController->setObjectName(QStringLiteral("labelSubtitle_MNController"));
        labelSubtitle_MNController->setWordWrap(true);

        verticalLayoutpage_MNController->addWidget(labelSubtitle_MNController);

        verticalSpacer1_MNController = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutpage_MNController->addItem(verticalSpacer1_MNController);

        labelContent_MNController = new QLabel(widget_MNController);
        labelContent_MNController->setObjectName(QStringLiteral("labelContent_MNController"));
        labelContent_MNController->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelContent_MNController->setWordWrap(true);

        verticalLayoutpage_MNController->addWidget(labelContent_MNController);

        verticalSpacer2_MNController = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutpage_MNController->addItem(verticalSpacer2_MNController);


        horizontalpage_MNController->addLayout(verticalLayoutpage_MNController);

        horizontalpage_MNController->setStretch(1, 1);

        verticalLayout_7->addWidget(widget_MNController);

        scrollAreaFaq->setWidget(scrollAreaWidgetContents);

        verticalLayout_6->addWidget(scrollAreaFaq);


        verticalLayout_5->addLayout(verticalLayout_6);


        horizontalLayout_6->addWidget(right);

        horizontalLayout_6->setStretch(0, 2);
        horizontalLayout_6->setStretch(2, 3);

        verticalLayoutcont->addLayout(horizontalLayout_6);


        horizontalLayout->addWidget(container);


        retranslateUi(SettingsFaqWidget);

        QMetaObject::connectSlotsByName(SettingsFaqWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsFaqWidget)
    {
        SettingsFaqWidget->setWindowTitle(QApplication::translate("SettingsFaqWidget", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("SettingsFaqWidget", "Frequently Asked Questions", Q_NULLPTR));
        pushButtonExit->setText(QApplication::translate("SettingsFaqWidget", "Exit", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton_Intro->setText(QApplication::translate("SettingsFaqWidget", "1) What is FUCU?", Q_NULLPTR));
        pushButton_UnspendableFUCU->setText(QApplication::translate("SettingsFaqWidget", "2) Why are my FUCU unspendable?", Q_NULLPTR));
        pushButton_Stake->setText(QApplication::translate("SettingsFaqWidget", "3) How do I stake FUCU?", Q_NULLPTR));
        pushButton_Support->setText(QApplication::translate("SettingsFaqWidget", "4) Where I should go if I need support?", Q_NULLPTR));
        pushButton_Masternode->setText(QApplication::translate("SettingsFaqWidget", "5) What is a Masternode?", Q_NULLPTR));
        pushButton_MNController->setText(QApplication::translate("SettingsFaqWidget", "6) What is a Masternode Controller?", Q_NULLPTR));
        labelWebLink->setText(QApplication::translate("SettingsFaqWidget", "You can read more here", Q_NULLPTR));
        pushButtonWebLink->setText(QApplication::translate("SettingsFaqWidget", "https://www.fucucoin.org", Q_NULLPTR));
        labelNumber_Intro->setText(QApplication::translate("SettingsFaqWidget", "1", Q_NULLPTR));
        labelSubtitle_Intro->setText(QApplication::translate("SettingsFaqWidget", "What is FUCU?", Q_NULLPTR));
        labelContent_Intro->setText(QApplication::translate("SettingsFaqWidget", "\n"
"                           <html><head/><body><p align=\"justify\">\n"
"                           FUCU is a form of digital online money using blockchain technology\n"
"                           that can be easily transferred globally, instantly, and with near\n"
"                           zero fees.&FUCU coin is a project with the goal of professionally creating,\n"
"                           developing and publishing projects whitepapers for project teams on the FUCU network. \n"
"                           Create the concept and we will bring it to reality.\n"
"                           </p><p align=\"justify\">\n"
"                           FUCU utilizes a Proof of Stake (PoS) consensus system algorithm,\n"
"                           allowing all owners of FUCU to participate in earning block rewards\n"
"                           while securing the network with full node wallets, as well as to\n"
"                           run Masternodes to create and vote on proposals.\n"
"                 "
                        "          </p></body></html>\n"
"                         ", Q_NULLPTR));
        labelNumber_UnspendableFUCU->setText(QApplication::translate("SettingsFaqWidget", "2", Q_NULLPTR));
        labelSubtitle_UnspendableFUCU->setText(QApplication::translate("SettingsFaqWidget", "Why are my FUCU unspendable?", Q_NULLPTR));
        labelContent_UnspendableFUCU->setText(QApplication::translate("SettingsFaqWidget", "\n"
"                           <html><head/><body><p align=\"justify\">\n"
"                           Newly received FUCU requires 6 confirmations on the network\n"
"                           to become eligible for spending which can take ~6 minutes.\n"
"                           </p><p align=\"justify\">\n"
"                           Your FUCU wallet also needs to be completely synchronized\n"
"                           to see and spend balances on the network.\n"
"                           </p></body></html>\n"
"                         ", Q_NULLPTR));
        labelNumber_Stake->setText(QApplication::translate("SettingsFaqWidget", "3", Q_NULLPTR));
        labelSubtitle_Stake->setText(QApplication::translate("SettingsFaqWidget", "How do I stake FUCU?", Q_NULLPTR));
        labelContent_Stake->setText(QApplication::translate("SettingsFaqWidget", "<html><head/><body><ol style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li align=\"justify\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Make sure your wallet is completely synchronized and you are using the latest release. </li><li align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">You must have a balance of FUCU with a minimum of 600 confirmations. </li><li align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Your wallet must stay online and be unlocked for staking purposes. </li><li align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Once all those steps are followed staking should be enabled. </li><li align=\"justify\" style=\" ma"
                        "rgin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">You can see the status of staking in the wallet by mousing over the package icon in the row on the top left of the wallet interface. There package will be lit up and will state &quot;Staking Enabled&quot; to indicate it is staking. Using the command line interface (fucucoin-cli); the command <span style=\" font-style:italic;\">getstakingstatus</span> will confirm that staking is active. </li></ol></body></html>", Q_NULLPTR));
        labelNumber_Support->setText(QApplication::translate("SettingsFaqWidget", "4", Q_NULLPTR));
        labelSubtitle_Support->setText(QApplication::translate("SettingsFaqWidget", "Where should I go if I need support?", Q_NULLPTR));
        labelContent_Support->setText(QApplication::translate("SettingsFaqWidget", "\n"
"                           <html><head/><body><p align=\"justify\">\n"
"                           We have support channels in most of our official chat groups, for example\n"
"                           <a style='color: #CCB363' href='https://discord.gg/PENeFRWvEj'>\n"
"                           #support in our Discord</a>.\n"
"                           </p></body></html>\n"
"                         ", Q_NULLPTR));
        labelNumber_Masternode->setText(QApplication::translate("SettingsFaqWidget", "5", Q_NULLPTR));
        labelSubtitle_Masternode->setText(QApplication::translate("SettingsFaqWidget", "What is a Masternode?", Q_NULLPTR));
        labelContent_Masternode->setText(QApplication::translate("SettingsFaqWidget", "\n"
"                           <html><head/><body><p align=\"justify\">\n"
"                           A masternode is a computer running a full node FUCU wallet with a\n"
"                           required amount of secured collateral to provide extra services\n"
"                           to the network and in return, receive a portion of the block reward\n"
"                           regularly.  These services include:\n"
"                           </p><p align=\"justify\">\n"
"\n"
"                           <ul>\n"
"                           <li>A decentralized governance (Proposal Voting)</li>\n"
"                           <li>A decentralized budgeting system (Treasury)</li>\n"
"                           <li>Validation of transactions within each block</li>\n"
"                           <li>Act as an additional full node in the network</li>\n"
"                           </ul>\n"
"\n"
"                           </p><p align=\"justify\">\n"
"                           For providing such service"
                        "s, masternodes are also paid a certain portion\n"
"                           of reward for each block. This can serve as a passive income to the\n"
"                           masternode owners minus their running cost.\n"
"                           </p><p align=\"justify\">\n"
"\n"
"                           Masternode Perks:\n"
"                           </p><p align=\"justify\">\n"
"                           <ul>\n"
"                           <li>Participate in FUCU Governance</li>\n"
"                           <li>Earn Masternode Rewards</li>\n"
"                           <li>Commodity option for future sale</li>\n"
"                           <li>Help secure the FUCU network</li>\n"
"                           </ul>\n"
"                           </p><p align=\"justify\">\n"
"\n"
"                           Requirements:\n"
"                           </p><p align=\"justify\">\n"
"                           <ul>\n"
"                           <li>Enough collateral balance per single Masternode ins"
                        "tance</li>\n"
"                           <li>Must be stored in a core wallet</li>\n"
"                           <li>Need dedicated IP address</li>\n"
"                           <li>Masternode wallet to remain online</li>\n"
"                           </ul>\n"
"                           </p></body></html>\n"
"                         ", Q_NULLPTR));
        labelNumber_MNController->setText(QApplication::translate("SettingsFaqWidget", "6", Q_NULLPTR));
        labelSubtitle_MNController->setText(QApplication::translate("SettingsFaqWidget", "What is a Masternode Controller?", Q_NULLPTR));
        labelContent_MNController->setText(QApplication::translate("SettingsFaqWidget", "<html><head/><body><p align=\"justify\">A Masternode Controller wallet is where the collateral amount can reside during a Controller-Remote masternode setup. It is a wallet that can activate the remote masternode wallet(s) and allows you to keep your collateral coins offline while the remote masternode remains online. </p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsFaqWidget: public Ui_SettingsFaqWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSFAQWIDGET_H
