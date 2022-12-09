/********************************************************************************
** Form generated from reading UI file 'topbar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPBAR_H
#define UI_TOPBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/fucucoin/expandablebutton.h"
#include "qt/fucucoin/pfborderimage.h"

QT_BEGIN_NAMESPACE

class Ui_TopBar
{
public:
    QVBoxLayout *verticalLayout_10;
    PFBorderImage *containerTop;
    QVBoxLayout *verticalLayout_11;
    QWidget *top_container_2;
    QHBoxLayout *top_container;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widgetAmount;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelTitle1;
    QLabel *labelAmountBib;
    QWidget *widgetTopAmount;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelAmountTopBib;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutSync;
    QVBoxLayout *verticalLayout_9;
    ExpandableButton *pushButtonSync;
    ExpandableButton *pushButtonHDUpgrade;
    ExpandableButton *pushButtonStack;
    ExpandableButton *pushButtonConf;
    ExpandableButton *pushButtonMasternodes;
    ExpandableButton *pushButtonConsole;
    ExpandableButton *pushButtonConnection;
    ExpandableButton *pushButtonTor;
    ExpandableButton *pushButtonLock;
    ExpandableButton *pushButtonTheme;
    ExpandableButton *pushButtonFAQ;
    QWidget *bottom_container;
    QHBoxLayout *botton_container;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelTitle5;
    QLabel *labelAvailableBib;
    QLabel *labelTitle4;
    QLabel *labelImmatureBib;
    QVBoxLayout *verticalLayout_8;
    QLabel *labelTitle6;
    QLabel *labelLockedBib;
    QLabel *labelTitle3;
    QLabel *labelPendingBib;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelMasternodesTitle;
    QLabel *labelMasternodeCount;
    QLabel *labelTitle8;
    QLabel *labelCollateralBib;
    QWidget *widgetNextCollateral;
    QVBoxLayout *verticalLayout_12;
    QLabel *labelNextMasternodesTitle;
    QLabel *labelNextCollateralValue;
    QLabel *labelTitle9;
    QLabel *labelNextCollateralBlocks;
    QWidget *qrContainer;
    QVBoxLayout *containerQR;
    QPushButton *btnQr;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonQR;

    void setupUi(QWidget *TopBar)
    {
        if (TopBar->objectName().isEmpty())
            TopBar->setObjectName(QStringLiteral("TopBar"));
        TopBar->resize(838, 200);
        TopBar->setMinimumSize(QSize(0, 200));
        TopBar->setMaximumSize(QSize(16777215, 200));
        verticalLayout_10 = new QVBoxLayout(TopBar);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        containerTop = new PFBorderImage(TopBar);
        containerTop->setObjectName(QStringLiteral("containerTop"));
        verticalLayout_11 = new QVBoxLayout(containerTop);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        top_container_2 = new QWidget(containerTop);
        top_container_2->setObjectName(QStringLiteral("top_container_2"));
        top_container_2->setMinimumSize(QSize(0, 65));
        top_container = new QHBoxLayout(top_container_2);
        top_container->setSpacing(0);
        top_container->setObjectName(QStringLiteral("top_container"));
        top_container->setContentsMargins(10, 0, 10, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(12);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 0, -1);
        widgetAmount = new QWidget(top_container_2);
        widgetAmount->setObjectName(QStringLiteral("widgetAmount"));
        verticalLayout_2 = new QVBoxLayout(widgetAmount);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 8, 0, 0);
        labelTitle1 = new QLabel(widgetAmount);
        labelTitle1->setObjectName(QStringLiteral("labelTitle1"));

        verticalLayout_2->addWidget(labelTitle1);

        labelAmountBib = new QLabel(widgetAmount);
        labelAmountBib->setObjectName(QStringLiteral("labelAmountBib"));
        labelAmountBib->setText(QStringLiteral("-- FUCU"));

        verticalLayout_2->addWidget(labelAmountBib);


        horizontalLayout_4->addWidget(widgetAmount);

        widgetTopAmount = new QWidget(top_container_2);
        widgetTopAmount->setObjectName(QStringLiteral("widgetTopAmount"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetTopAmount->sizePolicy().hasHeightForWidth());
        widgetTopAmount->setSizePolicy(sizePolicy);
        horizontalLayout_5 = new QHBoxLayout(widgetTopAmount);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        labelAmountTopBib = new QLabel(widgetTopAmount);
        labelAmountTopBib->setObjectName(QStringLiteral("labelAmountTopBib"));
        labelAmountTopBib->setMinimumSize(QSize(0, 36));
        labelAmountTopBib->setStyleSheet(QStringLiteral("padding:0px;margin:0px;"));
        labelAmountTopBib->setText(QStringLiteral("-- FUCU"));

        horizontalLayout_5->addWidget(labelAmountTopBib, 0, Qt::AlignTop);


        horizontalLayout_4->addWidget(widgetTopAmount, 0, Qt::AlignVCenter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        layoutSync = new QWidget(top_container_2);
        layoutSync->setObjectName(QStringLiteral("layoutSync"));
        layoutSync->setMinimumSize(QSize(0, 36));
        layoutSync->setMaximumSize(QSize(16777215, 36));
        verticalLayout_9 = new QVBoxLayout(layoutSync);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        pushButtonSync = new ExpandableButton(layoutSync);
        pushButtonSync->setObjectName(QStringLiteral("pushButtonSync"));
        pushButtonSync->setMinimumSize(QSize(36, 36));
        pushButtonSync->setMaximumSize(QSize(16777215, 36));

        verticalLayout_9->addWidget(pushButtonSync);


        horizontalLayout_4->addWidget(layoutSync, 0, Qt::AlignRight);

        pushButtonHDUpgrade = new ExpandableButton(top_container_2);
        pushButtonHDUpgrade->setObjectName(QStringLiteral("pushButtonHDUpgrade"));
        pushButtonHDUpgrade->setMinimumSize(QSize(36, 36));
        pushButtonHDUpgrade->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(pushButtonHDUpgrade);

        pushButtonStack = new ExpandableButton(top_container_2);
        pushButtonStack->setObjectName(QStringLiteral("pushButtonStack"));
        pushButtonStack->setMinimumSize(QSize(36, 36));
        pushButtonStack->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(pushButtonStack);

        pushButtonConf = new ExpandableButton(top_container_2);
        pushButtonConf->setObjectName(QStringLiteral("pushButtonConf"));
        pushButtonConf->setMinimumSize(QSize(36, 36));
        pushButtonConf->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(pushButtonConf);

        pushButtonMasternodes = new ExpandableButton(top_container_2);
        pushButtonMasternodes->setObjectName(QStringLiteral("pushButtonMasternodes"));
        pushButtonMasternodes->setMinimumSize(QSize(36, 36));
        pushButtonMasternodes->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(pushButtonMasternodes);

        pushButtonConsole = new ExpandableButton(top_container_2);
        pushButtonConsole->setObjectName(QStringLiteral("pushButtonConsole"));
        pushButtonConsole->setMinimumSize(QSize(36, 36));
        pushButtonConsole->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(pushButtonConsole);

        pushButtonConnection = new ExpandableButton(top_container_2);
        pushButtonConnection->setObjectName(QStringLiteral("pushButtonConnection"));
        pushButtonConnection->setMinimumSize(QSize(36, 36));
        pushButtonConnection->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(pushButtonConnection);

        pushButtonTor = new ExpandableButton(top_container_2);
        pushButtonTor->setObjectName(QStringLiteral("pushButtonTor"));
        pushButtonTor->setMinimumSize(QSize(36, 36));
        pushButtonTor->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(pushButtonTor);

        pushButtonLock = new ExpandableButton(top_container_2);
        pushButtonLock->setObjectName(QStringLiteral("pushButtonLock"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonLock->sizePolicy().hasHeightForWidth());
        pushButtonLock->setSizePolicy(sizePolicy1);
        pushButtonLock->setMinimumSize(QSize(36, 0));
        pushButtonLock->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(pushButtonLock);

        pushButtonTheme = new ExpandableButton(top_container_2);
        pushButtonTheme->setObjectName(QStringLiteral("pushButtonTheme"));
        pushButtonTheme->setMinimumSize(QSize(36, 36));
        pushButtonTheme->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(pushButtonTheme);

        pushButtonFAQ = new ExpandableButton(top_container_2);
        pushButtonFAQ->setObjectName(QStringLiteral("pushButtonFAQ"));
        pushButtonFAQ->setMinimumSize(QSize(36, 36));
        pushButtonFAQ->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(pushButtonFAQ);


        top_container->addLayout(horizontalLayout_4);


        verticalLayout_11->addWidget(top_container_2);

        bottom_container = new QWidget(containerTop);
        bottom_container->setObjectName(QStringLiteral("bottom_container"));
        bottom_container->setMinimumSize(QSize(0, 135));
        botton_container = new QHBoxLayout(bottom_container);
        botton_container->setObjectName(QStringLiteral("botton_container"));
        botton_container->setContentsMargins(10, 0, 10, 10);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 9);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, -1, 0, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        labelTitle5 = new QLabel(bottom_container);
        labelTitle5->setObjectName(QStringLiteral("labelTitle5"));

        verticalLayout_6->addWidget(labelTitle5);

        labelAvailableBib = new QLabel(bottom_container);
        labelAvailableBib->setObjectName(QStringLiteral("labelAvailableBib"));

        verticalLayout_6->addWidget(labelAvailableBib);

        labelTitle4 = new QLabel(bottom_container);
        labelTitle4->setObjectName(QStringLiteral("labelTitle4"));

        verticalLayout_6->addWidget(labelTitle4);

        labelImmatureBib = new QLabel(bottom_container);
        labelImmatureBib->setObjectName(QStringLiteral("labelImmatureBib"));
        labelImmatureBib->setText(QStringLiteral("- FUCU"));

        verticalLayout_6->addWidget(labelImmatureBib);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(32, -1, -1, -1);
        labelTitle6 = new QLabel(bottom_container);
        labelTitle6->setObjectName(QStringLiteral("labelTitle6"));

        verticalLayout_8->addWidget(labelTitle6);

        labelLockedBib = new QLabel(bottom_container);
        labelLockedBib->setObjectName(QStringLiteral("labelLockedBib"));

        verticalLayout_8->addWidget(labelLockedBib);

        labelTitle3 = new QLabel(bottom_container);
        labelTitle3->setObjectName(QStringLiteral("labelTitle3"));

        verticalLayout_8->addWidget(labelTitle3);

        labelPendingBib = new QLabel(bottom_container);
        labelPendingBib->setObjectName(QStringLiteral("labelPendingBib"));
        labelPendingBib->setText(QStringLiteral("-- FUCU"));

        verticalLayout_8->addWidget(labelPendingBib);


        horizontalLayout_2->addLayout(verticalLayout_8);


        verticalLayout_7->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_7);


        botton_container->addLayout(horizontalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        botton_container->addItem(horizontalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, 0, 9);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        labelMasternodesTitle = new QLabel(bottom_container);
        labelMasternodesTitle->setObjectName(QStringLiteral("labelMasternodesTitle"));

        verticalLayout_5->addWidget(labelMasternodesTitle);

        labelMasternodeCount = new QLabel(bottom_container);
        labelMasternodeCount->setObjectName(QStringLiteral("labelMasternodeCount"));

        verticalLayout_5->addWidget(labelMasternodeCount);

        labelTitle8 = new QLabel(bottom_container);
        labelTitle8->setObjectName(QStringLiteral("labelTitle8"));

        verticalLayout_5->addWidget(labelTitle8);

        labelCollateralBib = new QLabel(bottom_container);
        labelCollateralBib->setObjectName(QStringLiteral("labelCollateralBib"));
        labelCollateralBib->setText(QStringLiteral("-- FUCU"));

        verticalLayout_5->addWidget(labelCollateralBib);


        horizontalLayout_6->addLayout(verticalLayout_5);

        widgetNextCollateral = new QWidget(bottom_container);
        widgetNextCollateral->setObjectName(QStringLiteral("widgetNextCollateral"));
        verticalLayout_12 = new QVBoxLayout(widgetNextCollateral);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(32, 0, 0, 0);
        labelNextMasternodesTitle = new QLabel(widgetNextCollateral);
        labelNextMasternodesTitle->setObjectName(QStringLiteral("labelNextMasternodesTitle"));

        verticalLayout_12->addWidget(labelNextMasternodesTitle);

        labelNextCollateralValue = new QLabel(widgetNextCollateral);
        labelNextCollateralValue->setObjectName(QStringLiteral("labelNextCollateralValue"));

        verticalLayout_12->addWidget(labelNextCollateralValue);

        labelTitle9 = new QLabel(widgetNextCollateral);
        labelTitle9->setObjectName(QStringLiteral("labelTitle9"));

        verticalLayout_12->addWidget(labelTitle9);

        labelNextCollateralBlocks = new QLabel(widgetNextCollateral);
        labelNextCollateralBlocks->setObjectName(QStringLiteral("labelNextCollateralBlocks"));
        labelNextCollateralBlocks->setText(QStringLiteral("-- Blocks"));

        verticalLayout_12->addWidget(labelNextCollateralBlocks);


        horizontalLayout_6->addWidget(widgetNextCollateral);


        botton_container->addLayout(horizontalLayout_6);

        qrContainer = new QWidget(bottom_container);
        qrContainer->setObjectName(QStringLiteral("qrContainer"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(qrContainer->sizePolicy().hasHeightForWidth());
        qrContainer->setSizePolicy(sizePolicy2);
        qrContainer->setMinimumSize(QSize(90, 110));
        qrContainer->setMaximumSize(QSize(90, 110));
        containerQR = new QVBoxLayout(qrContainer);
        containerQR->setSpacing(0);
        containerQR->setObjectName(QStringLiteral("containerQR"));
        containerQR->setContentsMargins(5, 10, 5, 0);
        btnQr = new QPushButton(qrContainer);
        btnQr->setObjectName(QStringLiteral("btnQr"));
        btnQr->setMinimumSize(QSize(70, 70));
        btnQr->setMaximumSize(QSize(16777215, 70));
        btnQr->setFocusPolicy(Qt::NoFocus);
        btnQr->setIconSize(QSize(70, 70));

        containerQR->addWidget(btnQr);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        containerQR->addItem(verticalSpacer);

        pushButtonQR = new QPushButton(qrContainer);
        pushButtonQR->setObjectName(QStringLiteral("pushButtonQR"));
        pushButtonQR->setMinimumSize(QSize(36, 36));
        pushButtonQR->setMaximumSize(QSize(36, 36));
        pushButtonQR->setFocusPolicy(Qt::NoFocus);

        containerQR->addWidget(pushButtonQR, 0, Qt::AlignHCenter|Qt::AlignBottom);


        botton_container->addWidget(qrContainer);


        verticalLayout_11->addWidget(bottom_container);


        verticalLayout_10->addWidget(containerTop);


        retranslateUi(TopBar);

        QMetaObject::connectSlotsByName(TopBar);
    } // setupUi

    void retranslateUi(QWidget *TopBar)
    {
        TopBar->setWindowTitle(QApplication::translate("TopBar", "Form", Q_NULLPTR));
        labelTitle1->setText(QApplication::translate("TopBar", "Total", Q_NULLPTR));
        labelTitle5->setText(QApplication::translate("TopBar", "Available", Q_NULLPTR));
        labelAvailableBib->setText(QApplication::translate("TopBar", "-- FUCU", Q_NULLPTR));
        labelTitle4->setText(QApplication::translate("TopBar", "Immature", Q_NULLPTR));
        labelTitle6->setText(QApplication::translate("TopBar", "Locked", Q_NULLPTR));
        labelLockedBib->setText(QApplication::translate("TopBar", "- FUCU", Q_NULLPTR));
        labelTitle3->setText(QApplication::translate("TopBar", "Pending", Q_NULLPTR));
        labelMasternodesTitle->setText(QApplication::translate("TopBar", "Masternodes", Q_NULLPTR));
        labelMasternodeCount->setText(QApplication::translate("TopBar", "-/-", Q_NULLPTR));
        labelTitle8->setText(QApplication::translate("TopBar", "Collateral", Q_NULLPTR));
        labelNextMasternodesTitle->setText(QApplication::translate("TopBar", "Next Collateral", Q_NULLPTR));
        labelNextCollateralValue->setText(QApplication::translate("TopBar", "-- FUCU", Q_NULLPTR));
        labelTitle9->setText(QApplication::translate("TopBar", "In", Q_NULLPTR));
        btnQr->setText(QString());
        pushButtonQR->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TopBar: public Ui_TopBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPBAR_H
