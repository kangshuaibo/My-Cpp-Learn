#include <iostream>
using namespace std;
int main()
{
  char c1,c2;
  c1='a';
  c2='b';
  c1=c1-32; //转换成大写的A
  c2=c2-32;
  cout<<c1<<' '<<c2<<endl;
  return 0;
}
