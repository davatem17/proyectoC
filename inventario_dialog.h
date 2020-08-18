#ifndef INVENTARIO_DIALOG_H
#define INVENTARIO_DIALOG_H

#include <QDialog>

namespace Ui {
class Inventario_Dialog;
}

class Inventario_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Inventario_Dialog(QWidget *parent = nullptr);
    ~Inventario_Dialog();

private:
    Ui::Inventario_Dialog *ui;
};

#endif // INVENTARIO_DIALOG_H
