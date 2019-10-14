#include "OptionModel.h"
#include "ui_OptionModel.h"

//OptionModel::OptionModel(QWidget *parent) :
//    QWidget(parent),
//    ui(new Ui::OptionModel)
//{
//    ui->setupUi(this);
//}

OptionModel::OptionModel(QString mModelStr, QWidget *parent):QWidget(parent),
ui(new Ui::OptionModel)
{
    ui->setupUi(this);
    i_mModelStr=mModelStr;
    qDebug()<<"选项调入的内容是:"<<i_mModelStr;
    setWindowTitle("选择操作"+i_mModelStr);
    ui->addCmdLinkBt->setText("添加"+i_mModelStr);
    ui->selectCmdLinkBt->setText("查询"+i_mModelStr);
    connect(ui->addCmdLinkBt,&QCommandLinkButton::clicked,
            this,&OptionModel::createAddWidgetSlot);
    connect(ui->selectCmdLinkBt,&QCommandLinkButton::clicked,
            this,&OptionModel::createSelectWidgetSlot);
    connect(ui->addCmdLinkBt,&QCommandLinkButton::clicked,
            this,&OptionModel::close);
    connect(ui->selectCmdLinkBt,&QCommandLinkButton::clicked,
            this,&OptionModel::close);
}
OptionModel::~OptionModel()
{
    delete ui;
}
void OptionModel::createAddWidgetSlot()
{
    //创建添加窗体子类实现
    return;
}
void OptionModel::createSelectWidgetSlot()
{
    //创建查询窗体子类实现
    return;
}


