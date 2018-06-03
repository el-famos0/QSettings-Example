#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    settings("config/config.ini", QSettings::IniFormat, this)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_rButton_clicked()
{
    ui->valLine->setText(settings.value(ui->adLine->text()).toString());
}

void MainWindow::on_sButton_clicked()
{
    settings.setValue(ui->adLine->text(), ui->valLine->text());
}
