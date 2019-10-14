#ifndef MYLISTVIEWDELEGATE_H
#define MYLISTVIEWDELEGATE_H
#include <QStyledItemDelegate>
//这是自定义（委托）QStyledItemDelegate，用于工程师查询视图

class myListViewDelegate : public QStyledItemDelegate
{
public:
    myListViewDelegate(QWidget *parent);
    ~myListViewDelegate();
    //重写绘制函数
    virtual void paint(QPainter *painter,
                       const QStyleOptionViewItem &option,
                       const QModelIndex &index) const;
    //重写编辑函数
    virtual bool editorEvent(QEvent *event, QAbstractItemModel *model,
                             const QStyleOptionViewItem &option, const QModelIndex &index);


};

#endif // MYLISTVIEWDELEGATE_H
