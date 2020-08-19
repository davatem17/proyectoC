#ifndef CLIENTE_DIALOG_H
#define CLIENTE_DIALOG_H

#include <QDialog>

namespace Ui {
class Cliente_Dialog;
}

class QSqlTableModel;

class Cliente_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Cliente_Dialog(QWidget *parent = nullptr);
    ~Cliente_Dialog();

private slots:
    void on_btnuevo_clicked();

    void on_bteliminar_clicked();

    void on_btactualizar_clicked();

private:
    Ui::Cliente_Dialog *ui;
    QSqlTableModel *mModel;
};

#endif // CLIENTE_DIALOG_H
