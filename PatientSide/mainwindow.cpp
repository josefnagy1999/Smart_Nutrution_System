#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    netManager = new NetworkManager(parent,this);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
// On clicking the SignUp button
void MainWindow::on_signUpButton_clicked()
{
    this->hide(); // Hides the Main Window
    signUpDialog = new SignUpDialog(this);
    signUpDialog->setModal(true); // to block the main window
    signUpDialog->setAttribute(Qt::WA_DeleteOnClose);
    signUpDialog->exec(); // Show the signUp Dialog
    this->show(); // Showing the Main Window after finishing the dialog
}

// On clicking the signIn button
void MainWindow::on_signInButton_clicked()
{
    QString username = ui->usernameLineEdit->text(),
        password = ui->passwordLineEdit->text();
    netManager->start();
    netManager->sendRequest("signin",username,password);
    connect(netManager, &NetworkManager::signin, this , &MainWindow::openPatientDialog, Qt::UniqueConnection);
}

void MainWindow::openPatientDialog(){
    this->hide();
    QString username = ui->usernameLineEdit->text();
    patientDialog = new PatientDialog(this,username);
    patientDialog->setModal(true); // to block the main window
    patientDialog->setAttribute(Qt::WA_DeleteOnClose);
    patientDialog->exec(); // Show the signUp Dialog
    this->show(); // Showing the Main Window after finishing the dialog
}
