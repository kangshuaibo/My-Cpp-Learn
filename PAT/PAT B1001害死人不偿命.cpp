//
// Created by 张耘博 on 2019/10/2.
//对任何一个正整数 n，如果它是偶数，那么把它砍掉一半；
// 如果它是奇数，那么把 (3n+1) 砍掉一半。
// 这样一直反复砍下去，最后一定在某一步得到 n=1

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
}