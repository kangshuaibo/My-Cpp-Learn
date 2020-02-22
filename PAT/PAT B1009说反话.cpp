//给定一句英语，将句中所有单词颠倒顺序输出
//思路：用gets()函数读取一整行，以空格划分存到二维数组中，最后按逆序输出单词
#include <cstdio>
#include <cstring>
int main()
{
  char str[90];//存放输入的字符
  gets(str);  //输入包括空格的一转字符

  int len = strlen(str),r = 0, h=0; //r为行，h为列
  char ans[90][90]; //ans[0]~ans[r]存放单词

  for(int i =0;i<len; i++)
  {
    if(str[i] != ' ') //如果不是空格，则存放值至ans[r][h],并令h++
    {
      ans[r][h++] = str[i];
    }
    else  //如果是空格，说明一个单词结束，行r增加11，列h恢复至0
    {
      ans[r][h] = '\0'; //末尾是结束符\0
      r++;
      h = 0;
    }
  }

  for(int i = r ; i >= 0; i--)  //倒着输出单词
  {
    printf("%s",ans[i]);
      if(i>0)
        printf(" ");
  }

  return 0;
}
