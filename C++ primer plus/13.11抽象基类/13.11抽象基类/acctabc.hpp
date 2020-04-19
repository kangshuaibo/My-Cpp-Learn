//
//  acctabc.hpp
//  13.11抽象基类
//
//  Created by 张耘博 on 2020/4/6.
//  Copyright © 2020 张耘博. All rights reserved.
//

#ifndef acctabc_hpp
#define acctabc_hpp
#include<iostream>
#include<cstring>

//抽象基类
class AcctABC
{
private:
    std::string fullName;
    long acctNum;
    double balance;
protected:  //派生类可以直接访问基类的保护成员
    struct Formatting
    {
        std::ios_base::fmtflags flag;
        std::streamsize pr;
    };
    const std::string & FullName() const {return fullName;}
    long AcctNum() const {return acctNum;}
    Formatting SetFormat() const; //定义一个函数 返回结构类型
    void Restore(Formatting & f) const;
public:
    AcctABC(const std::string & s =  "Nullbody", long an = - 1, double bal = 0.0);
    void Deposit(double amt);
    virtual void Withdraw(double amt) = 0;  //纯虚函数 标志为后面=0 抽象基类必有一个纯虚函数
    double Balance() const {return balance;};
    virtual void ViewAcct() const = 0;
    virtual ~AcctABC(){}
};








class Brass : public AcctABC   //继承自抽象基类
{
public:
    Brass(const std::string & s = "Nullbody", long an = -1, double bal = 0.0) : AcctABC(s,an,bal) {}//列表初始化
    virtual void Withdraw(double amt);
    virtual void ViewAcct() const;
    virtual ~Brass() {}
};







class BrassPlus : AcctABC   //继承自抽象基类

{
private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const std::string & s = "Nullbody", long an = -1,double bal = 0.0, double ml = 500, double r = 0.10);
    BrassPlus(const Brass & ba, double m1 = 500, double r = 0.1);
    virtual void ViewAcct() const;
    virtual void Withdraw(double amt);
    
    void ResstMax(double m) {maxLoan = m;}
    void ResetRate(double r) {rate = r;};
    void ResetOwes() {owesBank = 0;}
    
};

#endif /* acctabc_hpp */
