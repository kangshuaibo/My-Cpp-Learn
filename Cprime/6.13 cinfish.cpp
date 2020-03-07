#include <iostream>
const int MAX = 5;
int main()
{
  using namespace std;
//get data
  double fish[MAX];
  cout<<"please enter the weights of your fish. \n";
  cout<<"You may enter up to " << MAX << " fish < q to terminate. \n";

  cout<<"fish #1:";
  int i = 0;
  while (i < MAX && cin >> fish[i]) //cin方法的函数调用 输入成功返回true 失败返回false:即输入的不是数字就退出
  {
    if(++i < MAX)
      cout << "fish #" << i + 1 << ":";
  }

//calculate average
  double total = 0.0;
  for (int j = 0;j<i;j++)
    total += fish[j];

//report results
  if (i==0)
    cout << "No fish\n";
  else
    cout << total/i << " = average weeight of" << i << "fish\n";

  cout << "Done. \n";
  return 0;
}
