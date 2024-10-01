/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *userAVGFeedbackButton;
    QPushButton *userBMIButton;
    QPushButton *userBloodPressureButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QListWidget *currDietlistWidget;
    QGroupBox *personalInfoGroupBox;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *usernameLabel;
    QLabel *inputUserName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *passwordLabel;
    QLabel *inputPasslabel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *fullNameLabel;
    QLabel *inputFullNamelabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *ageLabel;
    QLabel *inputAgelabel;
    QHBoxLayout *horizontalLayout_6;
    QLabel *genderLabel;
    QLabel *inputGenderlabel;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *usersAverageBMIButton;
    QPushButton *usersAvergeFeedBackButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1014, 647);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(9, -1, 0, -1);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        userAVGFeedbackButton = new QPushButton(centralwidget);
        userAVGFeedbackButton->setObjectName("userAVGFeedbackButton");
        userAVGFeedbackButton->setMinimumSize(QSize(0, 50));

        horizontalLayout_7->addWidget(userAVGFeedbackButton);

        userBMIButton = new QPushButton(centralwidget);
        userBMIButton->setObjectName("userBMIButton");
        userBMIButton->setMinimumSize(QSize(0, 50));

        horizontalLayout_7->addWidget(userBMIButton);

        userBloodPressureButton = new QPushButton(centralwidget);
        userBloodPressureButton->setObjectName("userBloodPressureButton");
        userBloodPressureButton->setMinimumSize(QSize(0, 50));

        horizontalLayout_7->addWidget(userBloodPressureButton);


        gridLayout_2->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        currDietlistWidget = new QListWidget(centralwidget);
        currDietlistWidget->setObjectName("currDietlistWidget");

        verticalLayout_2->addWidget(currDietlistWidget);


        gridLayout_2->addLayout(verticalLayout_2, 2, 0, 1, 1);

        personalInfoGroupBox = new QGroupBox(centralwidget);
        personalInfoGroupBox->setObjectName("personalInfoGroupBox");
        personalInfoGroupBox->setMaximumSize(QSize(700, 700));
        personalInfoGroupBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        gridLayout = new QGridLayout(personalInfoGroupBox);
        gridLayout->setObjectName("gridLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(30);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        usernameLabel = new QLabel(personalInfoGroupBox);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;"));

        horizontalLayout_2->addWidget(usernameLabel);

        inputUserName = new QLabel(personalInfoGroupBox);
        inputUserName->setObjectName("inputUserName");

        horizontalLayout_2->addWidget(inputUserName);


        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(30);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        passwordLabel = new QLabel(personalInfoGroupBox);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;"));

        horizontalLayout_3->addWidget(passwordLabel);

        inputPasslabel = new QLabel(personalInfoGroupBox);
        inputPasslabel->setObjectName("inputPasslabel");

        horizontalLayout_3->addWidget(inputPasslabel);


        formLayout->setLayout(1, QFormLayout::LabelRole, horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(30);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        fullNameLabel = new QLabel(personalInfoGroupBox);
        fullNameLabel->setObjectName("fullNameLabel");
        fullNameLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_4->addWidget(fullNameLabel);

        inputFullNamelabel = new QLabel(personalInfoGroupBox);
        inputFullNamelabel->setObjectName("inputFullNamelabel");

        horizontalLayout_4->addWidget(inputFullNamelabel);


        formLayout->setLayout(2, QFormLayout::LabelRole, horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(30);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        ageLabel = new QLabel(personalInfoGroupBox);
        ageLabel->setObjectName("ageLabel");
        ageLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(ageLabel);

        inputAgelabel = new QLabel(personalInfoGroupBox);
        inputAgelabel->setObjectName("inputAgelabel");

        horizontalLayout_5->addWidget(inputAgelabel);


        formLayout->setLayout(3, QFormLayout::LabelRole, horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(30);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        genderLabel = new QLabel(personalInfoGroupBox);
        genderLabel->setObjectName("genderLabel");
        genderLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_6->addWidget(genderLabel);

        inputGenderlabel = new QLabel(personalInfoGroupBox);
        inputGenderlabel->setObjectName("inputGenderlabel");

        horizontalLayout_6->addWidget(inputGenderlabel);


        formLayout->setLayout(4, QFormLayout::LabelRole, horizontalLayout_6);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(personalInfoGroupBox, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        usersAverageBMIButton = new QPushButton(centralwidget);
        usersAverageBMIButton->setObjectName("usersAverageBMIButton");
        usersAverageBMIButton->setMinimumSize(QSize(50, 50));

        horizontalLayout->addWidget(usersAverageBMIButton);

        usersAvergeFeedBackButton = new QPushButton(centralwidget);
        usersAvergeFeedBackButton->setObjectName("usersAvergeFeedBackButton");
        usersAvergeFeedBackButton->setMinimumSize(QSize(50, 50));

        horizontalLayout->addWidget(usersAvergeFeedBackButton);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout, 0, 1, 3, 1);

        gridLayout_2->setColumnStretch(0, 1);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Server", nullptr));
        userAVGFeedbackButton->setText(QCoreApplication::translate("MainWindow", "User Average Feedback", nullptr));
        userBMIButton->setText(QCoreApplication::translate("MainWindow", "User BMI", nullptr));
        userBloodPressureButton->setText(QCoreApplication::translate("MainWindow", "User Blood Pressure", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Current diet plan", nullptr));
        personalInfoGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Personal Info", nullptr));
        usernameLabel->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        inputUserName->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        passwordLabel->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        inputPasslabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        fullNameLabel->setText(QCoreApplication::translate("MainWindow", "Full Name", nullptr));
        inputFullNamelabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        ageLabel->setText(QCoreApplication::translate("MainWindow", "Age", nullptr));
        inputAgelabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        genderLabel->setText(QCoreApplication::translate("MainWindow", "Gender", nullptr));
        inputGenderlabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Users", nullptr));
        usersAverageBMIButton->setText(QCoreApplication::translate("MainWindow", "Users average BMI", nullptr));
        usersAvergeFeedBackButton->setText(QCoreApplication::translate("MainWindow", "Users Average Feedback", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
