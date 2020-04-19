//
//  brass.hpp
//  13.7多态共有继承
//
//  Created by 张耘博 on 2020/3/31.
//  Copyright © 2020 张耘博. All rights reserved.
//

#ifndef brass_hpp
#define brass_hpp

#include <stdio.h>
#include <string>

class Brass
{
private:
    std::string fullName;   //客户姓名
    long acctNum;   //账号
    double balance; //当前结余
public:
    Brass(const std::string & s="Nullbody", long an = -1, double bal = 0.0);    //有三个参数 //创建账户
    void Deposit(double amt);   //存款
    virtual void  Withdraw(double amt); //虚方法   //取款
    double Balance() const;//结余
    virtual void ViewAcct() const;  //ViewAcct方法1   //显示账户信息
    virtual ~Brass() {} //虚析构函数 如果析构函数不是虚的,将调用指向类型的 析构函数
};                      //。        因为是虚的 这里不管指向什么类型都调用这个析构函数


class BrassPlus : public Brass
{
private:
    double maxLoan; //透支上限
    double rate;    //透支贷款利率
    double owesBank;    //当前的透支了总额
public:
    BrassPlus(const std::string & s = "Nullbody", long an = -1, double bal = 0.0, double m1 = 500, double r = 0.11125);
    BrassPlus(const Brass & ba, double m1 = 500, double r = 0.11125);   //Brass就包含了三个参数
    virtual void ViewAcct() const;  //ViewAcct方法2   //显示操作要有brassPlus的其他信息
    virtual void Withdraw(double amt);      //对于取款 必须考虑透支保护
    //新加入三个方法
    void ResetMax(double m) {maxLoan = m;}  //修改客户透支限额
    void ResetRate(double r) {rate = r;}    //修改客户的利率
    void ResetOwes() {owesBank = 0;}        //重置用户欠款
};
 //virtual 使用赋值的对象的方法
//没用virtual 使用调用的对象的方法

#endif /* brass_hpp */
