//
//  stringbad.cpp
//  12.1错误的字符串类
//
//  Created by 张耘博 on 2020/3/28.
//  Copyright © 2020 张耘博. All rights reserved.
//

#include "stringbad.hpp"
#include<cstring>
using std::cout;

//初始化静态类成员
int StringBad::num_strings = 0;

//构造函数
StringBad::StringBad(const char * s)
{
    len = std::strlen(s);   //传递字符串地址 获得字符串长度
    str = new char[len + 1];
    std::strcpy(str,s);     //初始化指针
    num_strings++;      //设置对象记数
    cout<<num_strings << ":\""<< str << "\" object created\n";
}

StringBad::StringBad()  //默认构造函数
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");    //默认::初始化指针指向一个固定字符串
    num_strings++;
    cout<<num_strings<< ": \"  " << str << "  \"default object carated\n  ";
}

StringBad::~StringBad()    //析构函数
{
    cout << " \" " << str << " \" object deleted, ";    //指针删除对象
    --num_strings;
    cout << num_strings << "个对象剩余\n";
    delete [] str;
}

std::ostream & operator<<(std::ostream & os,const StringBad & st)
{
    os << st.str;   //输出对象的指针 让cout可以输出对象
    return os;
}
