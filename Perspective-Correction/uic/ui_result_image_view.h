/********************************************************************************
** Form generated from reading UI file 'result_image_view.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_IMAGE_VIEW_H
#define UI_RESULT_IMAGE_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResultImageView
{
public:
    QLabel *labelImageView;

    void setupUi(QWidget *ResultImageView)
    {
        if (ResultImageView->objectName().isEmpty())
            ResultImageView->setObjectName(QString::fromUtf8("ResultImageView"));
        ResultImageView->setWindowModality(Qt::WindowModal);
        ResultImageView->resize(400, 300);
        labelImageView = new QLabel(ResultImageView);
        labelImageView->setObjectName(QString::fromUtf8("labelImageView"));
        labelImageView->setGeometry(QRect(10, 10, 380, 280));
        labelImageView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        labelImageView->setFrameShape(QFrame::Box);
        labelImageView->setFrameShadow(QFrame::Sunken);

        retranslateUi(ResultImageView);

        QMetaObject::connectSlotsByName(ResultImageView);
    } // setupUi

    void retranslateUi(QWidget *ResultImageView)
    {
        ResultImageView->setWindowTitle(QApplication::translate("ResultImageView", "ResultImageView", nullptr));
        labelImageView->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ResultImageView: public Ui_ResultImageView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_IMAGE_VIEW_H
