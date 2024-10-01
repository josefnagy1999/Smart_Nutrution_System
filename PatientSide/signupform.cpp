#include "signupform.h"
#include "ui_signupform.h"

SignUpForm::SignUpForm(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SignUpForm)
{
    ui->setupUi(this);
}

SignUpForm::~SignUpForm()
{
    delete ui;
}
/*
newSWallet::newSWallet(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::newSWallet)
{
    ui->setupUi(this);
    fill_age_comboBox();
    clientM = new ClientManager();
    clientM->connectToServer();
}

*/
