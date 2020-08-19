#ifndef INVENTARIO_DIALOG_H
#define INVENTARIO_DIALOG_H

#include <QDialog>

namespace Ui {
class Inventario_Dialog;
}

class QSqlTableModel;

class Inventario_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Inventario_Dialog(QWidget *parent = nullptr);
    ~Inventario_Dialog();

private slots:
    void on_btNUEVO_clicked();

    void on_bteliminar_clicked();

    void on_btnactualizar_clicked();

private:
    Ui::Inventario_Dialog *ui;
    QSqlTableModel *mModel;
};

#endif // INVENTARIO_DIALOG_H
