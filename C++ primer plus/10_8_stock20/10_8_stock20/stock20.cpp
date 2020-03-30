//
//  stock20.cpp
//  10_8_stock20
//
//  Created by 张耘博 on 2020/3/24.
//  Copyright © 2020 张耘博. All rights reserved.
//
#include<iostream>
#include "stock20.hpp"

Stock::Stock()  //默认的构造函数
{
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string & co,long n, double pr)
{
    company = co;
    if(n<0)
    {
        std::cout << "股票数目不能是负数"
            << company <<"的数目设置为0\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

Stock::~Stock()
{
    std::cout<<"调用了析构函数/n  ";
}

void Stock::buy(long num, double price)
{
    if(num<0)
    {
        std::cout<<"购买的股票不能是负数"
        <<"任务终止、\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if(num<0)
    {
        std::cout<<"购买的股票不能是负数"
        <<"任务终止、\n";
    }
    else
    {
        shares-=num;
        share_val = price;
        set_tot();
    }
    
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show() const
{
     using std::cout;
        using std::ios_base;
        //设置格式成 #.###三位
        ios_base::fmtflags orig = cout.setf(ios_base::fixed,ios_base::floatfield);
        std::streamsize prec = cout.precision(3);
    //输出
        std::cout<< "Company: " << company <<"   Shares: " <<shares<<'\n';
        cout<<" Share Price: $ "<<share_val;
        //设置格式成#.## 两位小数点
        cout.precision(2);
        cout<<" Total Worth: $ "<<total_val<<'\n';
        
        //设置后面回原始格式
        cout.setf(orig,ios_base::floatfield);
        cout.precision(prec);
}

const Stock & Stock::topval(const Stock &s) const  //Stock::topval()是函数 Stock &是返回类型
{
    if(s.total_val > this->total_val)   //this是调用这个函数的对象(的指针) s是参数传递的对象
        return s;
    else
        return *this;
}
