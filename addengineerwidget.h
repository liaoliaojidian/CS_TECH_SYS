#ifndef ADDENGINEERWIDGET_H
#define ADDENGINEERWIDGET_H

#include <QWidget>
#include "opermodel.h"
#include "operengineer.h"
#include "mymessagebox.h"
#include <QMap>
namespace Ui {
class AddEngineerWidget;
}

class AddEngineerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AddEngineerWidget(QWidget *parent = 0);
    ~AddEngineerWidget();

private:
    Ui::AddEngineerWidget *ui;
    operEngineer *i_mOperModel;//增删改查模型,有其子类实现特定的方法
public slots:
    //保存槽函数--用于掉用数据处理
    void saveTextSlot();
    //清除槽函数--用于清理所有的内容
    void clearTextSlot();
    //职位部件ui->PositComboBox选项变更后的槽函数
    void ChangePositSlot(const QString m_str);
};

#endif // ADDENGINEERWIDGET_H
