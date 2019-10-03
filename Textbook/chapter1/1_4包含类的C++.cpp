#include <iostream>
using namespace std;
class Student
{
private:
  int num;
  int score;
public: //可以被本类中的成员调用 也可以被本类外的语句调用
  //设置参数
  void setdata()
  {
    cin>>num;
    cin>>score;
  }
  //输出沉寂和编号
  void display()
  {
    cout<<"num="<<num<<endl;
    cout<<"score="<<score<<endl;
  }
};

Student stud1,stud2;  //定义Student类的变量 称为对象
int main()
{
  stud1.setdata();
  stud2.setdata();

  stud1.display();
  stud2.display();
  return 0;
}
