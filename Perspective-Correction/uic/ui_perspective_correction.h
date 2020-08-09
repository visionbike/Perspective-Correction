/********************************************************************************
** Form generated from reading UI file 'perspective_correction.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSPECTIVE_CORRECTION_H
#define UI_PERSPECTIVE_CORRECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <clickable_label.h>

QT_BEGIN_NAMESPACE

class Ui_PerspectiveCorrectionClass
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelInput;
    QLineEdit *lineEditInput;
    QToolButton *toolButtonInput;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelOutputSize;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEditOutW;
    QLabel *labelDivRatio;
    QLineEdit *lineEditOutH;
    ClickableLabel *labelImageView;
    QLabel *labelGuide;
    QPushButton *pushButtonReset;
    QPushButton *pushButtonLoad;
    QPushButton *pushButtonRun;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PerspectiveCorrectionClass)
    {
        if (PerspectiveCorrectionClass->objectName().isEmpty())
            PerspectiveCorrectionClass->setObjectName(QString::fromUtf8("PerspectiveCorrectionClass"));
        PerspectiveCorrectionClass->resize(472, 593);
        centralWidget = new QWidget(PerspectiveCorrectionClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 361, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelInput = new QLabel(horizontalLayoutWidget);
        labelInput->setObjectName(QString::fromUtf8("labelInput"));

        horizontalLayout->addWidget(labelInput);

        lineEditInput = new QLineEdit(horizontalLayoutWidget);
        lineEditInput->setObjectName(QString::fromUtf8("lineEditInput"));
        lineEditInput->setEnabled(true);
        QFont font;
        font.setPointSize(9);
        lineEditInput->setFont(font);
        lineEditInput->setReadOnly(true);

        horizontalLayout->addWidget(lineEditInput);

        toolButtonInput = new QToolButton(horizontalLayoutWidget);
        toolButtonInput->setObjectName(QString::fromUtf8("toolButtonInput"));

        horizontalLayout->addWidget(toolButtonInput);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 40, 361, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelOutputSize = new QLabel(horizontalLayoutWidget_2);
        labelOutputSize->setObjectName(QString::fromUtf8("labelOutputSize"));

        horizontalLayout_2->addWidget(labelOutputSize);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        lineEditOutW = new QLineEdit(horizontalLayoutWidget_2);
        lineEditOutW->setObjectName(QString::fromUtf8("lineEditOutW"));

        horizontalLayout_2->addWidget(lineEditOutW);

        labelDivRatio = new QLabel(horizontalLayoutWidget_2);
        labelDivRatio->setObjectName(QString::fromUtf8("labelDivRatio"));

        horizontalLayout_2->addWidget(labelDivRatio);

        lineEditOutH = new QLineEdit(horizontalLayoutWidget_2);
        lineEditOutH->setObjectName(QString::fromUtf8("lineEditOutH"));

        horizontalLayout_2->addWidget(lineEditOutH);

        labelImageView = new ClickableLabel(centralWidget);
        labelImageView->setObjectName(QString::fromUtf8("labelImageView"));
        labelImageView->setGeometry(QRect(10, 99, 450, 411));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        labelImageView->setPalette(palette);
        labelImageView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        labelImageView->setFrameShape(QFrame::Box);
        labelImageView->setFrameShadow(QFrame::Raised);
        labelGuide = new QLabel(centralWidget);
        labelGuide->setObjectName(QString::fromUtf8("labelGuide"));
        labelGuide->setGeometry(QRect(10, 520, 451, 16));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        labelGuide->setFont(font1);
        pushButtonReset = new QPushButton(centralWidget);
        pushButtonReset->setObjectName(QString::fromUtf8("pushButtonReset"));
        pushButtonReset->setGeometry(QRect(380, 43, 79, 23));
        pushButtonLoad = new QPushButton(centralWidget);
        pushButtonLoad->setObjectName(QString::fromUtf8("pushButtonLoad"));
        pushButtonLoad->setGeometry(QRect(380, 14, 79, 23));
        pushButtonRun = new QPushButton(centralWidget);
        pushButtonRun->setObjectName(QString::fromUtf8("pushButtonRun"));
        pushButtonRun->setGeometry(QRect(380, 73, 79, 23));
        PerspectiveCorrectionClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PerspectiveCorrectionClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 472, 21));
        PerspectiveCorrectionClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PerspectiveCorrectionClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        PerspectiveCorrectionClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PerspectiveCorrectionClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        PerspectiveCorrectionClass->setStatusBar(statusBar);

        retranslateUi(PerspectiveCorrectionClass);

        QMetaObject::connectSlotsByName(PerspectiveCorrectionClass);
    } // setupUi

    void retranslateUi(QMainWindow *PerspectiveCorrectionClass)
    {
        PerspectiveCorrectionClass->setWindowTitle(QApplication::translate("PerspectiveCorrectionClass", "PerspectiveCorrection", nullptr));
        labelInput->setText(QApplication::translate("PerspectiveCorrectionClass", "Input", nullptr));
        toolButtonInput->setText(QApplication::translate("PerspectiveCorrectionClass", "...", nullptr));
        labelOutputSize->setText(QApplication::translate("PerspectiveCorrectionClass", "Output Size (W:H)", nullptr));
        labelDivRatio->setText(QApplication::translate("PerspectiveCorrectionClass", "  : ", nullptr));
        labelImageView->setText(QString());
        labelGuide->setText(QApplication::translate("PerspectiveCorrectionClass", "Pick four points (clock-wise direction) on the input image before clicking Run", nullptr));
        pushButtonReset->setText(QApplication::translate("PerspectiveCorrectionClass", "Reset", nullptr));
        pushButtonLoad->setText(QApplication::translate("PerspectiveCorrectionClass", "Load", nullptr));
        pushButtonRun->setText(QApplication::translate("PerspectiveCorrectionClass", "Run", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PerspectiveCorrectionClass: public Ui_PerspectiveCorrectionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSPECTIVE_CORRECTION_H
