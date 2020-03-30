//
//  mytime0.cpp
//  11.1时间
//
//  Created by 张耘博 on 2020/3/24.
//  Copyright © 2020 张耘博. All rights reserved.
//
#include <iostream>
#include "mytime0.hpp"
Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h,int m)
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h,int m)
{
    hours = h;
    minutes = m;
}

Time Time::Sum(const Time &t) const
{
    Time sum;   //把和加到这上 相当于temp
    sum.minutes = minutes + t.minutes;  //调用这个函数的minutes与传递进来的minutes的和===存放到sum中用于返回
    sum.hours = hours + t.hours + sum.minutes/60;   //计算小时
    sum.minutes %=60;   //计算分钟
    return sum;
}

void Time::Show() const
{
    std::cout << hours <<"hours," << minutes << "minutes";
}
