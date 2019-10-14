#include "engineer.h"


Engineer::Engineer(QString mModelStr, QWidget *parent):OptionModel(mModelStr,parent)
{

}
Engineer::~Engineer()
{

}
void Engineer::createAddWidgetSlot()
{
  AddEngineerWidget *mAddWidget=new AddEngineerWidget();
  mAddWidget->show();
  return;
}
void Engineer::createSelectWidgetSlot()
{
   SelectEngineerWidget *mSelectWidget=new SelectEngineerWidget();
   mSelectWidget->show();
   return;
}
