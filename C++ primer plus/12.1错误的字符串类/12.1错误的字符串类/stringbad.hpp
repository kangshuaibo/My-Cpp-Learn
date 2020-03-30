//
//  stringbad.hpp
//  12.1错误的字符串类
//
//  Created by 张耘博 on 2020/3/28.
//  Copyright © 2020 张耘博. All rights reserved.
//
#include<iostream>
#ifndef stringbad_hpp
#define stringbad_hpp

class StringBad
{
private:
    char *str;
    int len;
    static int num_strings;  //描述对象的数量
public:
    StringBad(const char * s);  //构造函数
    StringBad();    //默认构造函数
    ~StringBad();   //析构函数
    
    friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
    //友函数重载操作符<<
};


#endif /* stringbad_hpp */
