#ifndef MYMESSAGEBOX_H
#define MYMESSAGEBOX_H
//自定义消息框
#include <QObject>
#include <QMessageBox>
#include <QIcon>
class myMessageBox : public QObject
{
    Q_OBJECT
public:
    explicit myMessageBox(QObject *parent = nullptr);
//    警告判断提示
    static int wMessageOK_Cancel(QString info);
//    正确回执信息
    static void wMessageOK_information(QString info);
//    错误回执信息
    static void wMessageOK_Error(QString info);

signals:

public slots:
};

#endif // MYMESSAGEBOX_H
