#include <iostream>
using namespace std;

int max(int x,int y) //比较大小的函数
{
  int z;
  if(x>y)
    z=x;
  else
    z=y;
  return z;
}

int main()
{
  int a,b,m;
  cin>>a>>b;
  m=max(a,b); //函数调用
  cout<<"max="<<m<<"\n"; //输出大者
  return 0;
}
