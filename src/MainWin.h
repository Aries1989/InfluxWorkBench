#ifndef MAINWIN_H
#define MAINWIN_H

#include <QMainWindow>

class ConnMgrDlg;

namespace Ui {
class MainWin;
}

class MainWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWin(QWidget *parent = 0);
    ~MainWin();

private:
	void InitConnections();

private slots:
	void sltExit();
	void sltConnManage();

private:
    Ui::MainWin *ui;
	ConnMgrDlg* m_pConnMgrDlg;
};

#endif // MAINWIN_H
