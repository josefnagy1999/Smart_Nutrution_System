/********************************************************************************
** Form generated from reading UI file 'patientdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTDIALOG_H
#define UI_PATIENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PatientDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QFrame *leftFrame;
    QVBoxLayout *verticalLayout;
    QLabel *welcomePatientLabel;
    QFrame *rightFrame;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_3;
    QGroupBox *BMIGroupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *heightLabel;
    QComboBox *heightComboBox;
    QLabel *mHeightLabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *weightLabel;
    QComboBox *weightComboBox;
    QLabel *kgWeightLabel;
    QPushButton *calcBMIButton;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *BMILabel;
    QLabel *BMIResultLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *BMIConditionLabel;
    QLabel *BMIConditionResultLabel;
    QGroupBox *bloodPressureGroupBox;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *systolicLabel;
    QComboBox *systolicComboBox;
    QLabel *upperNumLabel;
    QHBoxLayout *horizontalLayout_8;
    QLabel *diastolicLabel;
    QComboBox *diastolicComboBox;
    QLabel *lowrLabel;
    QPushButton *analyzeBPButton;
    QHBoxLayout *horizontalLayout_13;
    QLabel *bloodPressureConditionLabel;
    QLabel *bloodPressureConditionResultLabel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_5;
    QPushButton *createNewDPButton;
    QListWidget *dietPlanList;
    QFormLayout *formLayout;
    QComboBox *feedBackcomboBox;
    QPushButton *giveFeedbackButton;

    void setupUi(QDialog *PatientDialog)
    {
        if (PatientDialog->objectName().isEmpty())
            PatientDialog->setObjectName("PatientDialog");
        PatientDialog->resize(1027, 684);
        gridLayout = new QGridLayout(PatientDialog);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        leftFrame = new QFrame(PatientDialog);
        leftFrame->setObjectName("leftFrame");
        leftFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 209, 122);"));
        leftFrame->setFrameShape(QFrame::StyledPanel);
        leftFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(leftFrame);
        verticalLayout->setObjectName("verticalLayout");
        welcomePatientLabel = new QLabel(leftFrame);
        welcomePatientLabel->setObjectName("welcomePatientLabel");
        welcomePatientLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 32pt \"Ubuntu Sans\" ;\n"
"color: rgb(255, 255, 255);"));
        welcomePatientLabel->setTextFormat(Qt::AutoText);
        welcomePatientLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(welcomePatientLabel);


        horizontalLayout->addWidget(leftFrame);

        rightFrame = new QFrame(PatientDialog);
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
        gridLayout_5 = new QGridLayout(rightFrame);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        BMIGroupBox = new QGroupBox(rightFrame);
        BMIGroupBox->setObjectName("BMIGroupBox");
        BMIGroupBox->setMaximumSize(QSize(2000, 1000));
        BMIGroupBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        gridLayout_2 = new QGridLayout(BMIGroupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(-1, -1, 0, -1);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, -1, 0, -1);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, -1, 0, -1);
        heightLabel = new QLabel(BMIGroupBox);
        heightLabel->setObjectName("heightLabel");
        heightLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_4->addWidget(heightLabel);

        heightComboBox = new QComboBox(BMIGroupBox);
        heightComboBox->setObjectName("heightComboBox");
        heightComboBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        heightComboBox->setEditable(false);
        heightComboBox->setInsertPolicy(QComboBox::InsertAtBottom);

        horizontalLayout_4->addWidget(heightComboBox);

        mHeightLabel = new QLabel(BMIGroupBox);
        mHeightLabel->setObjectName("mHeightLabel");
        mHeightLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_4->addWidget(mHeightLabel);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(-1, -1, 0, -1);
        weightLabel = new QLabel(BMIGroupBox);
        weightLabel->setObjectName("weightLabel");
        weightLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(weightLabel);

        weightComboBox = new QComboBox(BMIGroupBox);
        weightComboBox->setObjectName("weightComboBox");
        weightComboBox->setEnabled(true);
        weightComboBox->setAcceptDrops(true);
        weightComboBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        weightComboBox->setEditable(false);
        weightComboBox->setDuplicatesEnabled(true);

        horizontalLayout_5->addWidget(weightComboBox);

        kgWeightLabel = new QLabel(BMIGroupBox);
        kgWeightLabel->setObjectName("kgWeightLabel");
        kgWeightLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(kgWeightLabel);


        verticalLayout_3->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_3);

        calcBMIButton = new QPushButton(BMIGroupBox);
        calcBMIButton->setObjectName("calcBMIButton");
        calcBMIButton->setMinimumSize(QSize(0, 50));

        horizontalLayout_6->addWidget(calcBMIButton);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, -1, 120, -1);
        BMILabel = new QLabel(BMIGroupBox);
        BMILabel->setObjectName("BMILabel");
        BMILabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(BMILabel);

        BMIResultLabel = new QLabel(BMIGroupBox);
        BMIResultLabel->setObjectName("BMIResultLabel");
        BMIResultLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(BMIResultLabel);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, -1, 75, 0);
        BMIConditionLabel = new QLabel(BMIGroupBox);
        BMIConditionLabel->setObjectName("BMIConditionLabel");
        BMIConditionLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(BMIConditionLabel);

        BMIConditionResultLabel = new QLabel(BMIGroupBox);
        BMIConditionResultLabel->setObjectName("BMIConditionResultLabel");
        BMIConditionResultLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(BMIConditionResultLabel);


        verticalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout_6->addLayout(verticalLayout_4);


        gridLayout_2->addLayout(horizontalLayout_6, 0, 0, 1, 1);


        gridLayout_3->addWidget(BMIGroupBox, 0, 0, 1, 1);

        bloodPressureGroupBox = new QGroupBox(rightFrame);
        bloodPressureGroupBox->setObjectName("bloodPressureGroupBox");
        bloodPressureGroupBox->setMaximumSize(QSize(2000, 1000));
        bloodPressureGroupBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        gridLayout_4 = new QGridLayout(bloodPressureGroupBox);
        gridLayout_4->setObjectName("gridLayout_4");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        systolicLabel = new QLabel(bloodPressureGroupBox);
        systolicLabel->setObjectName("systolicLabel");
        systolicLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_7->addWidget(systolicLabel);

        systolicComboBox = new QComboBox(bloodPressureGroupBox);
        systolicComboBox->setObjectName("systolicComboBox");
        systolicComboBox->setMaximumSize(QSize(50, 16777215));
        systolicComboBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        systolicComboBox->setEditable(false);

        horizontalLayout_7->addWidget(systolicComboBox);

        upperNumLabel = new QLabel(bloodPressureGroupBox);
        upperNumLabel->setObjectName("upperNumLabel");
        upperNumLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_7->addWidget(upperNumLabel);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        diastolicLabel = new QLabel(bloodPressureGroupBox);
        diastolicLabel->setObjectName("diastolicLabel");
        diastolicLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_8->addWidget(diastolicLabel);

        diastolicComboBox = new QComboBox(bloodPressureGroupBox);
        diastolicComboBox->setObjectName("diastolicComboBox");
        diastolicComboBox->setMaximumSize(QSize(50, 16777215));
        diastolicComboBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        diastolicComboBox->setEditable(false);

        horizontalLayout_8->addWidget(diastolicComboBox);

        lowrLabel = new QLabel(bloodPressureGroupBox);
        lowrLabel->setObjectName("lowrLabel");
        lowrLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_8->addWidget(lowrLabel);


        verticalLayout_2->addLayout(horizontalLayout_8);


        horizontalLayout_9->addLayout(verticalLayout_2);

        analyzeBPButton = new QPushButton(bloodPressureGroupBox);
        analyzeBPButton->setObjectName("analyzeBPButton");
        analyzeBPButton->setMinimumSize(QSize(0, 50));

        horizontalLayout_9->addWidget(analyzeBPButton);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(-1, -1, 50, 0);
        bloodPressureConditionLabel = new QLabel(bloodPressureGroupBox);
        bloodPressureConditionLabel->setObjectName("bloodPressureConditionLabel");
        bloodPressureConditionLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_13->addWidget(bloodPressureConditionLabel);

        bloodPressureConditionResultLabel = new QLabel(bloodPressureGroupBox);
        bloodPressureConditionResultLabel->setObjectName("bloodPressureConditionResultLabel");
        bloodPressureConditionResultLabel->setStyleSheet(QString::fromUtf8("font: 100 italic 13pt \"Ubuntu Sans\" ;\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_13->addWidget(bloodPressureConditionResultLabel);


        horizontalLayout_9->addLayout(horizontalLayout_13);


        gridLayout_4->addLayout(horizontalLayout_9, 0, 0, 1, 1);


        gridLayout_3->addWidget(bloodPressureGroupBox, 1, 0, 1, 1);

        groupBox = new QGroupBox(rightFrame);
        groupBox->setObjectName("groupBox");
        groupBox->setMinimumSize(QSize(700, 370));
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        gridLayout_6 = new QGridLayout(groupBox);
        gridLayout_6->setObjectName("gridLayout_6");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        createNewDPButton = new QPushButton(groupBox);
        createNewDPButton->setObjectName("createNewDPButton");
        createNewDPButton->setMinimumSize(QSize(0, 50));
        createNewDPButton->setMaximumSize(QSize(200, 16777215));

        verticalLayout_5->addWidget(createNewDPButton);

        dietPlanList = new QListWidget(groupBox);
        dietPlanList->setObjectName("dietPlanList");

        verticalLayout_5->addWidget(dietPlanList);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(250, 0, 0, -1);
        feedBackcomboBox = new QComboBox(groupBox);
        feedBackcomboBox->addItem(QString());
        feedBackcomboBox->addItem(QString());
        feedBackcomboBox->addItem(QString());
        feedBackcomboBox->addItem(QString());
        feedBackcomboBox->addItem(QString());
        feedBackcomboBox->setObjectName("feedBackcomboBox");
        feedBackcomboBox->setMaximumSize(QSize(75, 16777215));

        formLayout->setWidget(0, QFormLayout::LabelRole, feedBackcomboBox);

        giveFeedbackButton = new QPushButton(groupBox);
        giveFeedbackButton->setObjectName("giveFeedbackButton");
        giveFeedbackButton->setMinimumSize(QSize(0, 50));
        giveFeedbackButton->setMaximumSize(QSize(100, 16777215));

        formLayout->setWidget(0, QFormLayout::FieldRole, giveFeedbackButton);


        verticalLayout_5->addLayout(formLayout);


        gridLayout_6->addLayout(verticalLayout_5, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 2, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 0, 0, 1, 1);


        horizontalLayout->addWidget(rightFrame);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 3);

        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(PatientDialog);

        QMetaObject::connectSlotsByName(PatientDialog);
    } // setupUi

    void retranslateUi(QDialog *PatientDialog)
    {
        PatientDialog->setWindowTitle(QCoreApplication::translate("PatientDialog", "Patient - Home Page", nullptr));
        welcomePatientLabel->setText(QCoreApplication::translate("PatientDialog", "Let's get you\n"
" FIT!", nullptr));
        BMIGroupBox->setTitle(QCoreApplication::translate("PatientDialog", "Calculate BMI", nullptr));
        heightLabel->setText(QCoreApplication::translate("PatientDialog", "Height", nullptr));
        mHeightLabel->setText(QCoreApplication::translate("PatientDialog", "m", nullptr));
        weightLabel->setText(QCoreApplication::translate("PatientDialog", "Weight", nullptr));
        kgWeightLabel->setText(QCoreApplication::translate("PatientDialog", "kg", nullptr));
        calcBMIButton->setText(QCoreApplication::translate("PatientDialog", "Calculate", nullptr));
        BMILabel->setText(QCoreApplication::translate("PatientDialog", "Your BMI", nullptr));
        BMIResultLabel->setText(QCoreApplication::translate("PatientDialog", "BMI Result", nullptr));
        BMIConditionLabel->setText(QCoreApplication::translate("PatientDialog", "Condition", nullptr));
        BMIConditionResultLabel->setText(QCoreApplication::translate("PatientDialog", "Condition Result", nullptr));
        bloodPressureGroupBox->setTitle(QCoreApplication::translate("PatientDialog", "Blood Pressure Analysis", nullptr));
        systolicLabel->setText(QCoreApplication::translate("PatientDialog", "Systolic pressure", nullptr));
        upperNumLabel->setText(QCoreApplication::translate("PatientDialog", "Upper Number", nullptr));
        diastolicLabel->setText(QCoreApplication::translate("PatientDialog", "Diastolic pressure ", nullptr));
        lowrLabel->setText(QCoreApplication::translate("PatientDialog", "Lower Number", nullptr));
        analyzeBPButton->setText(QCoreApplication::translate("PatientDialog", "Analyze", nullptr));
        bloodPressureConditionLabel->setText(QCoreApplication::translate("PatientDialog", "Condition", nullptr));
        bloodPressureConditionResultLabel->setText(QCoreApplication::translate("PatientDialog", "Condition Result", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PatientDialog", "Diet Plan", nullptr));
        createNewDPButton->setText(QCoreApplication::translate("PatientDialog", "Create new Diet Plan", nullptr));
        feedBackcomboBox->setItemText(0, QCoreApplication::translate("PatientDialog", "1", nullptr));
        feedBackcomboBox->setItemText(1, QCoreApplication::translate("PatientDialog", "2", nullptr));
        feedBackcomboBox->setItemText(2, QCoreApplication::translate("PatientDialog", "3", nullptr));
        feedBackcomboBox->setItemText(3, QCoreApplication::translate("PatientDialog", "4", nullptr));
        feedBackcomboBox->setItemText(4, QCoreApplication::translate("PatientDialog", "5", nullptr));

        giveFeedbackButton->setText(QCoreApplication::translate("PatientDialog", "Give Feedback", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientDialog: public Ui_PatientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTDIALOG_H
