#include <iostream>
#include "namesp.h"

void other(void);
void another(void); //函数声明

int main(void)
{
  using debts::Debt;

  using debts::showDebt;
  Debt golf = {{"Benny","Goatsniff"},120.0};  //定义一个结构并赋值
  showDebt(golf);

  other();// 调用另一个结构赋值

  another();//调用一个结构赋值名字 并打印
  return 0;
}

void other(void)
{
  using std::cout;
  using std::endl;
  using namespace debts;
  Person dg = {"Doodles","Glister"};
  showPerson(dg);
  cout << endl;

  Debt zippy[3];  //定义一个结构数组
  int i;
  for(i=0;i<3;i++)
    getDebt(zippy[i]);  //输入数据
  for(i=0;i<3;i++)
    showDebt(zippy[i]);

  cout << "总和是" << sumDebts(zippy,3) << endl;
  return;
}

void another(void)
{
  using pers::Person;
  Person collector = {"Milo","Rightshift"};
  pers::showPerson(collector);
  std::cout << std::endl;
}
