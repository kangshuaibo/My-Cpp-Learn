//求两个日期之间的天数，如果两个日期是连续的，他们之间的天数为2天
//思路：令日期不断加一，直到天数等于第二个日期为止。
#include <cstdio>
int month[13][2] = { {0,0},
                    {31,31},{28,29},{31,31},{30,30},{31,31},{30,30},
                    {31,31},{31,31},{30,30},{31,31},{30,30},{31,31}
                   }; //二维数组表示平润年 数组第二位0为平年，1为闰年
//判断是否为闰年
bool isLeap(int year)
{
  return (
    ;year % 4 == 0 && year % 100 != 0 || (year % 400 ==0) );
}

int main()
{
  int time1,y1,m1,d1;
  int time2,y2,m2,d2;
  while(scanf("%d%d",&time1,&time2) != EOF)
  { //第一个日期晚，就交换
    if(time1 > time2)
    {
      int temp;
      temp = time1;
      time1 = time2;
      time2 = temp;
    }
    //把输入的日期分解为独立的
    y1 = time1 / 10000, m1 = time1%10000/100, d1 = time1 % 100;
    y2 = time2 / 10000, m2 = time2%10000/100, d2 = time2 % 100;

    int ans = 1;  //记录结果的累加变量
    while(y1 < y2 || m1 < m2 || d1 < d2)
    {//第一个日期没有到达第二个日期 就循环
      d1++;
      if(d1 == month[m1][isLeap(y1)] + 1)
      {// 满当月天数 日期变为下月一号
        m1++;
        d1 = 1;
      }
      if(m1 == 13)
      {//月份满了12个月 日期变为下个年一月
        y1++;
        m1 = 1;
      }
      ans++;
    }//while内

    printf("%d\n",ans);
  }//while->scanf

 return 0;
}
