#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>
#include "fstream"
#include <windows.h>

using namespace std;

struct Book {
    string type;//тип
    string nositel; //носитель
    string chranenie;//Хранение
};

struct Decoration {
    Book B;//печать
    string name; //имя книги
    int pageCount;//кол-во страниц
    string cover;//обложка
    string image;//иллюстрации
    string language;//язык
};

int n1, n2, tekn;
bool electisloaded, izdanisloaded;
string bufer;
QStringList zagolovki;
Decoration * Dec1 = nullptr, * Dec2 = nullptr;
Decoration Dec0;
Book B1, B2;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    B1 = { "Электронная", "Электронный гаджет(телефон, планшет и т.д.)", "Память в устройстве" };
    B2 = { "Изданная", "Бумажный носитель", "Физическое пространство" };
    n1 = 0;
    n2 = 0;
    zagolovki = QStringList() << "Печать" << "Название" << "Кол-во стр." << "Обложка" << "Иллюстрации" << "Язык";
    electisloaded = false;
    izdanisloaded = false;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::listupdate(){
    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->setRowCount(n1+n2);
    ui->tableWidget->setShowGrid(true);
    ui->tableWidget->setHorizontalHeaderLabels(zagolovki);
    for (int i = 0; i < n1; i++){
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(Dec1[i].B.type)));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(Dec1[i].name)));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(Dec1[i].pageCount)));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::fromStdString(Dec1[i].cover)));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::fromStdString(Dec1[i].image)));
        ui->tableWidget->setItem(i, 5, new QTableWidgetItem(QString::fromStdString(Dec1[i].language)));
    }
    for (int i = n1; i < n1+n2; i++){
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(Dec2[i-n1].B.type)));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(Dec2[i-n1].name)));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(Dec2[i-n1].pageCount)));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::fromStdString(Dec2[i-n1].cover)));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::fromStdString(Dec2[i-n1].image)));
        ui->tableWidget->setItem(i, 5, new QTableWidgetItem(QString::fromStdString(Dec2[i-n1].language)));
    }
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(3, QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(4, QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(5, QHeaderView::Stretch);
}

void MainWindow::on_electfilepushButton_clicked()
{
    n1 = ui->electchisspinBox->value();
    Dec1 = new Decoration[n1];
    ifstream fin(ui->electfilelineEdit->text().toStdString());
    if(fin.is_open()){
        for (int i = 0; i < n1; i++) {
            Dec1[i].B = B1;
            getline(fin, Dec1[i].name);
            getline(fin, bufer);
            Dec1[i].pageCount = stoi(bufer);
            getline(fin, Dec1[i].cover);
            getline(fin, Dec1[i].image);
            getline(fin, Dec1[i].language);
        }
        ui->Textlabel->setText("Запись прошла успешно!");
        electisloaded = true;
        listupdate();
    }
    else{
        ui->Textlabel->setText("Файл не найден!");
    }
    fin.close();
}

void MainWindow::on_izdanfilepushButton_clicked()
{
    n2 = ui->izdanchisspinBox->value();
    Dec2 = new Decoration[n2];
    ifstream fin(ui->izdanfilelineEdit->text().toStdString());
    if(fin.is_open()){
        for (int i = 0; i < n2; i++) {
            Dec2[i].B = B2;
            getline(fin, Dec2[i].name);
            getline(fin, bufer);
            Dec2[i].pageCount = stoi(bufer);
            getline(fin, Dec2[i].cover);
            getline(fin, Dec2[i].image);
            getline(fin, Dec2[i].language);
        }
        ui->Textlabel->setText("Запись прошла успешно!");
        izdanisloaded = true;
        listupdate();
    }
    else{
        ui->Textlabel->setText("Файл не найден!");
    }
    fin.close();
}

void MainWindow::on_tableWidget_cellChanged(int row, int column)
{
    if(row <n1){
        switch (column) {
        case 0:
            Dec1[row].B.type = ui->tableWidget->item(row, column)->text().toStdString();
            break;
        case 1:
            Dec1[row].name = ui->tableWidget->item(row, column)->text().toStdString();
            break;
        case 2:
            Dec1[row].pageCount = ui->tableWidget->item(row, column)->text().toDouble();
            break;
        case 3:
            Dec1[row].cover = ui->tableWidget->item(row, column)->text().toStdString();
            break;
        case 4:
            Dec1[row].image = ui->tableWidget->item(row, column)->text().toStdString();
            break;
        case 5:
            Dec1[row].language = ui->tableWidget->item(row, column)->text().toStdString();
            break;
        default:
            break;
        }
    }
    else{
        switch (column) {
        case 0:
            Dec2[row-n1].B.type = ui->tableWidget->item(row, column)->text().toStdString();
            break;
        case 1:
            Dec2[row-n1].name = ui->tableWidget->item(row, column)->text().toStdString();
            break;
        case 2:
            Dec2[row-n1].pageCount = ui->tableWidget->item(row, column)->text().toDouble();
            break;
        case 3:
            Dec2[row-n1].cover = ui->tableWidget->item(row, column)->text().toStdString();
            break;
        case 4:
            Dec2[row-n1].image = ui->tableWidget->item(row, column)->text().toStdString();
            break;
        case 5:
            Dec2[row-n1].language = ui->tableWidget->item(row, column)->text().toStdString();
            break;
        default:
            break;
        }
    }
}

void MainWindow::on_udalpushButton_clicked()
{
    if(!electisloaded && !izdanisloaded){
        ui->Textlabel->setText("Ошибка! Данные об оформлениях не были введены!");
    }
    else{
        if(ui->udalspinBox->value()<=n1){
            if (n1 > 1) {
                for (int i = ui->udalspinBox->value() - 1; i < n1 - 1; i++) {
                    Dec1[i] = Dec1[i + 1];
                }
                n1 = n1 - 1;
                ui->Textlabel->setText("Элемент " + QString::number(ui->udalspinBox->value()) + " был удален!");
            }
            else {
                n1 = n1 - 1;
                electisloaded = false;
                ui->Textlabel->setText("Из массива удалены все элементы!");
            }
        }
        else{
            if (n2 > 1) {
                for (int i = ui->udalspinBox->value() - 1 - n1; i < n2 - 1; i++) {
                    Dec2[i] = Dec2[i + 1];
                }
                n2 = n2 - 1;
                ui->Textlabel->setText("Элемент " + QString::number(ui->udalspinBox->value() - n1) + " был удален!");
            }
            else {
                n2 = n2 - 1;
                izdanisloaded = false;
                ui->Textlabel->setText("Из массива удалены все элементы!");
            }
        }
        listupdate();
    }
}

void MainWindow::on_electformpushButton_clicked()
{
    ui->tabWidget->setTabEnabled(1, false);
    ui->tabWidget->setTabEnabled(2, false);
    ui->tabWidget->setTabEnabled(3, false);
    ui->tabWidget->setTabEnabled(4, false);
    ui->electchisspinBox->setEnabled(false);
    ui->izdanchisspinBox->setEnabled(false);
    ui->electfilelineEdit->setEnabled(false);
    ui->electfilepushButton->setEnabled(false);
    ui->izdanfilelineEdit->setEnabled(false);
    ui->izdanfilepushButton->setEnabled(false);
    ui->electformpushButton->setEnabled(false);
    ui->izdanformpushButton->setEnabled(false);

    tekn = 0;
    n1 = ui->electchisspinBox->value();
    Dec1 = new Decoration[n1];

    ui->electformvvodlabel->setEnabled(true);
    ui->electformlineEdit1->setEnabled(true);
    ui->electformlineEdit2->setEnabled(true);
    ui->electformlineEdit3->setEnabled(true);
    ui->electformlineEdit4->setEnabled(true);
    ui->electformlabel1->setEnabled(true);
    ui->electformlabel2->setEnabled(true);
    ui->electformlabel3->setEnabled(true);
    ui->electformlabel4->setEnabled(true);
    ui->electformlabel5->setEnabled(true);
    ui->electformspinBox->setEnabled(true);
    ui->electformvvodpushButton->setEnabled(true);
}

void MainWindow::on_electformvvodpushButton_clicked()
{
    ui->electformvvodlabel->setText("Для оформления " +QString::number(tekn+2)+ ":");
    Dec1[tekn].B = B1;
    Dec1[tekn].name = ui->electformlineEdit1->text().toStdString();
    Dec1[tekn].pageCount = ui->electformspinBox->value();
    Dec1[tekn].cover = ui ->electformlineEdit2->text().toStdString();
    Dec1[tekn].image = ui ->electformlineEdit3->text().toStdString();
    Dec1[tekn].language = ui ->electformlineEdit4->text().toStdString();
    tekn++;
    if(tekn>=ui->electchisspinBox->value()){
        ui->electformvvodlabel->setEnabled(false);
        ui->electformlineEdit1->setEnabled(false);
        ui->electformlineEdit2->setEnabled(false);
        ui->electformlineEdit3->setEnabled(false);
        ui->electformlineEdit4->setEnabled(false);
        ui->electformlabel1->setEnabled(false);
        ui->electformlabel2->setEnabled(false);
        ui->electformlabel3->setEnabled(false);
        ui->electformlabel4->setEnabled(false);
        ui->electformlabel5->setEnabled(false);
        ui->electformspinBox->setEnabled(false);
        ui->electformvvodpushButton->setEnabled(false);

        electisloaded = true;
        listupdate();

        ui->tabWidget->setTabEnabled(1, true);
        ui->tabWidget->setTabEnabled(2, true);
        ui->tabWidget->setTabEnabled(3, true);
        ui->tabWidget->setTabEnabled(4, true);
        ui->electchisspinBox->setEnabled(true);
        ui->izdanchisspinBox->setEnabled(true);
        ui->electfilelineEdit->setEnabled(true);
        ui->electfilepushButton->setEnabled(true);
        ui->izdanfilelineEdit->setEnabled(true);
        ui->izdanfilepushButton->setEnabled(true);
        ui->electformpushButton->setEnabled(true);
        ui->izdanformpushButton->setEnabled(true);
        ui->Textlabel->setText("Запись прошла успешно!");
        ui->electformvvodlabel->setText("Для оформления 1:");
    }
}

void MainWindow::on_izdanformpushButton_clicked()
{
    ui->tabWidget->setTabEnabled(1, false);
    ui->tabWidget->setTabEnabled(2, false);
    ui->tabWidget->setTabEnabled(3, false);
    ui->tabWidget->setTabEnabled(4, false);
    ui->electchisspinBox->setEnabled(false);
    ui->izdanchisspinBox->setEnabled(false);
    ui->electfilelineEdit->setEnabled(false);
    ui->electfilepushButton->setEnabled(false);
    ui->izdanfilelineEdit->setEnabled(false);
    ui->izdanfilepushButton->setEnabled(false);
    ui->electformpushButton->setEnabled(false);
    ui->izdanformpushButton->setEnabled(false);

    tekn = 0;
    n2 = ui->izdanchisspinBox->value();
    Dec2 = new Decoration[n2];

    ui->izdanformvvodlabel->setEnabled(true);
    ui->izdanformlineEdit1->setEnabled(true);
    ui->izdanformlineEdit2->setEnabled(true);
    ui->izdanformlineEdit3->setEnabled(true);
    ui->izdanformlineEdit4->setEnabled(true);
    ui->izdanformlabel1->setEnabled(true);
    ui->izdanformlabel2->setEnabled(true);
    ui->izdanformlabel3->setEnabled(true);
    ui->izdanformlabel4->setEnabled(true);
    ui->izdanformlabel5->setEnabled(true);
    ui->izdanformspinBox->setEnabled(true);
    ui->izdanformvvodpushButton->setEnabled(true);
}

void MainWindow::on_izdanformvvodpushButton_clicked()
{
    ui->izdanformvvodlabel->setText("Для оформления " +QString::number(tekn+2)+ ":");
    Dec2[tekn].B = B2;
    Dec2[tekn].name = ui->izdanformlineEdit1->text().toStdString();
    Dec2[tekn].pageCount = ui->izdanformspinBox->value();
    Dec2[tekn].cover = ui ->izdanformlineEdit2->text().toStdString();
    Dec2[tekn].image = ui ->izdanformlineEdit3->text().toStdString();
    Dec2[tekn].language = ui ->izdanformlineEdit4->text().toStdString();
    tekn++;
    if(tekn>=ui->izdanchisspinBox->value()){
        ui->izdanformvvodlabel->setEnabled(false);
        ui->izdanformlineEdit1->setEnabled(false);
        ui->izdanformlineEdit2->setEnabled(false);
        ui->izdanformlineEdit3->setEnabled(false);
        ui->izdanformlineEdit4->setEnabled(false);
        ui->izdanformlabel1->setEnabled(false);
        ui->izdanformlabel2->setEnabled(false);
        ui->izdanformlabel3->setEnabled(false);
        ui->izdanformlabel4->setEnabled(false);
        ui->izdanformlabel5->setEnabled(false);
        ui->izdanformspinBox->setEnabled(false);
        ui->izdanformvvodpushButton->setEnabled(false);

        izdanisloaded = true;
        listupdate();

        ui->tabWidget->setTabEnabled(1, true);
        ui->tabWidget->setTabEnabled(2, true);
        ui->tabWidget->setTabEnabled(3, true);
        ui->tabWidget->setTabEnabled(4, true);
        ui->electchisspinBox->setEnabled(true);
        ui->izdanchisspinBox->setEnabled(true);
        ui->electfilelineEdit->setEnabled(true);
        ui->electfilepushButton->setEnabled(true);
        ui->izdanfilelineEdit->setEnabled(true);
        ui->izdanfilepushButton->setEnabled(true);
        ui->electformpushButton->setEnabled(true);
        ui->izdanformpushButton->setEnabled(true);
        ui->Textlabel->setText("Запись прошла успешно!");
        ui->izdanformvvodlabel->setText("Для оформления 1:");
    }
}

void MainWindow::on_electsortpushButton_clicked()
{
    if (electisloaded) {
        for (int i = 0; i < n1 - 1; i++) {
            for (int j = n1 - 1; j > i; j--) {
                switch (ui->electsortcomboBox->currentIndex()) {
                case 0:
                    if (Dec1[i].name > Dec1[j].name) {
                        Dec0 = Dec1[i];
                        Dec1[i] = Dec1[j];
                        Dec1[j] = Dec0;
                    }
                    break;
                case 1:
                    if (Dec1[i].pageCount > Dec1[j].pageCount) {
                        Dec0 = Dec1[i];
                        Dec1[i] = Dec1[j];
                        Dec1[j] = Dec0;
                    }
                    break;
                case 2:
                    if (Dec1[i].cover > Dec1[j].cover) {
                        Dec0 = Dec1[i];
                        Dec1[i] = Dec1[j];
                        Dec1[j] = Dec0;
                    }
                    break;
                case 3:
                    if (Dec1[i].image > Dec1[j].image) {
                        Dec0 = Dec1[i];
                        Dec1[i] = Dec1[j];
                        Dec1[j] = Dec0;
                    }
                    break;
                case 4:
                    if (Dec1[i].language > Dec1[j].language) {
                        Dec0 = Dec1[i];
                        Dec1[i] = Dec1[j];
                        Dec1[j] = Dec0;
                    }
                    break;
                default:
                    break;
                }
            }
        }
        listupdate();
        ui->Textlabel->setText("Оформления электронных книг были отсортированы.");
    }
    else {
        ui->Textlabel->setText("Ошибка, данные об оформлениях электронных книг не были введены!");
    }
}

void MainWindow::on_izdanpushButton_clicked()
{
    if (izdanisloaded) {
        for (int i = 0; i < n2 - 1; i++) {
            for (int j = n2 - 1; j > i; j--) {
                switch (ui->izdansortcomboBox->currentIndex()) {
                case 0:
                    if (Dec2[i].name > Dec2[j].name) {
                        Dec0 = Dec2[i];
                        Dec2[i] = Dec2[j];
                        Dec2[j] = Dec0;
                    }
                    break;
                case 1:
                    if (Dec2[i].pageCount > Dec2[j].pageCount) {
                        Dec0 = Dec2[i];
                        Dec2[i] = Dec2[j];
                        Dec2[j] = Dec0;
                    }
                    break;
                case 2:
                    if (Dec2[i].cover > Dec2[j].cover) {
                        Dec0 = Dec2[i];
                        Dec2[i] = Dec2[j];
                        Dec2[j] = Dec0;
                    }
                    break;
                case 3:
                    if (Dec1[i].image > Dec1[j].image) {
                        Dec0 = Dec1[i];
                        Dec1[i] = Dec1[j];
                        Dec1[j] = Dec0;
                    }
                    break;
                case 4:
                    if (Dec2[i].language > Dec2[j].language) {
                        Dec0 = Dec2[i];
                        Dec2[i] = Dec2[j];
                        Dec2[j] = Dec0;
                    }
                    break;
                default:
                    break;
                }
            }
        }
        listupdate();
        ui->Textlabel->setText("Оформления изданных книг были отсортированы.");
    }
    else {
        ui->Textlabel->setText("Ошибка, данные об оформлениях изданных книг не были введены!");
    }
}

void MainWindow::on_poiskpushButton_clicked()
{
    ui->poisktableWidget->setColumnCount(6);
    ui->poisktableWidget->setRowCount(0);
    ui->poisktableWidget->setShowGrid(true);
    ui->poisktableWidget->setHorizontalHeaderLabels(zagolovki);
    int j = 0;
    if(electisloaded){
        for (int i = 0; i < n1; i++) {
            if (Dec1[i].B.type == ui->poisklineEdit->text().toStdString() || Dec1[i].name == ui->poisklineEdit->text().toStdString()
                || Dec1[i].pageCount == ui->poisklineEdit->text().toInt() || Dec1[i].cover == ui->poisklineEdit->text().toStdString()
                || Dec1[i].image == ui->poisklineEdit->text().toStdString() || Dec1[i].language == ui->poisklineEdit->text().toStdString()) {
                ui->poisktableWidget->insertRow(j);
                ui->poisktableWidget->setItem(j, 0, new QTableWidgetItem(QString::fromStdString(Dec1[i].B.type)));
                ui->poisktableWidget->setItem(j, 1, new QTableWidgetItem(QString::fromStdString(Dec1[i].name)));
                ui->poisktableWidget->setItem(j, 2, new QTableWidgetItem(QString::number(Dec1[i].pageCount)));
                ui->poisktableWidget->setItem(j, 3, new QTableWidgetItem(QString::fromStdString(Dec1[i].cover)));
                ui->poisktableWidget->setItem(j, 4, new QTableWidgetItem(QString::fromStdString(Dec1[i].image)));
                ui->poisktableWidget->setItem(j, 5, new QTableWidgetItem(QString::fromStdString(Dec1[i].language)));
                j++;
            }
           }
    }
    if(izdanisloaded){
        for (int i = 0; i < n2; i++) {
            if (Dec2[i].B.type == ui->poisklineEdit->text().toStdString() || Dec2[i].name == ui->poisklineEdit->text().toStdString()
                || Dec2[i].pageCount == ui->poisklineEdit->text().toInt() || Dec2[i].cover == ui->poisklineEdit->text().toStdString()
                || Dec2[i].image == ui->poisklineEdit->text().toStdString() || Dec2[i].language == ui->poisklineEdit->text().toStdString()) {
                ui->poisktableWidget->insertRow(j);
                ui->poisktableWidget->setItem(j, 0, new QTableWidgetItem(QString::fromStdString(Dec2[i].B.type)));
                ui->poisktableWidget->setItem(j, 1, new QTableWidgetItem(QString::fromStdString(Dec2[i].name)));
                ui->poisktableWidget->setItem(j, 2, new QTableWidgetItem(QString::number(Dec2[i].pageCount)));
                ui->poisktableWidget->setItem(j, 3, new QTableWidgetItem(QString::fromStdString(Dec2[i].cover)));
                ui->poisktableWidget->setItem(j, 4, new QTableWidgetItem(QString::fromStdString(Dec2[i].image)));
                ui->poisktableWidget->setItem(j, 5, new QTableWidgetItem(QString::fromStdString(Dec2[i].language)));
                j++;
            }
        }
    }
    ui->poisktableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->poisktableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
    ui->poisktableWidget->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
    ui->poisktableWidget->horizontalHeader()->setSectionResizeMode(3, QHeaderView::Stretch);
    ui->poisktableWidget->horizontalHeader()->setSectionResizeMode(4, QHeaderView::Stretch);
    ui->poisktableWidget->horizontalHeader()->setSectionResizeMode(5, QHeaderView::Stretch);
    ui->Textlabel->setText(QString("Найдено %1 оформлений.").arg(j));
    if(!electisloaded && !izdanisloaded){
        ui->Textlabel->setText("Ошибка! Данные об оформлениях не были введены!");
        ui->poisktableWidget->setColumnCount(0);
        ui->poisktableWidget->setRowCount(0);
    }
}

void MainWindow::on_infopushButton_clicked()
{
    if(ui->infospinBox->value()-1 < n1){
        if(electisloaded){
            ui->Textlabel->setText("Тип печати: " + QString::fromStdString(Dec1[ui->infospinBox->value()-1].B.type)
                                   + " Тип носителя: " + QString::fromStdString(Dec1[ui->infospinBox->value()-1].B.nositel)
                                   + " Место хранения: " + QString::fromStdString(Dec1[ui->infospinBox->value()-1].B.chranenie) + ".");
        }
    }
    if(ui->infospinBox->value()-1 >= n1 && ui->infospinBox->value()-1 < n1+n2){
        if(izdanisloaded){
            ui->Textlabel->setText("Тип печати: " + QString::fromStdString(Dec2[ui->infospinBox->value()-1-n1].B.type)
                                   + " Тип носителя: " + QString::fromStdString(Dec2[ui->infospinBox->value()-1-n1].B.nositel)
                                   + " Место хранения: " + QString::fromStdString(Dec2[ui->infospinBox->value()-1-n1].B.chranenie) + ".");        }
    }
    if(ui->infospinBox->value()-1 >= n1+n2){
        ui->Textlabel->setText("Ошибка! Номер превышает размер массива!");
    }
    if(!electisloaded && !izdanisloaded){
        ui->Textlabel->setText("Ошибка! Данные об оформлениях не были введены!");
    }
}

void MainWindow::on_maxstranpushButton_clicked()
{
    int page = 0;
    int arr[2];
    arr[0] = 0;
    for (int i = 0; i < n1; i++) {
        if (Dec1[i].pageCount > page) {
            page = Dec1[i].pageCount; arr[0] = 1; arr[1] = i;
        }
    }
    for (int i = 0; i < n2; i++) {
        if (Dec2[i].pageCount > page) {
            page = Dec2[i].pageCount; arr[0] = 2; arr[1] = i;
        }
    }
    if (arr[0] == 1) {
        ui->maxstranlabel->setText("Оформление с наибольшим кол-вом страниц: " + QString::fromStdString(Dec1[arr[1]].B.type) + " "
                                 + QString::fromStdString(Dec1[arr[1]].name) + " " + QString::number(Dec1[arr[1]].pageCount) + " "
                                 + QString::fromStdString(Dec1[arr[1]].cover) + " " + QString::fromStdString(Dec1[arr[1]].image) + " "
                                 + QString::fromStdString(Dec1[arr[1]].language));
    }
    if (arr[0] == 2){
        ui->maxstranlabel->setText("Оформление с наибольшим кол-вом страниц: " + QString::fromStdString(Dec2[arr[1]].B.type) + " "
                                 + QString::fromStdString(Dec2[arr[1]].name) + " " + QString::number(Dec2[arr[1]].pageCount) + " "
                                 + QString::fromStdString(Dec2[arr[1]].cover) + " " + QString::fromStdString(Dec2[arr[1]].image) + " "
                                 + QString::fromStdString(Dec2[arr[1]].language));
    }
    if(!electisloaded && !izdanisloaded){
        ui->Textlabel->setText("Ошибка! Данные об оформлениях не были введены!");
    }
}

void MainWindow::on_raznyazpushButton_clicked()
{
    if(!electisloaded && !izdanisloaded){
        ui->Textlabel->setText("Ошибка! Данные об оформлениях не были введены!");
    }
    else{
        map<string, int>Language;
        for (int i = 0; i < n1; i++) {
            int temp = 0;
            for (auto element : Language) {
                if (Dec1[i].language == element.first) {
                    temp = 1;
                }
            }
            if (temp == 0) {
                Language[Dec1[i].language] = 1;
            }
            else {
                Language[Dec1[i].language]++;
            }
        }
        for (int i = 0; i < n2; i++) {
            int temp = 0;

            for (auto element : Language) {
                if (Dec2[i].language == element.first) {
                    temp = 1;
                }
            }
            if (temp == 0) {
                Language[Dec2[i].language] = 1;
            }
            else {
                Language[Dec2[i].language]++;
            }
        }
        string striiing = "Языки и их количество:";
        for (auto element : Language) {
            striiing += " " + element.first + ": " + std::to_string(element.second);
        }
        striiing += " .";
        ui->raznyazlabel->setText(QString::fromStdString(striiing));
    }
}

void MainWindow::on_illustpushButton_clicked()
{
    if(!electisloaded && !izdanisloaded){
        ui->Textlabel->setText("Ошибка! Данные об оформлениях не были введены!");
    }
    else{
        int arr[3] = { 0, 0, 0 }; int max = 0, ii;
        for (int i = 0; i < n1; i++) {
            if (Dec1[i].image == "Цветные") {
                arr[0]++;
            }
            else if (Dec1[i].image == "Ч/Б") {
                arr[1]++;
            }
            else {
                arr[2]++;
            }
        }
        for (int i = 0; i < n2; i++) {
            if (Dec2[i].image == "Цветные") {
                arr[0]++;
            }
            else if (Dec2[i].image == "Ч/Б") {
                arr[1]++;
            }
            else {
                arr[2]++;

            }
        }
        for (int i = 0; i < 3; i++) {
            if (arr[i] > max) {
                max = arr[i]; ii = i;
            }
        }

        if (ii == 0) {
            ui->illustlabel->setText("Больше всего оформлений с цветными иллюстрациями");
        }
        else if (ii == 1) {
            ui->illustlabel->setText("Больше всего оформлений с Ч/Б иллюстрациями");
        }
        else {
            ui->illustlabel->setText("Больше всего оформлений без иллюстраций");
        }
    }
}

