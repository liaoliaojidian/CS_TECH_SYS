#include "addengineerwidget.h"
#include "ui_addengineerwidget.h"

AddEngineerWidget::AddEngineerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddEngineerWidget)
{
    ui->setupUi(this);
    setWindowTitle("添加工程师窗口");
    i_mOperModel=new operEngineer;
    //禁止窗体缩放
    setFixedSize(this->width(),this->height());
    ui->EmployeeNumEdit->setLenght(10);//员工号LineEidt样式设定
    ui->telephoneEdit->setLenght(11);//电话号码LineEdit样式设定
    ui->qqEdit->setLenght(10);//QQ号码LineEdit样式设定
    // ui->qqEdit->setF_bit(3);//测试浮点数
    ui->PositDescEdit->setReadOnly(true);//设置职位描述为只读
    connect(ui->SaveBt,&QPushButton::clicked,this,&AddEngineerWidget::saveTextSlot);
    connect(ui->clearBt,&QPushButton::clicked,this,&AddEngineerWidget::clearTextSlot);


    //ui->PositComboBox的数据--由数据库读入
    //ui->PositDescEdit的数据--有ui->PositComboBox动态确定，并有由数据库读入
    ui->PositComboBox->addItem("高级分析系统工程师");
    ui->PositComboBox->addItem("高级数据挖掘工程师");
    //Qt5的新connect语法中使用这两个信号时需要通过函数指针来指明使用的是重载中的哪一个
    //void(QComboBox::*fp)(QString)= &QComboBox::currentTextChanged;
    connect(ui->PositComboBox,&QComboBox::currentTextChanged,this,&AddEngineerWidget::ChangePositSlot);
}

AddEngineerWidget::~AddEngineerWidget()
{
    delete ui;
}

void AddEngineerWidget::saveTextSlot()
{
    //保存槽函数--用于掉用数据处理
    int iMsg=myMessageBox::wMessageOK_Cancel("是否保存？");
    if(iMsg==0)
    {

    }else if(iMsg==1){
        QMap<QString,QString> EngineerMap;
        EngineerMap.insert("#EmployeerNum",ui->EmployeeNumEdit->text());//工号
        EngineerMap.insert("#name",ui->nameEdit->text());//姓名
        EngineerMap.insert("#telephone",ui->telephoneEdit->text());//电话
        EngineerMap.insert("#qq",ui->qqEdit->text());//QQ
        EngineerMap.insert("#Email",ui->emailEdit->text()); //email
        EngineerMap.insert("#Posit",ui->PositComboBox->currentText());//职位
        //处理窗口文本--保存数据
        i_mOperModel->Add_Data(EngineerMap);
        clearTextSlot();
    }
}

void AddEngineerWidget::clearTextSlot()
{
    //清除槽函数--用于清理所有的内容
    ui->emailEdit->clear();
    ui->EmployeeNumEdit->clear();
    ui->nameEdit->clear();
    ui->qqEdit->clear();
    ui->PositDescEdit->clear();
    ui->telephoneEdit->clear();
    ui->PositComboBox->setCurrentIndex(0);
}

void AddEngineerWidget::ChangePositSlot(const QString m_str)
{
    //职位部件ui->PositComboBox选项变更后的槽函数

    //获取--PositComboBox的当前选项
    //读取数据库中职位描述信息，并设置部件PositDescEdit
    QString desc=i_mOperModel->Selectpositdesc_Data(m_str);

    ui->PositDescEdit->setPlainText(desc);

}
