#include "cliente_dialog.h"
#include "ui_cliente_dialog.h"

Cliente_Dialog::Cliente_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cliente_Dialog)
{
    ui->setupUi(this);
}

Cliente_Dialog::~Cliente_Dialog()
{
    delete ui;
}
