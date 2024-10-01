/********************************************************************************
** Form generated from reading UI file 'signupdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPDIALOG_H
#define UI_SIGNUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SignUpDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QFrame *leftFrame;
    QVBoxLayout *verticalLayout;
    QLabel *welcomeLabel;
    QFrame *rightFrame;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *personalInfoGroupBox;
    QGridLayout *gridLayout_2;
    QFormLayout *formLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QLabel *repeatPasswordLabel;
    QLineEdit *repeatPasswordLineEdit;
    QLabel *fullNameLabel;
    QLineEdit *fullNameLineEdit;
    QLabel *ageLabel;
    QComboBox *ageComboBox;
    QLabel *genderLabel;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *maleRadioButton;
    QRadioButton *femaleRadioButton;
    QGroupBox *healthConditionsGroupBox;
    QGridLayout *gridLayout_3;
    QFormLayout *formLayout_2;
    QHBoxLayout *bloodSugarManagementLayout;
    QLabel *bloodSugarManagementLabel;
    QCheckBox *diabetescheckBox;
    QCheckBox *HypoglycemiaCheckBox;
    QHBoxLayout *heartHealthLayout;
    QLabel *heartHealthLabel;
    QCheckBox *heartDiseaseCheckBox;
    QCheckBox *highCholesterolCheckBox;
    QCheckBox *highBloodPressCheckBox;
    QHBoxLayout *digistiveHealthLayout;
    QLabel *digistiveHealthLabel;
    QCheckBox *lactoseIntolerancecheckBox;
    QCheckBox *digistiveHealthCheckBox;
    QCheckBox *GERDCheckBox;
    QHBoxLayout *allegriesSensLayout;
    QLabel *allergiesSenLabel;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *foodAllegriesCheckBox;
    QCheckBox *foodSensCheckBox_3;
    QHBoxLayout *mentalHealthLayout;
    QLabel *MentalHealthLabel;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *depressionCheckBox;
    QCheckBox *anxietySensCheckBox;
    QHBoxLayout *weightManagementLayout;
    QLabel *weightManagmentLabel;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *obesityCheckBox;
    QCheckBox *metabolicCheckBox;
    QSpacerItem *verticalSpacer;
    QPushButton *signUpButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *SignUpDialog)
    {
        if (SignUpDialog->objectName().isEmpty())
            SignUpDialog->setObjectName("SignUpDialog");
        SignUpDialog->resize(963, 709);
        gridLayout = new QGridLayout(SignUpDialog);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        leftFrame = new QFrame(SignUpDialog);
        leftFrame->setObjectName("leftFrame");
        leftFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 209, 122);"));
        leftFrame->setFrameShape(QFrame::StyledPanel);
        leftFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(leftFrame);
        verticalLayout->setObjectName("verticalLayout");
        welcomeLabel = new QLabel(leftFrame);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 32pt \"Ubuntu Sans\" ;\n"
"color: rgb(255, 255, 255);"));
        welcomeLabel->setTextFormat(Qt::AutoText);
        welcomeLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(welcomeLabel);


        horizontalLayout->addWidget(leftFrame);

        rightFrame = new QFrame(SignUpDialog);
        rightFrame->setObjectName("rightFrame");
        rightFrame->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rightFrame->sizePolicy().hasHeightForWidth());
        rightFrame->setSizePolicy(sizePolicy);
        rightFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        rightFrame->setFrameShape(QFrame::StyledPanel);
        rightFrame->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(rightFrame);
        gridLayout_4->setObjectName("gridLayout_4");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        personalInfoGroupBox = new QGroupBox(rightFrame);
        personalInfoGroupBox->setObjectName("personalInfoGroupBox");
        personalInfoGroupBox->setMaximumSize(QSize(700, 700));
        personalInfoGroupBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        gridLayout_2 = new QGridLayout(personalInfoGroupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        usernameLabel = new QLabel(personalInfoGroupBox);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, usernameLabel);

        usernameLineEdit = new QLineEdit(personalInfoGroupBox);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setAutoFillBackground(false);
        usernameLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        usernameLineEdit->setEchoMode(QLineEdit::Normal);
        usernameLineEdit->setClearButtonEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, usernameLineEdit);

        passwordLabel = new QLabel(personalInfoGroupBox);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, passwordLabel);

        passwordLineEdit = new QLineEdit(personalInfoGroupBox);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passwordLineEdit);

        repeatPasswordLabel = new QLabel(personalInfoGroupBox);
        repeatPasswordLabel->setObjectName("repeatPasswordLabel");
        repeatPasswordLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, repeatPasswordLabel);

        repeatPasswordLineEdit = new QLineEdit(personalInfoGroupBox);
        repeatPasswordLineEdit->setObjectName("repeatPasswordLineEdit");
        repeatPasswordLineEdit->setAutoFillBackground(false);
        repeatPasswordLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        repeatPasswordLineEdit->setEchoMode(QLineEdit::Password);
        repeatPasswordLineEdit->setClearButtonEnabled(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, repeatPasswordLineEdit);

        fullNameLabel = new QLabel(personalInfoGroupBox);
        fullNameLabel->setObjectName("fullNameLabel");
        fullNameLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, fullNameLabel);

        fullNameLineEdit = new QLineEdit(personalInfoGroupBox);
        fullNameLineEdit->setObjectName("fullNameLineEdit");
        fullNameLineEdit->setAutoFillBackground(false);
        fullNameLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        fullNameLineEdit->setEchoMode(QLineEdit::Normal);
        fullNameLineEdit->setClearButtonEnabled(false);

        formLayout->setWidget(3, QFormLayout::FieldRole, fullNameLineEdit);

        ageLabel = new QLabel(personalInfoGroupBox);
        ageLabel->setObjectName("ageLabel");
        ageLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        formLayout->setWidget(4, QFormLayout::LabelRole, ageLabel);

        ageComboBox = new QComboBox(personalInfoGroupBox);
        ageComboBox->setObjectName("ageComboBox");
        ageComboBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        ageComboBox->setEditable(false);

        formLayout->setWidget(4, QFormLayout::FieldRole, ageComboBox);

        genderLabel = new QLabel(personalInfoGroupBox);
        genderLabel->setObjectName("genderLabel");
        genderLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        formLayout->setWidget(5, QFormLayout::LabelRole, genderLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        maleRadioButton = new QRadioButton(personalInfoGroupBox);
        maleRadioButton->setObjectName("maleRadioButton");
        maleRadioButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        maleRadioButton->setChecked(true);

        horizontalLayout_2->addWidget(maleRadioButton);

        femaleRadioButton = new QRadioButton(personalInfoGroupBox);
        femaleRadioButton->setObjectName("femaleRadioButton");
        femaleRadioButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(femaleRadioButton);


        formLayout->setLayout(5, QFormLayout::FieldRole, horizontalLayout_2);


        gridLayout_2->addLayout(formLayout, 0, 0, 1, 1);


        verticalLayout_2->addWidget(personalInfoGroupBox);

        healthConditionsGroupBox = new QGroupBox(rightFrame);
        healthConditionsGroupBox->setObjectName("healthConditionsGroupBox");
        healthConditionsGroupBox->setMaximumSize(QSize(700, 700));
        healthConditionsGroupBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        gridLayout_3 = new QGridLayout(healthConditionsGroupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        bloodSugarManagementLayout = new QHBoxLayout();
        bloodSugarManagementLayout->setObjectName("bloodSugarManagementLayout");
        bloodSugarManagementLabel = new QLabel(healthConditionsGroupBox);
        bloodSugarManagementLabel->setObjectName("bloodSugarManagementLabel");
        bloodSugarManagementLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        bloodSugarManagementLayout->addWidget(bloodSugarManagementLabel);

        diabetescheckBox = new QCheckBox(healthConditionsGroupBox);
        diabetescheckBox->setObjectName("diabetescheckBox");

        bloodSugarManagementLayout->addWidget(diabetescheckBox);

        HypoglycemiaCheckBox = new QCheckBox(healthConditionsGroupBox);
        HypoglycemiaCheckBox->setObjectName("HypoglycemiaCheckBox");

        bloodSugarManagementLayout->addWidget(HypoglycemiaCheckBox);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, bloodSugarManagementLayout);

        heartHealthLayout = new QHBoxLayout();
        heartHealthLayout->setObjectName("heartHealthLayout");
        heartHealthLabel = new QLabel(healthConditionsGroupBox);
        heartHealthLabel->setObjectName("heartHealthLabel");
        heartHealthLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        heartHealthLayout->addWidget(heartHealthLabel);

        heartDiseaseCheckBox = new QCheckBox(healthConditionsGroupBox);
        heartDiseaseCheckBox->setObjectName("heartDiseaseCheckBox");

        heartHealthLayout->addWidget(heartDiseaseCheckBox);

        highCholesterolCheckBox = new QCheckBox(healthConditionsGroupBox);
        highCholesterolCheckBox->setObjectName("highCholesterolCheckBox");

        heartHealthLayout->addWidget(highCholesterolCheckBox);

        highBloodPressCheckBox = new QCheckBox(healthConditionsGroupBox);
        highBloodPressCheckBox->setObjectName("highBloodPressCheckBox");

        heartHealthLayout->addWidget(highBloodPressCheckBox);


        formLayout_2->setLayout(1, QFormLayout::LabelRole, heartHealthLayout);

        digistiveHealthLayout = new QHBoxLayout();
        digistiveHealthLayout->setObjectName("digistiveHealthLayout");
        digistiveHealthLabel = new QLabel(healthConditionsGroupBox);
        digistiveHealthLabel->setObjectName("digistiveHealthLabel");
        digistiveHealthLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        digistiveHealthLayout->addWidget(digistiveHealthLabel);

        lactoseIntolerancecheckBox = new QCheckBox(healthConditionsGroupBox);
        lactoseIntolerancecheckBox->setObjectName("lactoseIntolerancecheckBox");

        digistiveHealthLayout->addWidget(lactoseIntolerancecheckBox);

        digistiveHealthCheckBox = new QCheckBox(healthConditionsGroupBox);
        digistiveHealthCheckBox->setObjectName("digistiveHealthCheckBox");

        digistiveHealthLayout->addWidget(digistiveHealthCheckBox);

        GERDCheckBox = new QCheckBox(healthConditionsGroupBox);
        GERDCheckBox->setObjectName("GERDCheckBox");

        digistiveHealthLayout->addWidget(GERDCheckBox);


        formLayout_2->setLayout(2, QFormLayout::LabelRole, digistiveHealthLayout);

        allegriesSensLayout = new QHBoxLayout();
        allegriesSensLayout->setSpacing(6);
        allegriesSensLayout->setObjectName("allegriesSensLayout");
        allergiesSenLabel = new QLabel(healthConditionsGroupBox);
        allergiesSenLabel->setObjectName("allergiesSenLabel");
        allergiesSenLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        allegriesSensLayout->addWidget(allergiesSenLabel, 0, Qt::AlignTop);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        foodAllegriesCheckBox = new QCheckBox(healthConditionsGroupBox);
        foodAllegriesCheckBox->setObjectName("foodAllegriesCheckBox");

        verticalLayout_3->addWidget(foodAllegriesCheckBox);

        foodSensCheckBox_3 = new QCheckBox(healthConditionsGroupBox);
        foodSensCheckBox_3->setObjectName("foodSensCheckBox_3");

        verticalLayout_3->addWidget(foodSensCheckBox_3);


        allegriesSensLayout->addLayout(verticalLayout_3);

        allegriesSensLayout->setStretch(1, 1);

        formLayout_2->setLayout(3, QFormLayout::LabelRole, allegriesSensLayout);

        mentalHealthLayout = new QHBoxLayout();
        mentalHealthLayout->setObjectName("mentalHealthLayout");
        MentalHealthLabel = new QLabel(healthConditionsGroupBox);
        MentalHealthLabel->setObjectName("MentalHealthLabel");
        MentalHealthLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        mentalHealthLayout->addWidget(MentalHealthLabel, 0, Qt::AlignTop);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        depressionCheckBox = new QCheckBox(healthConditionsGroupBox);
        depressionCheckBox->setObjectName("depressionCheckBox");

        verticalLayout_4->addWidget(depressionCheckBox);

        anxietySensCheckBox = new QCheckBox(healthConditionsGroupBox);
        anxietySensCheckBox->setObjectName("anxietySensCheckBox");

        verticalLayout_4->addWidget(anxietySensCheckBox);


        mentalHealthLayout->addLayout(verticalLayout_4);


        formLayout_2->setLayout(4, QFormLayout::LabelRole, mentalHealthLayout);

        weightManagementLayout = new QHBoxLayout();
        weightManagementLayout->setObjectName("weightManagementLayout");
        weightManagmentLabel = new QLabel(healthConditionsGroupBox);
        weightManagmentLabel->setObjectName("weightManagmentLabel");
        weightManagmentLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        weightManagementLayout->addWidget(weightManagmentLabel, 0, Qt::AlignTop);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        obesityCheckBox = new QCheckBox(healthConditionsGroupBox);
        obesityCheckBox->setObjectName("obesityCheckBox");

        verticalLayout_5->addWidget(obesityCheckBox);

        metabolicCheckBox = new QCheckBox(healthConditionsGroupBox);
        metabolicCheckBox->setObjectName("metabolicCheckBox");

        verticalLayout_5->addWidget(metabolicCheckBox);


        weightManagementLayout->addLayout(verticalLayout_5);


        formLayout_2->setLayout(5, QFormLayout::LabelRole, weightManagementLayout);


        gridLayout_3->addLayout(formLayout_2, 0, 0, 1, 1);


        verticalLayout_2->addWidget(healthConditionsGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        signUpButton = new QPushButton(rightFrame);
        signUpButton->setObjectName("signUpButton");
        signUpButton->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(signUpButton->sizePolicy().hasHeightForWidth());
        signUpButton->setSizePolicy(sizePolicy1);
        signUpButton->setMinimumSize(QSize(250, 75));
        signUpButton->setMaximumSize(QSize(50, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu Sans")});
        font.setPointSize(13);
        font.setBold(true);
        font.setItalic(true);
        signUpButton->setFont(font);
        signUpButton->setStyleSheet(QString::fromUtf8("font: 100 bold  italic 13pt \"Ubuntu Sans\" ;\n"
"background-color: rgb(38, 162, 105);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(signUpButton, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout_4->addLayout(verticalLayout_2, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 0, 0, 1, 1);


        horizontalLayout->addWidget(rightFrame);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 3);

        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(SignUpDialog);

        QMetaObject::connectSlotsByName(SignUpDialog);
    } // setupUi

    void retranslateUi(QDialog *SignUpDialog)
    {
        SignUpDialog->setWindowTitle(QCoreApplication::translate("SignUpDialog", "Sign-Up", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("SignUpDialog", "You're\n"
" a step closer\n"
" to a better Life", nullptr));
        personalInfoGroupBox->setTitle(QCoreApplication::translate("SignUpDialog", "Personal Info", nullptr));
        usernameLabel->setText(QCoreApplication::translate("SignUpDialog", "Username", nullptr));
        usernameLineEdit->setText(QString());
        usernameLineEdit->setPlaceholderText(QCoreApplication::translate("SignUpDialog", "Enter your username here", nullptr));
        passwordLabel->setText(QCoreApplication::translate("SignUpDialog", "Password", nullptr));
        passwordLineEdit->setText(QString());
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("SignUpDialog", "Enter your password here", nullptr));
        repeatPasswordLabel->setText(QCoreApplication::translate("SignUpDialog", "Repeat Password", nullptr));
        repeatPasswordLineEdit->setText(QString());
        repeatPasswordLineEdit->setPlaceholderText(QCoreApplication::translate("SignUpDialog", "Enter your password again here", nullptr));
        fullNameLabel->setText(QCoreApplication::translate("SignUpDialog", "Full Name", nullptr));
        fullNameLineEdit->setText(QString());
        fullNameLineEdit->setPlaceholderText(QCoreApplication::translate("SignUpDialog", "Enter your full name here", nullptr));
        ageLabel->setText(QCoreApplication::translate("SignUpDialog", "Age", nullptr));
        ageComboBox->setCurrentText(QString());
        genderLabel->setText(QCoreApplication::translate("SignUpDialog", "Gender", nullptr));
        maleRadioButton->setText(QCoreApplication::translate("SignUpDialog", "Male", nullptr));
        femaleRadioButton->setText(QCoreApplication::translate("SignUpDialog", "Female", nullptr));
        healthConditionsGroupBox->setTitle(QCoreApplication::translate("SignUpDialog", "Health Conditions", nullptr));
        bloodSugarManagementLabel->setText(QCoreApplication::translate("SignUpDialog", "Blood Sugar Management", nullptr));
        diabetescheckBox->setText(QCoreApplication::translate("SignUpDialog", "Diabetes", nullptr));
        HypoglycemiaCheckBox->setText(QCoreApplication::translate("SignUpDialog", "Hypoglycemia (Low Blood Sugar)", nullptr));
        heartHealthLabel->setText(QCoreApplication::translate("SignUpDialog", "Heart Health", nullptr));
        heartDiseaseCheckBox->setText(QCoreApplication::translate("SignUpDialog", "Heart Disease", nullptr));
        highCholesterolCheckBox->setText(QCoreApplication::translate("SignUpDialog", "High Cholesterol", nullptr));
        highBloodPressCheckBox->setText(QCoreApplication::translate("SignUpDialog", "High Blood Pressure", nullptr));
        digistiveHealthLabel->setText(QCoreApplication::translate("SignUpDialog", "Digestive Health", nullptr));
        lactoseIntolerancecheckBox->setText(QCoreApplication::translate("SignUpDialog", "Lactose Intolerance", nullptr));
        digistiveHealthCheckBox->setText(QCoreApplication::translate("SignUpDialog", "Celiac Disease", nullptr));
        GERDCheckBox->setText(QCoreApplication::translate("SignUpDialog", "GERD", nullptr));
        allergiesSenLabel->setText(QCoreApplication::translate("SignUpDialog", "Allergies and Sensitivities", nullptr));
        foodAllegriesCheckBox->setText(QCoreApplication::translate("SignUpDialog", "Food Allergies (e.g., Peanuts, Shellfish)", nullptr));
        foodSensCheckBox_3->setText(QCoreApplication::translate("SignUpDialog", "Food Sensitivities (e.g., Histamine Intolerance)", nullptr));
        MentalHealthLabel->setText(QCoreApplication::translate("SignUpDialog", "Mental Health and Eating", nullptr));
        depressionCheckBox->setText(QCoreApplication::translate("SignUpDialog", "Depression and Eating Disorders (e.g., Anorexia, Bulimia)", nullptr));
        anxietySensCheckBox->setText(QCoreApplication::translate("SignUpDialog", "Anxiety and Diet", nullptr));
        weightManagmentLabel->setText(QCoreApplication::translate("SignUpDialog", "Weight Management", nullptr));
        obesityCheckBox->setText(QCoreApplication::translate("SignUpDialog", "Obesity", nullptr));
        metabolicCheckBox->setText(QCoreApplication::translate("SignUpDialog", "Metabolic Syndrome", nullptr));
        signUpButton->setText(QCoreApplication::translate("SignUpDialog", "Signup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUpDialog: public Ui_SignUpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPDIALOG_H
