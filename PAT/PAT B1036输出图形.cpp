//一行给出边长N（3<N<20）和组成正方形边的某种字符C，间隔一个空格
#include<cstdio>
int main()
{
  int row,col;  //行、列
  char c;
  //printf("输入列数 和 要画的字符：\n");
  scanf("%d %c",&col,&c); //输入列数col和 要使用的字符
  //判断列数奇偶 根据列数取行数
  if(col % 2 == 1)
    row = col / 2 + 1;  //col列 为 奇数，向上取整数
  else
    row = col / 2; //col为偶数

  //输出第一行
  //printf("输出结果为：\n");
  for(int i=0;i<col;i++)
  {
    printf("%c",c); //输出col个字符
  }
  printf("\n");

  //第2 ～ row-1行
  for(int i = 2; i < row ;i++)
  {
    printf("%c",c); //每行的第一个a
    for(int j=0;j < col -2;j++)
    {
      printf(" ");  //每行col-2个空格
    }
    printf("%c\n",c); //每行的最后一个a
  }

  //第row行
  for(int i=0;i<col;i++)
  {
    printf("%c",c); //col个字符
  }
return 0;
}
