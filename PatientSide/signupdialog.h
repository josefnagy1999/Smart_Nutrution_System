#ifndef SIGNUPDIALOG_H
#define SIGNUPDIALOG_H

#include <QDialog>
#include <QString>
#include <QList>
#include <QDataStream>
#include "patient_info.h"
#include "networkmanager.h"
namespace Ui {
class SignUpDialog;
}

class SignUpDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SignUpDialog(QWidget *parent = nullptr);
    void fillAgeComboBox();
    bool verifyDataEntered();
    ~SignUpDialog();
    QList<QString> getHealthInfoCheckedItem();
private slots:
    void on_signUpButton_clicked();

private:
    Ui::SignUpDialog *ui;
    Patient_Info patientInfo;
    NetworkManager* netManager;
};

#endif // SIGNUPDIALOG_H
