//命名空间文件
#include <string>

namespace pers  //人
{
  struct Person //人的姓名 结构
  {
    std::string fname;
    std::string lname;
  };
  void getPerson(Person &); //这是一个声明
  void showPerson(const Person &);
}

namespace debts //人名和金额
{
  using namespace pers;
  struct Debt
  {
    Person name;
    double amount;
  };
  void getDebt(Debt &);
  void showDebt(const Debt &);
  double sumDebts(const Debt ar[],int n);
}
