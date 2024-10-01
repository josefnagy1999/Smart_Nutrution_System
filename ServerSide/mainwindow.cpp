#include "mainwindow.h"
#include "qmessagebox.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),netManager(new NetworkManager(this))
{
    ui->setupUi(this);
    netManager->ui = ui;
    netManager->start();

}

MainWindow::~MainWindow()
{
    netManager->stop();
    delete ui;
}

void MainWindow::on_listWidget_itemPressed(QListWidgetItem *item)
{
    qInfo() << item->text();
    patientDetails = netManager->getUserInfo(item->text());
    displayCurrUserInfo(patientDetails);
}

void MainWindow::displayCurrUserInfo(Patient_Info &currPatient)
{
    ui->currDietlistWidget->clear();
    ui->inputUserName->setText(currPatient.getPatientUsername());
    ui->inputFullNamelabel->setText(currPatient.getPatientFullName());
    ui->inputAgelabel->setText(QString::number(currPatient.getPatientAge()));
    ui->inputPasslabel->setText(currPatient.getPatientPassword());
    ui->inputGenderlabel->setText(currPatient.getPatientGender());
    ui->currDietlistWidget->addItems(patientDetails.getPatientCurrDietPlan());

}
void MainWindow::on_userBMIButton_clicked()
{
    QMessageBox::about(this,"BMI", QString::number(patientDetails.getPatientBMI()));
}


void MainWindow::on_userBloodPressureButton_clicked()
{
     QMessageBox::about(this,"Blood Pressure",(patientDetails.getPatientBloodPressureCondition()));
}

