#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    ~MainWindow();

private slots:
    void listupdate();

    void on_electfilepushButton_clicked();

    void on_izdanfilepushButton_clicked();

    void on_tableWidget_cellChanged(int row, int column);

    void on_udalpushButton_clicked();

    void on_izdanformpushButton_clicked();

    void on_electformvvodpushButton_clicked();

    void on_izdanformvvodpushButton_clicked();

    void on_electformpushButton_clicked();

    void on_electsortpushButton_clicked();

    void on_izdanpushButton_clicked();

    void on_poiskpushButton_clicked();

    void on_infopushButton_clicked();

    void on_maxstranpushButton_clicked();

    void on_raznyazpushButton_clicked();

    void on_illustpushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
