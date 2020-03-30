//
//  string1.cpp
//  一个字符串类
//
//  Created by 张耘博 on 2020/3/28.
//  Copyright © 2020 张耘博. All rights reserved.
//

#include "string1.hpp"
#include <cstring>
using std::cout;
using std::cin;

//初始化静态类成员
int String::num_strings = 0;

//静态方法
int String::HowMany()
{
    return num_strings;
}

//类方法
String::String(const char * s)
{
    len = std::strlen(s);
    str = new char[len+1];
    std::strcpy(str,s);//把字符串s复制一份,用str指向被复制的
    num_strings++;
}

String::String()
{
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

String::String(const String & st)//复制构造函数 无return
{
    num_strings++;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str,st.str);
}

String::~String()
{
    --num_strings;
    delete [] str;
}

//重载操作符方法
        //把一个字符串赋值给另一个 按值传递 传入一个对象返回一个对象
String & String::operator = (const String & st)
{
    if (this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char[len+1];
    std::strcpy(str,st.str);    //st是传递的对象
    return *this;   //调用这个函数的对象就有str成员,字符串赋值完后返回这个对象就可以了
}
    //c风格字符串赋值 传入的是字符串 返回一个对象
String & String::operator = (const char * s)
{
    delete [] str;
    len = std::strlen(s);
    str = new char [len +1];
    std::strcpy(str,s);
    return *this;
}

    //读写字符
char & String::operator[](int i)
{
    return str[i];
}

const char & String::operator[](int i) const
{
    return str[i];
}

bool operator<(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str,st2.str)<0);
}

bool operator>(const String &st1, const String &st2)
{
    return (st2 < st1); //应用了上面重载的h符号 <
}

bool operator==(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str,st2.str) == 0);
}

ostream & operator<<(ostream & os, const String & st)
{
    os<<st.str;
    return os;
}

istream & operator>>(istream & is, String & st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);   //输入80个字符存放在temp
    if(is)
        st=temp;    //存到对象上
    while(is && is.get() != '\n') //不超过80个,丢弃多余字符
        continue;
    return is;
}


    







