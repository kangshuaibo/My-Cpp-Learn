#include <iostream>
const int MAX = 5;
int main()
{
  using namespace std;
//get data;
  int golf[MAX];
  cout << "Please enter your golf scores. \n";
  cout << "You must enter " << MAX << "rounds. \n";
  int i;
  for (i = 0; i < MAX ;i++)//这里的i++ 与golf[i]连通 并不进入循环
  {
    cout  << "round #" << i + 1 << ":";
    while (!(cin >> golf[i])) //输入合法就存入数组,输入不合法返回false 进入循环处理不合法
    {
      cin.clear();  //reset input 因为输入违法了,必须重置输入,否则程序将拒绝继续读取输入
      while (cin.get() != '\n')   //删除这一行
        continue;   //get rid of bad input
      cout << "Please enter a number: "; //提示要输入数字.接下来跳到外层while看属否是违法输入

    }
  }
//calculate average
  double total = 0.0;
  for (i = 0;i < MAX; i++)
    total += golf[i];
//report resules
  cout << total/MAX << "= average score " << MAX << "rounds\n";
  return 0;
}
