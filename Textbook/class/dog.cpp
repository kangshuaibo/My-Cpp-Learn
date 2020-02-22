#include <iostream>
using namespace std;
class Dog //定义一个狗类
{
  private:
    int age;        //定义变量 狗有名字 有年龄
    char name[10];
  public:
    Dog();            //定义方法
    void setAge(int age);
    int Age();
};




//类外定义方法的具体实现
Dog::Dog()
{
    //什么也不做
}

void Dog::setAge(int age)// 设置年龄
{
  this->age=age;
}

int Dog::Age()  //查询年龄
{
  return age;
}





int main()
{
  Dog dog;
  cout<<"Age="<<dog.Age()<<endl;

  Dog *dog1=new Dog();
  dog1->setAge(3);
  cout<<"Age="<<dog1->Age()<<endl;
  
return 0;
}
