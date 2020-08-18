#ifndef CLIENTE_DIALOG_H
#define CLIENTE_DIALOG_H

#include <QDialog>

namespace Ui {
class Cliente_Dialog;
}

class Cliente_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Cliente_Dialog(QWidget *parent = nullptr);
    ~Cliente_Dialog();

private:
    Ui::Cliente_Dialog *ui;
};

#endif // CLIENTE_DIALOG_H
