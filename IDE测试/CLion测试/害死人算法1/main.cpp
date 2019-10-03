#include<stdio.h>
int main()
{
    int n,step = 0;
    scanf("%d",&n); //输入题目给出的n
    while(n!=1)     //循环判断输入的n 是否为1
    {
        if(n%2==0)
            n=n/2;
        else
            n=(3*n+1)/2;

        step++;
    }
    printf("%d\n",step);
    return 0;
    //输入3 得到5
}