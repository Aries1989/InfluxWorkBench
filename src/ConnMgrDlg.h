#ifndef CONNMGRDLG_H
#define CONNMGRDLG_H

#include <QDialog>

namespace Ui {
class ConnMgrDlg;
}

class ConnMgrDlg : public QDialog
{
    Q_OBJECT

public:
    explicit ConnMgrDlg(QWidget *parent = 0);
    ~ConnMgrDlg();

private:
    Ui::ConnMgrDlg *ui;
};

#endif // CONNMGRDLG_H
