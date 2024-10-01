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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QFrame *leftFrame;
    QVBoxLayout *verticalLayout;
    QLabel *welcomeLabel;
    QFrame *rightFrame;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QPushButton *signInButton;
    QFrame *line;
    QPushButton *signUpButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(964, 650);
        MainWindow->setMinimumSize(QSize(950, 480));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(600, 400));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        leftFrame = new QFrame(centralwidget);
        leftFrame->setObjectName("leftFrame");
        leftFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 209, 122);"));
        leftFrame->setFrameShape(QFrame::StyledPanel);
        leftFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(leftFrame);
        verticalLayout->setObjectName("verticalLayout");
        welcomeLabel = new QLabel(leftFrame);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 48pt \"Ubuntu Sans\" ;\n"
"color: rgb(255, 255, 255);"));
        welcomeLabel->setTextFormat(Qt::AutoText);
        welcomeLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(welcomeLabel);


        horizontalLayout->addWidget(leftFrame);

        rightFrame = new QFrame(centralwidget);
        rightFrame->setObjectName("rightFrame");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rightFrame->sizePolicy().hasHeightForWidth());
        rightFrame->setSizePolicy(sizePolicy);
        rightFrame->setStyleSheet(QString::fromUtf8(""));
        rightFrame->setFrameShape(QFrame::StyledPanel);
        rightFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(rightFrame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setRowWrapPolicy(QFormLayout::DontWrapRows);
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(9);
        formLayout->setContentsMargins(90, -1, 90, -1);
        usernameLabel = new QLabel(rightFrame);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, usernameLabel);

        usernameLineEdit = new QLineEdit(rightFrame);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setAutoFillBackground(false);
        usernameLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        usernameLineEdit->setEchoMode(QLineEdit::Normal);
        usernameLineEdit->setClearButtonEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, usernameLineEdit);

        passwordLabel = new QLabel(rightFrame);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, passwordLabel);

        passwordLineEdit = new QLineEdit(rightFrame);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passwordLineEdit);

        signInButton = new QPushButton(rightFrame);
        signInButton->setObjectName("signInButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(signInButton->sizePolicy().hasHeightForWidth());
        signInButton->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu Sans")});
        font.setPointSize(13);
        font.setWeight(QFont::Thin);
        font.setItalic(true);
        signInButton->setFont(font);
        signInButton->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"background-color: rgb(143, 240, 164);\n"
"color: rgb(0, 0, 0);"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, signInButton);

        line = new QFrame(rightFrame);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout->setWidget(4, QFormLayout::SpanningRole, line);

        signUpButton = new QPushButton(rightFrame);
        signUpButton->setObjectName("signUpButton");
        sizePolicy1.setHeightForWidth(signUpButton->sizePolicy().hasHeightForWidth());
        signUpButton->setSizePolicy(sizePolicy1);
        signUpButton->setFont(font);
        signUpButton->setStyleSheet(QString::fromUtf8("font: 100  italic 13pt \"Ubuntu Sans\" ;\n"
"background-color: rgb(38, 162, 105);\n"
"color: rgb(0, 0, 0);"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, signUpButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout->setItem(2, QFormLayout::LabelRole, horizontalSpacer);


        verticalLayout_2->addLayout(formLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(rightFrame);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(usernameLineEdit, passwordLineEdit);
        QWidget::setTabOrder(passwordLineEdit, signInButton);
        QWidget::setTabOrder(signInButton, signUpButton);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Smart Nutrution System", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("MainWindow", "Healthy Diet,\n"
" Better Life", nullptr));
        usernameLabel->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        usernameLineEdit->setText(QString());
        usernameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter your username here", nullptr));
        passwordLabel->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        passwordLineEdit->setText(QString());
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter your password here", nullptr));
        signInButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        signUpButton->setText(QCoreApplication::translate("MainWindow", "Signup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
