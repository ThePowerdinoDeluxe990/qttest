
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

double num1,num2,result;

void MainWindow::on_suma_clicked()
{
   num1= ui->num0->text().toDouble();
   num2= ui->num1->text().toDouble();
   result = num1+num2;

   ui->num1_2->setText(QString::number(result));

}
void MainWindow::on_resta_clicked()
{
   num1= ui->num0->text().toDouble();
   num2= ui->num1->text().toDouble();
   result = num1-num2;

   ui->num1_2->setText(QString::number(result));
}


void MainWindow::on_multiplicacion_clicked()
{
   num1= ui->num0->text().toDouble();
   num2= ui->num1->text().toDouble();
   result = num1*num2;

   ui->num1_2->setText(QString::number(result));
}


void MainWindow::on_division_clicked()
{
   num1= ui->num0->text().toDouble();
   num2= ui->num1->text().toDouble();
   result = num1/num2;

   ui->num1_2->setText(QString::number(result));
}


void MainWindow::on_pushButton_clicked()
{
   QMessageBox Msgbox;
 Msgbox.setText("Hecho Por ThePowerdinoDeluxe990             ");

   Msgbox.exec();
}

