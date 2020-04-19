//
//  studentc.hpp
//  14.1代码重用
//
//  Created by 张耘博 on 2020/4/8.
//  Copyright © 2020 张耘博. All rights reserved.
//

#ifndef studentc_hpp
#define studentc_hpp

#include <stdio.h>
#include <iostream>
#include <valarray> //valarray类 处理数值

class Student
{
private:
    typedef std::valarray<double> ArrayDb;
    std::string name;   //成员对象
    ArrayDb scores;
    std::ostream & arr_out(std::ostream & os) const;
public:
    Student() : name("Null Student"), scores() {}
    explicit Student(const std::string & s) : name(s), scores() {}  //关闭隐式转换
    explicit Student(int n) : name("Nully"), scores(n) {}
    Student(const std::string & s, int n) : name(s),scores(n) {}
    Student(const std::string & s, const ArrayDb & a):name(s), scores(a) {}
    //初始化的是成员对象,而不是继承的对象,所以使用成员名name调用了构造函数string(const char*)
    Student(const char * str, const double * pd, int n) : name(str), scores(pd, n) {}
    ~Student() {}
    
    double Average() const;
    const std::string & Name() const;
    double & operator[](int i);
    double operator[](int i) const;
    
//friends
    friend std::istream & operator>>(std::istream & is, Student & stu);
    friend std::istream & getline(std::istream & is, Student & stu);
    friend std::ostream & operator<<(std::ostream & os,const Student & stu);
    
    
};

#endif /* studentc_hpp */
