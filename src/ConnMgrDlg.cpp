#include "ConnMgrDlg.h"
#include "ui_ConnMgrDlg.h"

ConnMgrDlg::ConnMgrDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConnMgrDlg)
{
    ui->setupUi(this);
}

ConnMgrDlg::~ConnMgrDlg()
{
    delete ui;
}
