/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *Image_;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *FilePath_;
    QLineEdit *Path;

    void setupUi(QDialog *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName(QStringLiteral("Setting"));
        Setting->resize(640, 480);
        buttonBox = new QDialogButtonBox(Setting);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(230, 400, 381, 51));
        QFont font;
        font.setFamily(QStringLiteral("Bahnschrift SemiBold Condensed"));
        font.setPointSize(15);
        buttonBox->setFont(font);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        Image_ = new QLabel(Setting);
        Image_->setObjectName(QStringLiteral("Image_"));
        Image_->setGeometry(QRect(460, 20, 161, 171));
        Image_->setPixmap(QPixmap(QString::fromUtf8(":/image/Overwatch_circle_logo.png")));
        widget = new QWidget(Setting);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 411, 61));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        FilePath_ = new QLabel(widget);
        FilePath_->setObjectName(QStringLiteral("FilePath_"));
        QFont font1;
        font1.setFamily(QStringLiteral("Bahnschrift SemiBold Condensed"));
        font1.setPointSize(20);
        FilePath_->setFont(font1);

        horizontalLayout->addWidget(FilePath_);

        Path = new QLineEdit(widget);
        Path->setObjectName(QStringLiteral("Path"));

        horizontalLayout->addWidget(Path);


        retranslateUi(Setting);
        QObject::connect(buttonBox, SIGNAL(accepted()), Setting, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Setting, SLOT(reject()));

        QMetaObject::connectSlotsByName(Setting);
    } // setupUi

    void retranslateUi(QDialog *Setting)
    {
        Setting->setWindowTitle(QApplication::translate("Setting", "Dialog", Q_NULLPTR));
        Image_->setText(QString());
        FilePath_->setText(QApplication::translate("Setting", "File Path: ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
