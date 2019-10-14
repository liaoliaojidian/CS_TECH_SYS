#include "mymainwindow.h"
#include "ui_mymainwindow.h"

myMainWindow::myMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myMainWindow)
{
    ui->setupUi(this);
    //窗口大小设置
    this->setWindowFlag(Qt::Window);
    this->showMaximized();
    this->setWindowTitle(QString("技术支持管理系统"));

    //状态栏设置--开始
    statusLable=new QLabel("当前系统时间");
    statusDateTimeLable=new QLabel("0000-00-00 00:00:00");
    ui->statusBar->addWidget(statusLable);
    ui->statusBar->addWidget(statusDateTimeLable);
    startTimer(1000);
    //状态栏设置--结束
    // /*以下关联 QActtion以及QPushButton*/
    connect(ui->openFileMenu,&QAction::triggered,this,&myMainWindow::OpenFileActSlot);
    connect(ui->ApplyAct,&QAction::triggered,this,&myMainWindow::ApplyActSlot);
    connect(ui->ApplyBt,&QPushButton::clicked,this,&myMainWindow::ApplyActSlot);
    connect(ui->CloseSysAct,&QAction::triggered,this,&myMainWindow::CloseSysActSlot);
    connect(ui->CustomerAct,&QAction::triggered,this,&myMainWindow::CustomerActSlot);
    connect(ui->CustomerBt,&QPushButton::clicked,this,&myMainWindow::CustomerActSlot);
    connect(ui->DealerAct,&QAction::triggered,this,&myMainWindow::DealerActSlot);
    connect(ui->DealerBt,&QPushButton::clicked,this,&myMainWindow::DealerActSlot);
    connect(ui->EngineerAct,&QAction::triggered,this,&myMainWindow::EngineerActSlot);
    connect(ui->EngineerBt,&QPushButton::clicked,this,&myMainWindow::EngineerActSlot);
    connect(ui->ExampleAct,&QAction::triggered,this,&myMainWindow::ExampleActSlot);
    connect(ui->ExampleBt,&QPushButton::clicked,this,&myMainWindow::ExampleActSlot);
    connect(ui->OperHelpAct,&QAction::triggered,this,&myMainWindow::OperHelpActSlot);
    connect(ui->Q_A_Act,&QAction::triggered,this,&myMainWindow::Q_A_ActSlot);
    connect(ui->ResourceAct,&QAction::triggered,this,&myMainWindow::ResourceActSlot);
    connect(ui->ResourceBt,&QPushButton::clicked,this,&myMainWindow::ResourceActSlot);
    connect(ui->WebsiteAct,&QAction::triggered,this,&myMainWindow::WebsiteActSlot);
}

myMainWindow::~myMainWindow()
{
    delete ui;
}
//大小变更事件
void myMainWindow::resizeEvent(QResizeEvent *event)
{
    QMainWindow::resizeEvent(event);

    mWidth=this->centralWidget()->width();
    mHeight=this->centralWidget()->height();
    ui->groupBox->setGeometry(mWidth/4,mHeight/4,mWidth/2,mHeight/2);
}
//定时器事件
void myMainWindow::timerEvent(QTimerEvent *event)
{
    QMainWindow::timerEvent(event);

    QDateTime iTime=QDateTime::currentDateTime();
    QString iStr=iTime.toString("yyyy-MM-dd hh:mm:ss");
    statusDateTimeLable->setText(iStr);

}

void myMainWindow::OpenFileActSlot()
{
    //用于打开文件
    QString filename=QFileDialog::getOpenFileName(this,"打开文档",
                                                  QDir::currentPath(),
                                                  "Document files(*.doc*.rtf);;All file(*.*)");
    if(!filename.isNull())//用户取消了选择
    {
        //处理文件--调用默认程序打开对应文件
        QString execString;
        execString.append("explorer ");//windows资源管理器
        //将filename中的单斜杠换成双斜杠
        filename.replace('/',QString("\\"));
        execString.append(filename);
        QProcess::execute(execString);

    }else
    {
        //myMessageBox::wMessageOK_information("你已经取消文档操作");
    }

    return;

}

void myMainWindow::CloseSysActSlot()
{
    //用于关闭系统
    int ret=myMessageBox::wMessageOK_Cancel("是否退出系统");
    if(ret==1)
    {
        this->close();
    }
    else if(ret==0)
    {

    }
//    QMessageBox::StandardButtons ibox=QMessageBox::warning(this,"系统警告","是否关闭系统",QMessageBox::Cancel|QMessageBox::Yes);
//    if(ibox==QMessageBox::Cancel)
//    {

//    }else if(ibox==QMessageBox::Yes)
//    {
//         this->close();
//    }
    return;
}
void myMainWindow::EngineerActSlot()
{
    OptionModel *i_model=new Engineer("工程师");
    i_model->show();
    //用于生成技术员录入--修改--删除--查询窗体
    return;
}

void myMainWindow::DealerActSlot()
{
    //用于生成经销商录入--修改--删除--查询窗体
    return;
}

void myMainWindow::ApplyActSlot()
{
    //用于生成申请单录入--修改--删除--查询窗体
    return;
}

void myMainWindow::TravelActSlot()
{
    //用于生成差旅单录入--修改--删除--查询窗体
    return;
}

void myMainWindow::CustomerActSlot()
{
    //用于生成客户群录入--修改--删除--查询窗体
    return;
}

void myMainWindow::ResourceActSlot()
{
    //用于生成资源库录入--修改--删除--查询窗体
    return;
}

void myMainWindow::OperHelpActSlot()
{
    //用于生成系统操作帮助文档窗体
    OperHelpWidget * operhelp=new OperHelpWidget;
    operhelp->show();
    return;
}

void myMainWindow::Q_A_ActSlot()
{
    //用于生成问答库录入--修改--删除--查询窗体
    return;
}

void myMainWindow::ExampleActSlot()
{
    //用于生成案例库录入--修改--删除--查询窗体
    return;
}

void myMainWindow::WebsiteActSlot()
{
    //用于连接官网
    QDesktopServices::openUrl(QUrl("http://www.censtar.com"));
    return;
}

