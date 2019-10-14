#ifndef SELECTENGINEERWIDGET_H
#define SELECTENGINEERWIDGET_H

#include <QWidget>
#include "opermodel.h"
#include "operengineer.h"
namespace Ui {
class SelectEngineerWidget;
}

class SelectEngineerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SelectEngineerWidget(QWidget *parent = 0);
    ~SelectEngineerWidget();
private:
    Ui::SelectEngineerWidget *ui;
    operModel *i_mOperModel;//增删改查模型,有其子类实现特定的方法
public slots:
    //条件查询槽函数
    void queryConditionSlot();
};

#endif // SELECTENGINEERWIDGET_H
