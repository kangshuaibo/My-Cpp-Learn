//
//  string1.hpp
//  一个字符串类
//
//  Created by 张耘博 on 2020/3/28.
//  Copyright © 2020 张耘博. All rights reserved.
//

#ifndef string1_hpp
#define string1_hpp

#include<iostream>
using std::ostream;
using std::istream;

class String
{
private:
    char * str;
    int len;
    static int num_strings;     //对象f个数 静态成员变量是属于类的,一旦赋值则不可改变, 所有对象共享这一个值
    static const int CINLIM = 80;   //cin input limit
public:
//构造函数和方法
    String(const char * s); //构造函数
    String();
    String(const String &); //复制构造函数
    ~String();
    int length () const { return len;}
//重载操作符的方法
    String & operator = (const String &);
    String & operator = (const char *);
    char & operator [] (int i); //读写字符
    const char & operator [] (int i) const;
//重载操作符的友函数
    friend bool operator < (const String & st,const String & st2);
    friend bool operator > (const String & st,const String & st2);
    friend bool operator == (const String & st,const String & str2);
    friend ostream & operator << (ostream & os,const String & st);
    friend istream & operator >> (istream & is,String & st);
//static function
    static int HowMany();
    
    
};

#endif /* string1_hpp */
