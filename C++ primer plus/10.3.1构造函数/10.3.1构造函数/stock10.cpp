//
//  stock10.cpp
//  10.3.1构造函数
//
//  Created by 张耘博 on 2020/3/23.
//  Copyright © 2020 张耘博. All rights reserved.
//
#include <iostream>
#include "stock10.hpp"

Stock::Stock()  //默认构造函数
{
    std::cout << "默认构造函数叫\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string & co, long n , double pr)
{
    std::cout << "使用的构造函数叫" << co << "\n";
    company = co;
    
    if(n<0)
    {
        std::cout<<"股票数目不能是负数"
        << company << "数目设置成0. \n";
        shares = 0;
    }
    else
        shares = 0;
    share_val = pr;
    set_tot();
}

Stock::~Stock()
{
    std::cout<<"再见"<<company<< "\n";
}


//其他的方法
void Stock::buy(long num, double price)
{
    if(num<0)
    {
        std::cout << "买的数目不能是负数"
        << "任务终止\n";
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
        cout<<"卖出的股票不能是负数"
        <<"任务已经终止\n";
    }
    else if(num > shares)
    {
        cout << "卖出的股票数字不能比你现在的多"
        << "进程已经终止\n";
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
    //设置小数形式#.###
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);
    
    cout<<"Company: "<<company
    <<"  shares:"<<shares<<'\n';
    cout << "share price : $" << share_val;
    
    //#.##
    cout.precision(2);
    cout<<"  Total Worth: $" << total_val << '\n';
    
    //reste
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
    
    
}
