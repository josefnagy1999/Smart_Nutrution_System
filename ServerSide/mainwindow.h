#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <networkmanager.h>
#include <diet_plan.h>
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
    void displayCurrUserInfo(Patient_Info&);
    ~MainWindow();

private slots:
    void on_listWidget_itemPressed(QListWidgetItem *item);

    void on_userBMIButton_clicked();

    void on_userBloodPressureButton_clicked();

private:
    Ui::MainWindow *ui;
    NetworkManager *netManager;
    Diet_Plan * dietPlan;
    Patient_Info patientDetails;
};
#endif // MAINWINDOW_H
