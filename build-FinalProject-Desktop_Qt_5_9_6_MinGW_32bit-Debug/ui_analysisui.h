/********************************************************************************
** Form generated from reading UI file 'analysisui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALYSISUI_H
#define UI_ANALYSISUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnalysisUI
{
public:
    QLabel *Title;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *YourTeammates;
    QLabel *MemberTitle;
    QHBoxLayout *horizontalLayout;
    QComboBox *Member1;
    QComboBox *Member2;
    QComboBox *Member3;
    QComboBox *Member4;
    QComboBox *Member5;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *AddSet;
    QPushButton *Confirm;
    QPushButton *Cancel;
    QLabel *Logo;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *AnalysisUI)
    {
        if (AnalysisUI->objectName().isEmpty())
            AnalysisUI->setObjectName(QStringLiteral("AnalysisUI"));
        AnalysisUI->resize(960, 720);
        Title = new QLabel(AnalysisUI);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(10, 10, 961, 71));
        QFont font;
        font.setFamily(QStringLiteral("Bahnschrift SemiBold Condensed"));
        font.setPointSize(35);
        Title->setFont(font);
        Title->setMargin(10);
        verticalLayoutWidget = new QWidget(AnalysisUI);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 90, 941, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        YourTeammates = new QLabel(verticalLayoutWidget);
        YourTeammates->setObjectName(QStringLiteral("YourTeammates"));
        QFont font1;
        font1.setFamily(QStringLiteral("Bahnschrift SemiBold Condensed"));
        font1.setPointSize(18);
        YourTeammates->setFont(font1);

        verticalLayout->addWidget(YourTeammates);

        MemberTitle = new QLabel(verticalLayoutWidget);
        MemberTitle->setObjectName(QStringLiteral("MemberTitle"));
        QFont font2;
        font2.setFamily(QStringLiteral("Bahnschrift SemiBold Condensed"));
        font2.setPointSize(15);
        MemberTitle->setFont(font2);
        MemberTitle->setMargin(3);

        verticalLayout->addWidget(MemberTitle);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Member1 = new QComboBox(verticalLayoutWidget);
        Member1->setObjectName(QStringLiteral("Member1"));
        Member1->setFont(font2);

        horizontalLayout->addWidget(Member1);

        Member2 = new QComboBox(verticalLayoutWidget);
        Member2->setObjectName(QStringLiteral("Member2"));
        Member2->setFont(font2);

        horizontalLayout->addWidget(Member2);

        Member3 = new QComboBox(verticalLayoutWidget);
        Member3->setObjectName(QStringLiteral("Member3"));
        Member3->setFont(font2);

        horizontalLayout->addWidget(Member3);

        Member4 = new QComboBox(verticalLayoutWidget);
        Member4->setObjectName(QStringLiteral("Member4"));
        Member4->setFont(font2);

        horizontalLayout->addWidget(Member4);

        Member5 = new QComboBox(verticalLayoutWidget);
        Member5->setObjectName(QStringLiteral("Member5"));
        Member5->setFont(font2);

        horizontalLayout->addWidget(Member5);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayoutWidget_2 = new QWidget(AnalysisUI);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(150, 580, 671, 131));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        AddSet = new QPushButton(verticalLayoutWidget_2);
        AddSet->setObjectName(QStringLiteral("AddSet"));
        AddSet->setFont(font1);

        verticalLayout_2->addWidget(AddSet);

        Confirm = new QPushButton(verticalLayoutWidget_2);
        Confirm->setObjectName(QStringLiteral("Confirm"));
        Confirm->setFont(font1);

        verticalLayout_2->addWidget(Confirm);

        Cancel = new QPushButton(verticalLayoutWidget_2);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setFont(font1);

        verticalLayout_2->addWidget(Cancel);

        Logo = new QLabel(AnalysisUI);
        Logo->setObjectName(QStringLiteral("Logo"));
        Logo->setGeometry(QRect(690, 20, 261, 61));
        Logo->setPixmap(QPixmap(QString::fromUtf8(":/image/logo1.png")));
        horizontalLayoutWidget = new QWidget(AnalysisUI);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 260, 941, 311));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_1 = new QLabel(horizontalLayoutWidget);
        label_1->setObjectName(QStringLiteral("label_1"));

        horizontalLayout_2->addWidget(label_1);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);


        retranslateUi(AnalysisUI);

        QMetaObject::connectSlotsByName(AnalysisUI);
    } // setupUi

    void retranslateUi(QWidget *AnalysisUI)
    {
        AnalysisUI->setWindowTitle(QApplication::translate("AnalysisUI", "Form", Q_NULLPTR));
        Title->setText(QApplication::translate("AnalysisUI", "  Start Analysis", Q_NULLPTR));
        YourTeammates->setText(QApplication::translate("AnalysisUI", "  Your Teammates", Q_NULLPTR));
        MemberTitle->setText(QApplication::translate("AnalysisUI", "   Member 1:                                Member 2:                              Member 3:                               Member 4:                              Member 5:                  ", Q_NULLPTR));
        AddSet->setText(QApplication::translate("AnalysisUI", "Add this Team", Q_NULLPTR));
        Confirm->setText(QApplication::translate("AnalysisUI", "Confirm", Q_NULLPTR));
        Cancel->setText(QApplication::translate("AnalysisUI", "Cancel", Q_NULLPTR));
        Logo->setText(QString());
        label_1->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AnalysisUI: public Ui_AnalysisUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYSISUI_H
