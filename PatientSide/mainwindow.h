#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <signupdialog.h>
#include<patientdialog.h>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void openPatientDialog();
    ~MainWindow();

    void TriggerOpenDialoge();
private slots:
    void on_signUpButton_clicked();
    void on_signInButton_clicked();

private:
    Ui::MainWindow *ui;
    SignUpDialog *signUpDialog;
    PatientDialog *patientDialog;
    NetworkManager *netManager;
};
#endif // MAINWINDOW_H
