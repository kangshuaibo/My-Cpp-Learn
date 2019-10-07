//输入一个数n（1<n<200）,然后输入n个数值各不相同的数，再输入一个值x，输出这个值在这个数组中的下标
#include <cstdio>
const int maxn = 210;
int a[maxn];  //存放n个数字
int main()
{ //输入流
  int n,x;
  printf("几个数字？\n");
  while(scanf("%d",&n) != EOF)  //一旦输入结束 scanf函数就返回 EOF
  { printf("输入这%d个数字\n",n);
    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);  //输入n个数字
    }
    printf("要查询的x？\n");
    scanf("%d",&x); //输入要查询的数字

    //查找 输出流
    int k;  //下标
    for(k=0;k<n;k++)
    {//遍历数组
      if(a[k] == x)
      {
        printf("数组下标为：\n");
        printf("%d\n",k );  //输出对应的下标
        break;  //退出查找
      }
    }
    if(k == n)  //如果没有找到
    {
      printf("-1\n"); //输出-1
    }
  }




  return 0;
}
