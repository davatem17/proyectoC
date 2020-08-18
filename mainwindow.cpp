#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cliente_dialog.h"
#include "inventario_dialog.h"
#include "factura_dialog.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , mBaseDatos("proyecto1factura",
                 "root",
                 "12345678",
                 "localhost",
                 3306)
{
    ui->setupUi(this);
    QString mensajeError;
    if (!mBaseDatos.abreConexion(mensajeError)){
        QMessageBox::critical(this,tr("Error"), mensajeError);
        close();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btcliete_clicked()
{
    Cliente_Dialog d(this);
    d.exec();
}

void MainWindow::on_btfactura_clicked()
{
    Factura_Dialog d(this);
    d.exec();
}

void MainWindow::on_btinventario_clicked()
{
    Inventario_Dialog d(this);
    d.exec();
}
