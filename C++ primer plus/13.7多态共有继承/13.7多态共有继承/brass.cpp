//
//  brass.cpp
//  13.7多态共有继承
//
//  Created by 张耘博 on 2020/3/31.
//  Copyright © 2020 张耘博. All rights reserved.
//

#include "brass.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

//一些格式
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f, precis p);

//Brass methods
Brass::Brass(const string &s, long an, double bal)
{//构造函数初始化
    fullName = s;
    acctNum = an;
    balance = bal;
}

void Brass::Deposit(double amt)
{//存款
    if(amt<0)
        cout <<"不能存负数,存款被取消\n";
    else
        balance += amt;
}

void Brass::Withdraw(double amt)
{
    //set ###.##
    format initialState = setFormat();
    precis prec = cout.precision(2);
    
    if(amt<0)
        cout << "取款数不能是负数\n";
    else if (amt <= balance)
        balance -= amt;
    else
        cout << "取款金额:"<< amt <<"超出了当前结余,取款被取消了\n";
    restore(initialState,prec);
}

double Brass::Balance() const   //结余
{
    return balance;
}

void Brass::ViewAcct() const
{
    //set ###.##format
    format initialState = setFormat();
    precis prec = cout.precision(2);
    
    cout << "客户:" << fullName <<endl;
    cout << "账户号码" << acctNum << endl;
    cout << "账户结余: ¥" << balance << endl;
    restore(initialState,prec); //恢复原来啊格式
}




//BrassPlus Methods
BrassPlus::BrassPlus(const string & s, long an, double bal, double ml, double r) : Brass(s,an,bal)  //列表初始化最直接用基类
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

BrassPlus::BrassPlus(const Brass & ba, double ml, double r) : Brass(ba) //使用隐式复制构造函数
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

//重新定义 ViewAcct()
void BrassPlus::ViewAcct() const
{
    //set ###.##format
    format initialState = setFormat();
    precis prec = cout.precision(2);
    
    Brass::ViewAcct();
    cout << "透支上限: ¥" << maxLoan << endl;
    cout << "当前透支总额度 :¥" << owesBank <<endl;
    cout.precision(3);
    cout << "贷款利率:" << 100 * rate <<"%\n";
    restore(initialState,prec);
}

//重新定义 Withdraw()
void BrassPlus::Withdraw(double amt)    //用信用额度放贷
{
    //set ###.##format
    format initialState = setFormat();
    precis prec = cout.precision(2);
    
    double bal = Balance();
    if (amt <= bal)  //取款比结余小 可以取款
        Brass::Withdraw(amt);
    else if (amt <= bal + maxLoan - owesBank)// 超过结余但没超过已经用了的额度
    {
        double advance = amt - bal;//借500卡里有200余,只要再贷款300
        owesBank += advance * (1.0 + rate);//当前透支了总额度 向银行贷款的钱加上手续费
        cout << "银行预付:¥" << advance <<endl;
        cout << "财务费用:" << advance * rate << endl;
        Deposit(advance); //存款 把贷的款存到账户 结余增加了 从账户结余取款
        Brass::Withdraw(amt); //取款
    }
    else
        cout << "信用额度超过,交易取消\n";
    restore(initialState, prec);
}



format setFormat()
{
    return cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
}

void restore(format f, precis p)
{
    cout.setf(f, std::ios_base::floatfield);
    cout.precision(p);
}
