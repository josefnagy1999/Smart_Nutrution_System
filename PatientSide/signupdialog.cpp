#include "signupdialog.h"
#include "ui_signupdialog.h"
#include <QMessageBox>
SignUpDialog::SignUpDialog(QWidget *parent)
    : QDialog(parent),ui(new Ui::SignUpDialog)
{
    netManager = new NetworkManager(parent,this);
    netManager->start();
    ui->setupUi(this);
    fillAgeComboBox();
}

SignUpDialog::~SignUpDialog()
{
    qInfo("Bye sign up");
    netManager->stop();
    delete ui;
}
QList<QString> SignUpDialog::getHealthInfoCheckedItem(){
    QList<QString> healthconditions;
    // Loop through the checkboxes inside the GroupBox and add to list if checked
    for(QCheckBox* checkBox : ui->healthConditionsGroupBox->findChildren<QCheckBox*>()){
        if (checkBox->isChecked())
            healthconditions.append(QString(checkBox->text()));
    }
    return healthconditions;
}
// On Clicking signUp button
void SignUpDialog::on_signUpButton_clicked()
{
    ///////////////////// Verify data////////////////////
    // To be implemented
    if(!verifyDataEntered()){
        return;
    }
    /////////////////////////////////////////////////////

    /////////////////set Personal Info data//////////////
    patientInfo.setPaientPersonalInfo(ui->usernameLineEdit->text(),
                                      ui->passwordLineEdit->text(),
                                      ui->fullNameLineEdit->text(),
                                      (ui->ageComboBox->currentText()).toInt(),
                                      (ui->maleRadioButton->isChecked())? 'M':'F');
    /////////////////////////////////////////////////////
    ///
    /////////////////set Health Info data////////////////
    patientInfo.setPatientHealthInfo(getHealthInfoCheckedItem());
    /////////////////////////////////////////////////////

    //////////////Send Patient Info to server //////////
    QByteArray patientClassBarr;
    QDataStream classDataStream(&patientClassBarr, QIODevice::ReadWrite);
    classDataStream<<QString("NewPatient");
    patientInfo.classToDataStream(classDataStream);
    netManager->sendRequest(patientClassBarr);

}
void SignUpDialog::fillAgeComboBox(){
    int minAge = 18, maxAge = 120;
    for(int i =minAge ; i <=maxAge ; ++i){
        ui->ageComboBox->addItem(QString::number(i));
    }
}

bool SignUpDialog::verifyDataEntered()
{
    QString username = ui->usernameLineEdit->text(),
        fullName = ui->fullNameLineEdit->text(),
        password = ui->passwordLineEdit->text(),
        retypePassword = ui->repeatPasswordLineEdit->text();
    QString problem="";
    if (username.isEmpty()){
        problem+= "username is empty<br>";
    }
    if (fullName.isEmpty())
        problem+= "full name is empty<br>";
    if(password.isEmpty())
        problem+="password is empty<br>";
    if (password != retypePassword)
        problem+="passwords doesn't match<br>";
    if (!problem.isEmpty()){
        QMessageBox::warning(this,"Review",
                             "<font color ='black'>"+problem+"<\font color>");
        return false;
    }
    return true;
}
/* Desrialize Test

    classDataStream.device()->seek(0);
    Patient_Info tmp;
    tmp.DataStreamToClass(classDataStream);
    qInfo()<<tmp.personalInfo.username;
*/
