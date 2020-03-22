//书写函数定义
#include <iostream>
#include "namesp.h"

namespace pers
{
  using std::cout;
  using std::cin;
   //书写函数定义
  void getPerson(Person & rp)  //输入姓名
  {
    cout << "Enter first name:";
    cin >> rp.fname;
    cout <<"Enter last name";
    cin >> rp.lname;
  }
  void showPerson(const Person & rp)
  {
    std::cout << rp.lname << "," <<rp.fname;
  }
}

namespace debts
{
  void getDebt(Debt & rd)
  {
    getPerson(rd.name);//输入姓名
    std::cout << "Enter debt:";
    std::cin >>rd.amount;
  }
  void showDebt(const Debt & rd)
  {
    showPerson(rd.name);
    std::cout << ": $" << rd.amount << std::endl;
  }
  double sumDebts(const Debt ar[],int n)  //输入Debt型的结构数组😄
  {
    double total = 0;
    for (int i = 0; i < n; i++)
      total += ar[i].amount;
      return total;
  }
}
