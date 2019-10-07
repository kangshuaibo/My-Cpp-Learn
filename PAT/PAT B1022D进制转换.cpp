//P进制数=>十进制=>Q进制

/*1.P进制x=>十进制y
//十进制数d1 d2 d3 d4可以写成 d1*10^n-1 + d2*10^n-2 + ... + d^n-1*10 + dn
  P进制数a1 a2 a3 a4转成十进制  a1*P^n-1 + a2*P^n-2 + ... + a^n-1*P + an

int y=0,product = 1;  //product在循环中不断乘P，得到1、P、P^2、P^3...
while (x != 0)
{
  y = y + (x % 10) * product;   //x % 10是为了每次获取x的个位数
  x = x / 10; //去掉x的个位
  product = product * P;
}
*/




/*2.将十进制数y=>Q进制数z 结果存放于数组z
//除基取余法
int z[40],num = 0;  //数组存放Q进制数的每一位，num为位数
do{
  z[num++] = y%Q; //除基取余
  y = y/Q;  //取商
}while(y != 0);   //如果十进制数恰好为0 正好z[0]=0


*/


//题目：输出两个十进制数A、B的和的 D进制数
#include <cstdio>
int main()
{
  int a,b,d;
  scanf("%d%d%d",&a,&b,&d);
  int sum = a + b;

  int ans[31],num = 0;  //ans存放D进制的每一位
  do{ //进制转换
    ans[num++] = sum % d;
    sum /= d;
  }while (sum != 0);

  for(int i = num - 1; i >= 0 ; i--)
  {// 从高位到低位进行输出
    printf("%d",ans[i]);
  }




  return 0;
}
