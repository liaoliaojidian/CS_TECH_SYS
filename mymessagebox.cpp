#include "mymessagebox.h"

myMessageBox::myMessageBox(QObject *parent) : QObject(parent)
{

}

int myMessageBox::wMessageOK_Cancel(QString info)
{
    QMessageBox iBox;
    iBox.setWindowTitle("提示信息");
    iBox.setWindowIcon(QIcon(":/myqrc/warning.png"));
    iBox.setText(info);
//    iBox.setStyleSheet("font: 14pt;color:rgb(220,0,0)");
    iBox.setIcon(QMessageBox::Warning);
    iBox.addButton(tr("取消"),QMessageBox::ActionRole);
    iBox.addButton(tr("确定"),QMessageBox::ActionRole);
    return iBox.exec();
}

void myMessageBox::wMessageOK_information(QString info)
{
    QMessageBox iBox;
    iBox.setWindowTitle("提示信息");
    iBox.setText(info);
     iBox.setWindowIcon(QIcon(":/myqrc/msginfo.png"));
//    iBox.setStyleSheet("font: 14pt;background-color:rgb(0,200,0)");
    iBox.setIcon(QMessageBox::Information);
    iBox.addButton(tr("确定"),QMessageBox::ActionRole);
    iBox.exec();
    return;
}

void myMessageBox::wMessageOK_Error(QString info)
{
    QMessageBox iBox;
    iBox.setWindowTitle("错误提示");
    iBox.setText(info);
     iBox.setWindowIcon(QIcon(":/myqrc/error.png"));
//    iBox.setStyleSheet("font: 14pt;background-color:rgb(220,0,0)");
    iBox.setIcon(QMessageBox::Critical);
    iBox.addButton(tr("确定"),QMessageBox::ActionRole);
    iBox.exec();
    return;

}
