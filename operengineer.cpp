#include "operengineer.h"
operEngineer::operEngineer()
{

}
void operEngineer::Add_Data(QMap<QString,QString> map)
{
    //查看将要输入的数据
    foreach(QString values,map)
        qDebug()<<"~~~~~"<<values;
    //    qDebug()<<"operEngineer::Add_Data"<<str;
    //---------i_mSqlQuery.exec(str);//执行数据库存储过程
    myMessageBox::wMessageOK_information("已经保存");
    return;
}
void operEngineer::Del_Data(QString str)
{
    qDebug()<<"operEngineer::Del_Data"<<str;
    //---------i_mSqlQuery.exec(str);//执行数据库存储过程
    return;
}
void operEngineer::Select_Data(QString str)
{
    qDebug()<<"operEngineer::Select_Data"<<str;
    //---------i_mSqlQuery.exec(str);//执行数据库存储过程
      return;
}
void operEngineer::Update_Data(QString str)
{
    qDebug()<<"operEngineer::Update_Data"<<str;
    //---------i_mSqlQuery.exec(str);//执行数据库存储过程
    return;
}

QString operEngineer::Selectpositdesc_Data(QString str)
{
    qDebug()<<"当前你的ComcoBox的文本内容是："<<str;
    //用于查询职位描述信息
    return QString(str);
}

