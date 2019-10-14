#include "selectengineerwidget.h"
#include "ui_selectengineerwidget.h"

SelectEngineerWidget::SelectEngineerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectEngineerWidget)
{
    ui->setupUi(this);
    setWindowTitle("查询工程师窗口");
    i_mOperModel=new operEngineer;
    //初始化窗口状态
    ui->queryComboBox->setDisabled(true);
    ui->queryLineEdit->setEnabled(false);
    connect(ui->queryCheckBox,&QCheckBox::stateChanged,this,&SelectEngineerWidget::queryConditionSlot);

}
SelectEngineerWidget::~SelectEngineerWidget()
{
    delete ui;
}

void SelectEngineerWidget::queryConditionSlot()
{
    //条件查询槽函数
    if(ui->queryCheckBox->isChecked()==true)
    {
        qDebug()<<"解禁处理";
        ui->queryComboBox->setDisabled(false);
        ui->queryLineEdit->setEnabled(true);

    }else
    {
       qDebug()<<"禁止处理";
       ui->queryComboBox->setDisabled(true);
       ui->queryLineEdit->setEnabled(false);
    }
}
