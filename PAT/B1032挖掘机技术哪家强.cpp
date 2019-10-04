//参赛人数N不超过10^5 给出参赛者的学校编号和成绩 在第一行得出总分最高的学校编号和总分
#include <stdio.h>
const int maxn = 100010;
int school[maxn] = {0}; //先初始化一个数组 数组记录每个学校的总分
int main()
{
    int n,schID,score;
    scanf("%d",&n); //输入参赛人数
    for(int i=0;i < n; i++)
    {
      scanf("%d%d",&schID,&score);  //学校ID 分数
      school[schID] += score; //每输入一个分数 对应的学校schID的总分增加score
    }

    int k=1,MAX = -1; //最高总分学校ID以及总分
    for(int i=1;i<=n;i++)
    { //从所有学校选出总分最高的一个
        if(school[i]>MAX)
        {
          MAX = school[i];
          k = i;  //获取编号
        }
    }
    printf("%d %d\n",k,MAX);//输出最高ID和总分
    return 0;
}
