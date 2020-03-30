//
//  vector.cpp
//  11.13向量累
//
//  Created by 张耘博 on 2020/3/25.
//  Copyright © 2020 张耘博. All rights reserved.
//

#include "vector.hpp"
#include <cmath>

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR {

//计算一个弧度的角度
const double Rad_to_deg = 45.0/atan(1.0);   //57.29


//private方法
//计算x到y的大小

void Vector::set_mag()
{
    mag = sqrt(x * x + y * y);
}

void Vector::set_ang()
{
    if (x == 0.0 && y == 0.0)
        ang = 0.0;
    else
        ang = atan2(y,x);
}

void Vector::set_x()
{
    x = mag * cos(ang);
}

void Vector::set_y()
{
    y = mag * sin(ang);
}

//public方法
Vector::Vector()    //默认构造函数
{
    x = y = mag = ang = 0.0;
    mode = RECT;
}
//mode设置传递进来的参数是直角 还是极坐标
Vector::Vector(double n1, double n2, Mode form)
{
    mode = form;
    if (form == RECT)
    {
        x = n1;     //设置直角坐标
        y = n2;
        
        set_mag();  //长度 设置极坐标
        set_ang();  //角度e
    }
    else if(form == POL)
    {
        mag = n1;   //赋值极所标的长度 设置极坐标
        ang = n2/Rad_to_deg;
        
        set_x();//设置直角坐标
        set_y();
    }
    else
    {
        std::cout<<"d第三个参数不正确,向量被设置为0\n";
        x = y = mag = ang = 0.0;
        mode = RECT;
    }
}

void Vector::reset(double n1, double n2,Mode form)
{
    mode = form;
    if (form == RECT)
    {
        x = n1;     //赋值直角坐标的点
        y = n2;
        set_mag();  //长度
        set_ang();  //角度e
    }
    else if(form == POL)
    {
        mag = n1;   //赋值极所标的长度
        ang = n2/Rad_to_deg;
        set_x();
        set_y();
    }
    else
    {
        std::cout<<"d第三个参数不正确,向量被设置为0\n";
        x = y = mag = ang = 0.0;
        mode = RECT;
    }
}

Vector::~Vector()
{
    
}

void Vector::polar_mode()
{
    mode = POL;
}

void Vector::rect_mode()
{
    mode = RECT;
}

Vector Vector::operator+(const Vector & b) const
{
    return Vector(x+b.x,y+b.y);
}

Vector Vector::operator-(const Vector & b) const
{
    return Vector(x - b.x,y - b.y);
}

Vector Vector::operator-() const
{
    return Vector(-x,-y);
}

Vector Vector::operator*(double n) const
{
    return Vector(n * x, n * y);
}


//friends友函数
Vector operator*(double n,const Vector & a)
{
    return a * n;
}

std::ostream & operator<<(std::ostream & os, const Vector & v)
{
    if (v.mode == Vector::RECT)
        os<<"(x,y) = (" << v.x << ","<< v.y <<")";
    else if (v.mode == Vector::POL)
    {
        os<< "(m,a)=(" << v.mag << "," << v.ang * Rad_to_deg << ")";
    }
    else
        os<<"Vector object mode is invalid";
        return os;
}


}
