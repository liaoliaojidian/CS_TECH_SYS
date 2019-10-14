#ifndef ENGINEER_H
#define ENGINEER_H
//工程师类 继承选项模板
#include "optionmodel.h"
#include "addengineerwidget.h"
#include "selectengineerwidget.h"
class Engineer:public OptionModel
{
public:
    //Engineer();
    explicit Engineer(QString mModelStr,QWidget *parent = 0);
    ~Engineer();
public slots:
    //创建窗体函数
    virtual void createAddWidgetSlot();
    virtual void createSelectWidgetSlot();
};

#endif // ENGINEER_H
