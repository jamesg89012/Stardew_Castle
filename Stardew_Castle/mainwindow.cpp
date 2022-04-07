#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textEdit->setText("Many moons ago, Stardew Valley was a prosporous place for all.                     "
                       "This all changed when a wicked witch placed a curse upon the kingdom.                 "
                       "It changed the villagers and royal family into zombies!!                              ");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->textEdit->setText("You have woken up in this distant castle miles away from your home town.           "
                          "Your quest is to survive the night and escape!");


}


void MainWindow::on_textEdit_textChanged()
{

    on_pushButton_clicked();
    {
        ui->textEdit->setText("Please click a direction to go!");

    }
}


