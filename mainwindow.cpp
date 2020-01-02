#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "workwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    workWindow *w = new workWindow;
    w->show();

    this->hide();
}



void MainWindow::on_pushButton_4_clicked()
{
   exit(1);
}
