#ifndef OPERENGINEER_H
#define OPERENGINEER_H
//用于实现对工程师的增删改查方法
#include "opermodel.h"
#include <QDebug>
#include "mymessagebox.h"
#include <QMap>
class operEngineer:public operModel
{
public:
    operEngineer();
    virtual void Add_Data(QMap<QString, QString> map);
    virtual void Del_Data(QString str);
    virtual void Select_Data(QString str);
    virtual void Update_Data(QString str);
    QString Selectpositdesc_Data(QString str);//查询职位描述数据

};
#endif // OPERENGINEER_H
