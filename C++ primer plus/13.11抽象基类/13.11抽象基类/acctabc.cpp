//
//  acctabc.cpp
//  13.11抽象基类
//
//  Created by 张耘博 on 2020/4/6.
//  Copyright © 2020 张耘博. All rights reserved.
//

#include "acctabc.hpp"
#include <iostream>

using std::cout;
using std::ios_base;
using std::endl;
using std::string;

//抽象基类的方法定义
AcctABC::AcctABC(const string & s, long an , double bal)
{
    fullName = s;
    acctNum = an;
    balance = bal;
}

void AcctABC::Deposit(double amt)   //存款
{
    if(amt < 0)
        cout << "不能是负数;"
        << "存款被取消,/n";
    else
        balance += amt;
}

void AcctABC::Withdraw(double amt)  //取款
{
    balance -= amt;
}

//保护方法
AcctABC::Formatting AcctABC::SetFormat() const //返回结构 函数名
{
    Formatting f;
    f.flag = cout.setf(ios_base::fixed, ios_base:: floatfield);
    f.pr = cout.precision(2);
    return f;
}

void AcctABC::Restore(Formatting & f) const
{
    cout.setf(f.flag, ios_base::floatfield);
    cout.precision(f.pr);
}







//Brass的方法
void Brass::Withdraw(double amt)
{
    if (amt < 0)
        cout << "取款必须是正数," <<"取款取消了\n";
    else if (amt <= Balance())
        AcctABC::Withdraw(amt);
    else
        cout << "取款数" << amt <<"超出了你的结余"  << "取款被取消;
}

void Brass::ViewAcct() const
{
    Formatting f = SetFormat();
    cout << "Brass客户:" << FullName() << endl;
    cout << "账户号码:" << AcctNum() << endl;
    cout << "账户结余: $" << Balance() <<endl;
    Restore(f);
}





//BrassPlus的方法
BrassPlus::BrassPlus(const std::string & s, long an ,double bal, double ml, double r) : AcctABC(s,an,bal)
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

BrassPlus::BrassPlus(const Brass & ba, double m1, double r):AcctABC(ba)
{
    maxLoan = m1;
    owesBank = 0.0;
    rate = r;
}

void BrassPlus::ViewAcct() const
{
    Formatting f = SetFormat();
    
    cout << "BrassPlus Client:" << FullName() << endl;
    cout << "账户号码:" <<AcctNum() <<endl;
    cout << "Balance: $" << Balance() << endl;
    cout << "Maximum loan: $" << maxLoan << endl;
    cout << "Owed to bank: $" <<owesBank << endl;
    cout.precision(3);
    cout << "Loan Rate:" << 100 * rate << "%\n";
    
    Restore(f);
}

void BrassPlus::Withdraw(double amt)
{
    Formatting f = SetFormat();
    
    double bal = Balance();
    if (amt <= bal)
        AcctABC::Withdraw(amt);
    else if( amt <= bal + maxLoan - owesBank)
    {
        double advance = amt-bal;
        owesBank += advance * (1.0 + rate);
        cout << "Bank advance: $" << advance << endl;
        cout << "Finance charge: $" << advance * rate << endl;
        Deposit(advance);
        AcctABC::Withdraw(amt);
    }
    else
        cout << "信用超出,交易取消.\n";
    Restore(f);
}

