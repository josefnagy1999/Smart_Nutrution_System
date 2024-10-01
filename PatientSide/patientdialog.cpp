#include "patientdialog.h"
#include "qmessagebox.h"
#include "ui_patientdialog.h"

PatientDialog::PatientDialog(QWidget *parent,QString username)
    : QDialog(parent)
    , ui(new Ui::PatientDialog)
{
    netManager = new NetworkManager(parent,this);
    netManager->start();
    netManager->ui = ui;
    ui->setupUi(this);
    netManager->sendRequest("username",username);
    fillFixedData();
    netManager->sendRequest("lastDietPlan");
}

void PatientDialog::fillFixedData()
{
    //////////// Filling height box/////////////
    for(double height = 1.0; height <=4.9 ; height+=0.1 ){
        ui->heightComboBox->addItem(QString::number(height));
    }
    ui->heightComboBox->setMaxVisibleItems(5);
    ////////// Filling Weight box /////////////
    for(int weight = 30; weight <=400 ; weight++ ){
        ui->weightComboBox->addItem(QString::number(weight));
    }
    ui->weightComboBox->setMaxVisibleItems(5);
    ///////// Filling blood pressure comboboxes //////
    for(int bloodP = 40; bloodP <360 ; bloodP++ ){
        ui->systolicComboBox->addItem(QString::number(bloodP));
        ui->diastolicComboBox->addItem(QString::number(bloodP));
    }
    ui->systolicComboBox->setMaxVisibleItems(5);
    ui->diastolicComboBox->setMaxVisibleItems(5);
}

PatientDialog::~PatientDialog()
{
    netManager->stop();
    delete ui;
}

void PatientDialog::on_createNewDPButton_clicked()
{
    netManager->sendRequest("NewDietPlan");
}

void PatientDialog::on_calcBMIButton_clicked()
{
    int weight = ui->weightComboBox->currentText().toInt();
    double height = ui->heightComboBox->currentText().toDouble();
    double BMI = weight / (height * height);
    ui->BMIResultLabel->setText(QString::number(BMI,'f',1));
    if (BMI <=18.4){
        ui->BMIConditionResultLabel->setText("Underweight"),
            ui->BMIConditionResultLabel->setStyleSheet(("background-color:yellow;"));
    }else if (BMI <=24.9)
        ui->BMIConditionResultLabel->setText("Normal"),
            ui->BMIConditionResultLabel->setStyleSheet(("background-color:green;"));
    else if (BMI <=39.9)
        ui->BMIConditionResultLabel->setText("Overweight"),
            ui->BMIConditionResultLabel->setStyleSheet(("background-color:orange;"));
    else
        ui->BMIConditionResultLabel->setText("Obese"),
            ui->BMIConditionResultLabel->setStyleSheet(("background-color:red;"));

    ////////////// Send request BMI value and Condition ////////
}


void PatientDialog::on_analyzeBPButton_clicked()
{
    int systolic = ui->systolicComboBox->currentText().toInt();
    int diastolic = ui->diastolicComboBox->currentText().toInt();
    qInfo()<<systolic <<" "<<diastolic;
    if (systolic < 120 && diastolic <80){
        ui->bloodPressureConditionResultLabel->setText("NORMAL");
        ui->bloodPressureConditionResultLabel->setStyleSheet(("background-color:green;"));
    }
    else if ((systolic >= 120 && systolic<=129) && diastolic <80){
        ui->bloodPressureConditionResultLabel->setText("ELEVATED");
        ui->bloodPressureConditionResultLabel->setStyleSheet(("background-color:yellow;"));
    }
    else if ((systolic >= 130 && systolic<=139) || (diastolic >=80 && diastolic<=89)){
        ui->bloodPressureConditionResultLabel->setText("(HYPERTENSION) STAGE 1");
        ui->bloodPressureConditionResultLabel->setStyleSheet(("background-color:orange;"));
    }
    else  if ((systolic >= 140 && systolic<=180) || (diastolic >=90 && diastolic<=120)){
        ui->bloodPressureConditionResultLabel->setText("(HYPERTENSION) STAGE 2");
        ui->bloodPressureConditionResultLabel->setStyleSheet(("background-color:orange;"));
    }
    else  if (systolic > 180 || diastolic > 120){
        ui->bloodPressureConditionResultLabel->setText("HYPERTENSIVE CRISIS");
        ui->bloodPressureConditionResultLabel->setStyleSheet(("background-color:red;"));
        QMessageBox::critical(this,"High Blood Pressure",
                              "<font color ='red'>Consult your doctor immediately!<\font color>");
    }
    else{
        ui->bloodPressureConditionResultLabel->setText("UNKNOWN");
        ui->bloodPressureConditionResultLabel->setStyleSheet(("background-color:black;"));
    }
    ////TODO: Send condition to Server//////////////////

}


void PatientDialog::on_giveFeedbackButton_clicked()
{
    if (ui->dietPlanList->count() != 0){
        QString feedBackScore = ui->feedBackcomboBox->currentText();
        netManager->sendRequest("feedback", feedBackScore);
        QMessageBox::about(this,"Feedback Receveied", "Thank You");
    }else{
        QMessageBox::information(this,"Diet Plan is Empty :_(",
                              "<font color ='balck'>Create one to score it :D <\font color>");
    }
}

