#ifndef MYNUMBERLINEEDIT_H
#define MYNUMBERLINEEDIT_H
/*自定义数字LineEdit编辑器
 * 可以设定
1.数值长度
2.整数--浮点数限定
 *样式风格
*/
#include <QLineEdit>
#include <QRegExp>//正则表达式
#include <QValidator>//验证器

class myNumberLineEdit:public QLineEdit
{
public:
    explicit myNumberLineEdit(QWidget *parent = 0);
    ~myNumberLineEdit();
    void setLenght(int value);//设置数据长度
    void setInt_Flag(bool value);//设置为整数
     //设置为浮点数 小数点后几位
    void setF_bit(int value);
private:
    int Lenght=10;//长度
    bool int_Flag=true;//是否为整型 true整型，false浮点
    int f_bit=2;//小数点保留位数， 默认保留两位小数
    void mUpdate();//更新属性

};

#endif // MYNUMBERLINEEDIT_H
