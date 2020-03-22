//
//  stock00.cpp
//  10-1stock
//
//  Created by 张耘博 on 2020/3/22.
//  Copyright © 2020 张耘博. All rights reserved.
//
#include <iostream>
#include "stock00.hpp"

void Stock::acquire(const std::string & co, long n, double pr)
{
    company = co;
    if(n<0)
    {
        std::cout << "股票数不能是负数"
                  << company <<" shares set to 0. \n";
        shares = 0;
    }
    else
        shares = n;
    
    share_val = pr;
    set_tot();
}

void Stock::buy(long num,double price)
{
    if(num<0)
    {
        std::cout <<"买到股票数不能是负数."
        <<"业务已经终止. \n";
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
        cout << "卖出股票不能是负数"
        <<"业务已终止. \n";
    }
    else if (num>shares)
    {
        cout <<"不能卖掉比你持有的跟多"
        <<"业务已经终止. \n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
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
