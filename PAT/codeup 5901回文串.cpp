//读入一串字符，判断是否是 回文串；是就输出YES否则输出NO
//思路：对于字符串str从下标0开始前一半str[i]都等于str[len-1-i]
#include<cstdio>
#include<cstring>

const int maxn = 256;
//判断字符串str是否是“回文串”
bool judge(char str[])
{
  int len = strlen(str);  //字符串长度
  for(int i = 0; i < len/2; i++)  //i枚举字符串的前一半
  {
    if(str[i]!= str[len-1-i])
    { //如果对称位置不同
      return false; //不是“回文串”
    }
  }
  return true;
}

int main()
{
  char str[maxn];
  while(gets(str))  //输入字符串 空格结束
  {
    bool flag = judge(str); //调用函数 判断是否是“回文串”
    if(flag == true)
    {//回文串
        printf("YES\n");
    }
    else
    {//不是回文串
        printf("NO\n");
    }
  }
  return 0;
}
