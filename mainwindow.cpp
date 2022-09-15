#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QMessageBox::information(this, "test", "test one");
    QMessageBox::information(this, "test", "test one");
    QMessageBox::information(this, "test", "test one");
    QMessageBox::information(this, "test", "test one");
    QMessageBox::information(this, "test", "test one");
    QMessageBox::information(this, "test", "test one");


    int a;
}

MainWindow::~MainWindow()
{
    delete ui;
}

