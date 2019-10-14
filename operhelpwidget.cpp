#include "operhelpwidget.h"
#include "ui_operhelpwidget.h"

OperHelpWidget::OperHelpWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OperHelpWidget)
{
    ui->setupUi(this);
    setWindowTitle("系统操作帮助");
    ui->textEdit->clear();
    ui->textEdit->setPlainText(ReadOperHelpFile());
    ui->textEdit->setReadOnly(true);
}
OperHelpWidget::~OperHelpWidget()
{
    delete ui;
}

QString OperHelpWidget::ReadOperHelpFile()
{
    QString displayString;
    QFile file(":/File/File/operhelp.txt");
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        myMessageBox::wMessageOK_Error("操作文档打开失败");
        return QString("文档可能不在错误!");
    }
    QTextStream mReadFile(&file);
    QString line=mReadFile.readLine();
    while(!line.isNull())
    {
        line=mReadFile.readLine();
        displayString.append("\n");
        displayString.append(line);
    }
    return displayString;
}
