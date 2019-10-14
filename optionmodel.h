#ifndef OptionModel_H
#define OptionModel_H
//增删改查模板窗口
#include <QWidget>
#include <QDebug>
#include "opermodel.h"
namespace Ui {
class OptionModel;
}

class OptionModel : public QWidget
{
    Q_OBJECT

public:
//    explicit OptionModel(QWidget *parent = 0);
    explicit OptionModel(QString mModelStr,QWidget *parent = 0);
    ~OptionModel();

private:
    Ui::OptionModel *ui;
    QString i_mModelStr;//模板字符串构造函数的名字

public slots:
    //创建窗体函数
    virtual void createAddWidgetSlot();
    virtual void createSelectWidgetSlot();
};

#endif // OptionModel_H
