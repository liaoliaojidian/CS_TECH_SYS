#include "mylistviewdelegate.h"

myListViewDelegate::myListViewDelegate(QWidget *parent):
    QStyledItemDelegate(parent)

{

}

myListViewDelegate::~myListViewDelegate()
{

}

void myListViewDelegate::paint(QPainter *painter,
                               const QStyleOptionViewItem &option,
                               const QModelIndex &index) const
{



 return;
}

bool myListViewDelegate::editorEvent(QEvent *event,
                                     QAbstractItemModel *model,
                                     const QStyleOptionViewItem &option,
                                     const QModelIndex &index)
{

return true;
}
