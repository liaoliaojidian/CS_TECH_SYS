#include "mynumberlineedit.h"

myNumberLineEdit::myNumberLineEdit(QWidget *parent):QLineEdit(parent)
{
 mUpdate();//更新属性
}
myNumberLineEdit::~myNumberLineEdit()
{

}
void myNumberLineEdit::setLenght(int value)
{
    Lenght = value;
     mUpdate();//更新属性
     return;
}
void myNumberLineEdit::setInt_Flag(bool value)
{
    int_Flag = value;
    mUpdate();//更新属性
    return;
}
void myNumberLineEdit::setF_bit(int value)
{
    setInt_Flag(false);//设定为浮点数据
    f_bit = value;
    mUpdate();//更新属性
     return;
}

void myNumberLineEdit::mUpdate()
{
    //限定为数字
    QRegExp regx;
    //QString strReg=QString("0|[1-9][0-9]{0,%1}%2\\d{0,%3}$");
    if(int_Flag==false)//浮点数
    {
        regx.setPattern(QString("0|[1-9][0-9]{0,%1}%2\\d{0,%3}$")
                        .arg(Lenght-f_bit-2)
                        .arg("\\.")
                        .arg(f_bit)
                        );

    }else if(int_Flag==true)//整数
    {
        regx.setPattern(QString("0|[1-9]\\d{0,%1}$")
                        .arg(Lenght-1)
                        );

    }
    QValidator *validator = new QRegExpValidator(regx,this);
    this->setValidator(validator);

    return;
}
