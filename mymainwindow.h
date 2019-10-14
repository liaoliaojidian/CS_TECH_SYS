#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QDateTime>
#include <QTimer>
#include <QFileDialog>
#include <QProcess>
#include <QDesktopServices>
#include <QDebug>
#include "mymessagebox.h"
#include "operhelpwidget.h"
#include "optionmodel.h"
#include "engineer.h"
namespace Ui {
class myMainWindow;
}
class myMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit myMainWindow(QWidget *parent = 0);
    ~myMainWindow();
    void resizeEvent(QResizeEvent *event);
    void timerEvent(QTimerEvent *event);

private:
    Ui::myMainWindow *ui;
    int mWidth;
    int mHeight;
    QLabel *statusLable;
    QLabel *statusDateTimeLable;
public slots:
    /*以下槽函数关联 QActtion以及QPushButton*/
    void OpenFileActSlot();//打开文件
    void CloseSysActSlot();//关闭系统
    void EngineerActSlot();//技术员
    void DealerActSlot();//经销商
    void ApplyActSlot();//申请单
    void TravelActSlot();//差旅单
    void CustomerActSlot();//客户群
    void ResourceActSlot();//资源库
    void OperHelpActSlot();//帮助文档
    void Q_A_ActSlot();//问答库
    void ExampleActSlot();//案例库
    void WebsiteActSlot();//访问官网


};

#endif // MYMAINWINDOW_H
