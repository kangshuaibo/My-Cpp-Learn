#include"stdio.h"

struct S{

    double p_A[2];
    double p_B[2];
    double p_C[2];
    double p_D[2];
};

double r=0.9;
double PnMultiplyJn;
double PnMultiplyJn_r;
double S1_A_PnMultiplyJn(double p_A[2],double j_n[5]);
double S1_B_PnMultiplyJn(double p_B[2],double j_n[5]);
double S1_C_PnMultiplyJn(double p_C[2],double j_n[5]);
double S1_D_PnMultiplyJn(double p_D[2],double j_n[5]);

double S2_A_PnMultiplyJn(double p_A[2],double j_n[5]);
double S2_B_PnMultiplyJn(double p_B[2],double j_n[5]);
double S2_C_PnMultiplyJn(double p_C[2],double j_n[5]);
double S2_D_PnMultiplyJn(double p_D[2],double j_n[5]);

double S3_A_PnMultiplyJn(double p_A[2],double j_n[5]);
double S3_B_PnMultiplyJn(double p_B[2],double j_n[5]);
double S3_C_PnMultiplyJn(double p_C[2],double j_n[5]);
double S3_D_PnMultiplyJn(double p_D[2],double j_n[5]);

double S4_A_PnMultiplyJn(double p_A[2],double j_n[5]);
double S4_B_PnMultiplyJn(double p_B[2],double j_n[5]);
double S4_C_PnMultiplyJn(double p_C[2],double j_n[5]);
double S4_D_PnMultiplyJn(double p_D[2],double j_n[5]);

double S5_A_PnMultiplyJn(double p_A[4],double j_n[5]);
double S5_B_PnMultiplyJn(double p_B[4],double j_n[5]);
double S5_C_PnMultiplyJn(double p_C[4],double j_n[5]);
double S5_D_PnMultiplyJn(double p_D[4],double j_n[5]);
//选取ABCD中最大的
double q_max(double x,double y,double z,double h)
{
    x=x>y?x:y;
    x=x>z?x:z;
    x=x>h?x:h;
    return x;
}



//函数 计算S1的每条路径ABCD值 函数传递jn某一行数组的值
double S1_A_PnMultiplyJn(double p_A[2],double j_n[5])  //计算A走的路径 返回一个值
{
    PnMultiplyJn=p_A[0]*j_n[0]+p_A[1]*j_n[1];  //所有的p*jn和
    PnMultiplyJn_r=PnMultiplyJn*r;
    return PnMultiplyJn_r;
}
double S1_B_PnMultiplyJn(double p_B[2],double j_n[5])//计算B走的路径返回一个值
{
    PnMultiplyJn=p_B[0]*j_n[2];
    PnMultiplyJn_r=PnMultiplyJn*r;
    return PnMultiplyJn_r;
}
double S1_C_PnMultiplyJn(double p_C[2],double j_n[5])//计算B走的路径返回一个值
{
    PnMultiplyJn=p_C[0]*j_n[0];
    PnMultiplyJn_r=PnMultiplyJn*r;
    return PnMultiplyJn_r;
}
double S1_D_PnMultiplyJn(double p_D[2],double j_n[5])//计算B走的路径返回一个值
{
    PnMultiplyJn=p_D[0]*j_n[0]+p_D[1]*j_n[2];
    PnMultiplyJn_r=PnMultiplyJn*r;
    return PnMultiplyJn_r;
}



//函数 计算S2的每条路径ABCD值 函数传递jn某一行数组的值
double S2_A_PnMultiplyJn(double p_A[2],double j_n[5])  //计算A走的路径 返回一个值
{
    PnMultiplyJn=p_A[0]*j_n[0]+p_A[1]*j_n[3];  //所有的p*jn和
    PnMultiplyJn_r=PnMultiplyJn*r;
    return PnMultiplyJn_r;
}
double S2_B_PnMultiplyJn(double p_B[2],double j_n[5])//计算B走的路径返回一个值
{
    PnMultiplyJn=p_B[0]*j_n[1]+p_B[1]*j_n[3];
    PnMultiplyJn_r=PnMultiplyJn*r;
    return PnMultiplyJn_r;
}
double S2_C_PnMultiplyJn(double p_C[2],double j_n[5])//计算B走的路径返回一个值
{
    PnMultiplyJn=p_C[0]*j_n[2]+p_C[1]*j_n[3];
    PnMultiplyJn_r=PnMultiplyJn*r;
    return PnMultiplyJn_r;
}
double S2_D_PnMultiplyJn(double p_D[2],double j_n[5])//计算B走的路径返回一个值
{
    PnMultiplyJn=p_D[0]*j_n[0]+p_D[1]*j_n[1];
    PnMultiplyJn_r=PnMultiplyJn*r;
    return PnMultiplyJn_r;
}



//函数 计算S3的每条路径ABCD值 函数传递jn某一行数组的值
double S3_A_PnMultiplyJn(double p_A[2],double j_n[5])  //计算A走的路径 返回一个值
{
    PnMultiplyJn=p_A[0]*j_n[1]+p_A[1]*j_n[2];  //所有的p*jn和
    PnMultiplyJn_r=PnMultiplyJn*r;
    return PnMultiplyJn_r;
}
double S3_B_PnMultiplyJn(double p_B[2],double j_n[5])//计算B走的路径返回一个值
{
    PnMultiplyJn=p_B[0]*j_n[1]+p_B[1]*j_n[2];
    PnMultiplyJn_r=PnMultiplyJn*r;
    return PnMultiplyJn_r;
}
double S3_C_PnMultiplyJn(double p_C[2],double j_n[5])//计算B走的路径返回一个值
{
    PnMultiplyJn=p_C[0]*j_n[2]+p_C[1]*j_n[3];
    PnMultiplyJn_r=PnMultiplyJn*r;
    return PnMultiplyJn_r;
}
double S3_D_PnMultiplyJn(double p_D[2],double j_n[5])//计算B走的路径返回一个值
{
    PnMultiplyJn=p_D[0]*j_n[0]+p_D[1]*j_n[2];
    PnMultiplyJn_r=PnMultiplyJn*r;
    return PnMultiplyJn_r;
}


//函数 计算S4的每条路径ABCD值 函数传递jn某一行数组的值
double S4_A_PnMultiplyJn(double p_A[4],double j_n[5])  //计算A走的路径 返回一个值
{
    PnMultiplyJn=p_A[0]*j_n[3]+p_A[1]*j_n[2];  //所有的p*jn和
    PnMultiplyJn_r=PnMultiplyJn*r;
    return PnMultiplyJn_r;
}
double S4_B_PnMultiplyJn(double p_B[4],double j_n[5])//计算B走的路径返回一个值
{
    PnMultiplyJn=p_B[0]*j_n[1]+p_B[1]*j_n[3];
    PnMultiplyJn_r=PnMultiplyJn*r;
    return PnMultiplyJn_r;
}
double S4_C_PnMultiplyJn(double p_C[4],double j_n[5])//计算B走的路径返回一个值
{
    PnMultiplyJn=p_C[0]*j_n[4]+p_C[1]*j_n[3];
    PnMultiplyJn_r=PnMultiplyJn*r;
    return PnMultiplyJn_r;
}
double S4_D_PnMultiplyJn(double p_D[4],double j_n[5])//计算B走的路径返回一个值
{
    PnMultiplyJn=p_D[0]*j_n[4]+p_D[1]*j_n[3];
    PnMultiplyJn_r=PnMultiplyJn*r;
    return PnMultiplyJn_r;
}

//函数 计算S5的每条路径ABCD值 函数传递jn某一行数组的值
double S5_A_PnMultiplyJn(double p_A[4],double j_n[5])  //计算A走的路径 返回一个值
{
    PnMultiplyJn=p_A[0]*j_n[4]+p_A[1]*j_n[2];  //所有的p*jn和
    PnMultiplyJn_r=PnMultiplyJn*r;
    return PnMultiplyJn_r;
}
double S5_B_PnMultiplyJn(double p_B[4],double j_n[5])//计算B走的路径返回一个值
{
    PnMultiplyJn=p_B[0]*j_n[3]+p_B[1]*j_n[4];
    PnMultiplyJn_r=PnMultiplyJn*r;
    return PnMultiplyJn_r;
}
double S5_C_PnMultiplyJn(double p_C[4],double j_n[5])//计算B走的路径返回一个值
{
    PnMultiplyJn=p_C[0]*j_n[3]+p_C[1]*j_n[4];
    PnMultiplyJn_r=PnMultiplyJn*r;
    return PnMultiplyJn_r;
}
double S5_D_PnMultiplyJn(double p_D[4],double j_n[5])//计算B走的路径返回一个值
{
    PnMultiplyJn=p_D[0]*j_n[0]+p_D[1]*j_n[4];
    PnMultiplyJn_r=PnMultiplyJn*r;
    return PnMultiplyJn_r;
}


//函数 传入计算后的ABCD 计算下一个jn的值
double compute_jn_1(double S1_A_Mult,double S1_B_Mult, double S1_C_Mult,double S1_D_Mult)
{
    double max;
    double jn_1;
    double jn;
    max=q_max(S1_A_Mult,S1_B_Mult,S1_C_Mult,S1_D_Mult);
    jn_1=jn+max*0.9;
    return jn_1;
}








int main()
{
    double r=0.9;
//初始化表格第一行
    double jn_table[6][5];

    jn_table[0][0]=1; //第0行 第一个元素
    jn_table[0][1]=-1;
    jn_table[0][2]=0;
    jn_table[0][3]=3;
    jn_table[0][4]=1;
    //除了第一行以外 每一行置0
    for(int i=1;i<7;i++)
        for(int j=0;j<5;j++)
            jn_table[i][j]=0;

    //声明对象
    struct S S1,S2,S3,S4,S5;

//S1的计算
    //初始化 S1的p值
    S1.p_A[0]=0.2;
    S1.p_A[1]=0.8;
    S1.p_B[0]=1;
    S1.p_B[1]=0;
    S1.p_C[0]=1;
    S1.p_C[1]=0;
    S1.p_D[0]=0.2;
    S1.p_D[1]=0.8;



//S2计算
    //初始化 S2的p值
    S2.p_A[0]=0.7;
    S2.p_A[1]=0.3;
    S2.p_B[0]=0.1;
    S2.p_B[1]=0.9;
    S2.p_C[0]=0.8;
    S2.p_D[1]=0.2;

//S3计算
    S3.p_A[0]=0.5;
    S3.p_A[1]=0.5;
    S3.p_B[0]=0.5;
    S3.p_B[1]=0.5;
    S3.p_C[0]=1;
    S3.p_C[1]=0;
    S3.p_D[0]=0.5;
    S3.p_D[1]=0.5;


//S4计算
    S4.p_A[0]=1;
    S4.p_A[1]=0;
    S4.p_B[0]=0.3;
    S4.p_B[1]=0.7;
    S4.p_C[0]=1;
    S4.p_C[1]=0;
    S4.p_D[0]=0.5;
    S4.p_D[1]=0.5;


//S5计算
    S5.p_A[0]=0.7;
    S5.p_A[1]=0.3;
    S5.p_B[0]=0.6;
    S5.p_B[1]=0.4;
    S5.p_C[0]=0.9;
    S5.p_C[1]=0.1;
    S5.p_D[0]=0.8;
    S5.p_D[1]=0.2;



    //计算每一行的每个S的值 并放到表中
    for(int i=0;i<7;i++)//是每一行
    {
        //调用函数 传递实参一行jn的值 计算S1的ABCD的值<--------------
        double S1_A_mult = S1_A_PnMultiplyJn(S1.p_A,jn_table[i]);  //将第0行传递进入函数
        double S1_B_mult = S1_B_PnMultiplyJn(S1.p_B,jn_table[i]);
        double S1_C_mult = S1_C_PnMultiplyJn(S1.p_C,jn_table[i]);
        double S1_D_mult = S1_D_PnMultiplyJn(S1.p_D,jn_table[i]);
        //调用函数 传递实参一行jn的值 计算S2的ABCD的值<--------------
        double S2_A_mult = S2_A_PnMultiplyJn(S2.p_A,jn_table[i]);  //将第0行传递进入函数
        double S2_B_mult = S2_B_PnMultiplyJn(S2.p_B,jn_table[i]);
        double S2_C_mult = S2_C_PnMultiplyJn(S2.p_C,jn_table[i]);
        double S2_D_mult = S2_D_PnMultiplyJn(S2.p_D,jn_table[i]);
        //调用函数 传递实参一行jn的值 计算S3的ABCD的值<--------------
        double S3_A_mult = S3_A_PnMultiplyJn(S3.p_A,jn_table[i]);  //将第0行传递进入函数
        double S3_B_mult = S3_B_PnMultiplyJn(S3.p_B,jn_table[i]);
        double S3_C_mult = S3_C_PnMultiplyJn(S3.p_C,jn_table[i]);
        double S3_D_mult = S3_D_PnMultiplyJn(S3.p_D,jn_table[i]);
        //调用函数 传递实参一行jn的值 计算S4的ABCD的值<--------------
        double S4_A_mult = S4_A_PnMultiplyJn(S4.p_A,jn_table[i]);  //将第0行传递进入函数
        double S4_B_mult = S4_B_PnMultiplyJn(S4.p_B,jn_table[i]);
        double S4_C_mult = S4_C_PnMultiplyJn(S4.p_C,jn_table[i]);
        double S4_D_mult = S4_D_PnMultiplyJn(S4.p_D,jn_table[i]);
        //调用函数 传递实参一行jn的值 计算S4的ABCD的值<--------------
        double S5_A_mult = S5_A_PnMultiplyJn(S5.p_A,jn_table[i]);  //将第0行传递进入函数
        double S5_B_mult = S5_B_PnMultiplyJn(S5.p_B,jn_table[i]);
        double S5_C_mult = S5_C_PnMultiplyJn(S5.p_C,jn_table[i]);
        double S5_D_mult = S5_D_PnMultiplyJn(S5.p_D,jn_table[i]);


        //调用函数 传递实参 计算并返回下一个jn的值<---------------
        double jn_1_1=compute_jn_1(S1_A_mult,S1_B_mult,S1_C_mult,S1_D_mult);
        double jn_1_2=compute_jn_1(S2_A_mult,S2_B_mult,S2_C_mult,S2_D_mult);
        double jn_1_3=compute_jn_1(S3_A_mult,S3_B_mult,S3_C_mult,S3_D_mult);
        double jn_1_4=compute_jn_1(S4_A_mult,S4_B_mult,S4_C_mult,S4_D_mult);
        double jn_1_5=compute_jn_1(S5_A_mult,S5_B_mult,S5_C_mult,S5_D_mult);

        jn_table[i+1][0]=jn_1_1;  //S1的jn 即第一行第一个
        jn_table[i+1][1]=jn_1_2;  //S1的jn 即第一行第一个
        jn_table[i+1][2]=jn_1_3;  //S1的jn 即第一行第一个
        jn_table[i+1][3]=jn_1_4;  //S1的jn 即第一行第一个
        jn_table[i+1][4]=jn_1_5;  //S1的jn 即第一行第一个
    }



//输出表格
    for(int i=0;i<7;i++)
        for(int j=0;j<5;j++)
            printf("%f",jn_table[i][j]);



    return 0;
}
