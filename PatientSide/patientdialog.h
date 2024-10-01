#ifndef PATIENTDIALOG_H
#define PATIENTDIALOG_H

#include <QDialog>
#include "networkmanager.h"
namespace Ui {
class PatientDialog;
}

class PatientDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PatientDialog(QWidget *parent = nullptr,QString username = "");
    void fillFixedData();
    ~PatientDialog();

private slots:
    void on_createNewDPButton_clicked();

    void on_calcBMIButton_clicked();

    void on_analyzeBPButton_clicked();

    void on_giveFeedbackButton_clicked();

private:
    Ui::PatientDialog *ui;
    NetworkManager* netManager;
};

#endif // PATIENTDIALOG_H
