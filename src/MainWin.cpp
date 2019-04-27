#include "MainWin.h"
#include "ui_MainWin.h"
#include "ConnMgrDlg.h"

MainWin::MainWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWin)
{
    ui->setupUi(this);
	m_pConnMgrDlg = NULL;
	InitConnections();


}

MainWin::~MainWin()
{
    delete ui;
}

void MainWin::InitConnections()
{
	connect(ui->actExit, &QAction::triggered, this, &MainWin::sltExit);
	connect(ui->actManage, &QAction::triggered, this, &MainWin::sltConnManage);
}

void MainWin::sltExit()
{
	this->close();
}

void MainWin::sltConnManage()
{
	if (NULL == m_pConnMgrDlg)
	{
		m_pConnMgrDlg = new ConnMgrDlg(this);
	}
	m_pConnMgrDlg->exec();
}
