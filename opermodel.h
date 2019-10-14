#ifndef OPERMODEL_H
#define OPERMODEL_H
#include<QString>
#include<QtSql/QSqlQuery>
#include<QMap>
//操作模型---每个事项有自己独有的操作方法
class operModel
{
public:
    operModel();
    ~operModel();
    //增删改查数据处理函数
    virtual void Add_Data(QMap<QString,QString> map);
    virtual void Del_Data(QString str);
    virtual void Select_Data(QString str);//查询结果是有返回值的
    virtual void Update_Data(QString str);
private:
//    QSqlQuery i_mSqlQuery;//没有指定相应的数据库

};

#endif // OPERMODEL_H
