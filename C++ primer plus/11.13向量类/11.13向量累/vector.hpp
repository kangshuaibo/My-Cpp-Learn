//
//  vector.hpp
//  11.13向量累
//
//  Created by 张耘博 on 2020/3/25.
//  Copyright © 2020 张耘博. All rights reserved.
//

#ifndef vector_hpp
#define vector_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

namespace VECTOR
{
    class Vector
    {
    public:
        enum Mode{RECT,POL};    //直角坐标和极所标的两个 常量
    private:
        double x;
        double y;
        double mag;
        double ang;
        Mode mode;
        
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();
    public:
        Vector();   //默认构造函数
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector();
        
        double xval() const{return x;}
        double yval() const{return y;}  //report y value
        
        double magval() const{return mag;}  //report megnitude
        double angval() const {return ang;}    //report angle
        
        void polar_mode();
        void rect_mode();   //set mode to rect
        
    //重载运算符
        Vector operator+(const Vector & b) const;
        Vector operator-(const Vector & b) const;
        Vector operator-() const;   //取相反数
        Vector operator*(double n) const;
    //friends
        friend Vector operator*(double n,const Vector & a); //数字与对象相乘
        friend std::ostream & operator<<(std::ostream & os, const Vector & v);  //重载运算符号<< 可以用cout输出s对象
        
    };
}

#endif /* vector_hpp */
