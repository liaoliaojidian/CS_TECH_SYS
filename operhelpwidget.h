#ifndef OPERHELPWIDGET_H
#define OPERHELPWIDGET_H

#include <QWidget>
#include <QFile>
#include "mymessagebox.h"
#include <QTextStream>
namespace Ui {
class OperHelpWidget;
}

class OperHelpWidget : public QWidget
{
    Q_OBJECT

public:
    explicit OperHelpWidget(QWidget *parent = 0);
    ~OperHelpWidget();
    QString ReadOperHelpFile();
private:
    Ui::OperHelpWidget *ui;
};

#endif // OPERHELPWIDGET_H
