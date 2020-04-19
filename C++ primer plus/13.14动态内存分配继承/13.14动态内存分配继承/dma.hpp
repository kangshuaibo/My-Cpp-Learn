//
//  dma.hpp
//  13.14动态内存分配继承
//
//  Created by 张耘博 on 2020/4/7.
//  Copyright © 2020 张耘博. All rights reserved.
//

#ifndef dma_hpp
#define dma_hpp


#include <iostream>
class baseDMA   //动态内存分配基类
{
private:
    char * label;
    int rating;
public:
    baseDMA(const char * l = "null" , int r = 0);
    baseDMA(const baseDMA & rs);
    virtual ~baseDMA();
    baseDMA & operator=(const baseDMA & rs);
    friend std::ostream & operator << (std::ostream & os, const baseDMA & rs);
};






//没有动态内存分配的派生类
//不需要析构函数
//用隐式复制构造函数
//用隐式赋值运算符
class lacksDMA : public baseDMA
{
private:
    enum { COL_LEN = 40 };
    char color[COL_LEN];
public:
    lacksDMA(const char * c = "blank", const char * l = "null", int r = 0);
    lacksDMA(const char * c, const baseDMA & rs);
    friend std::ostream & operator << (std::ostream & os, const lacksDMA & rs);
    
};





class hasDMA : public baseDMA   //动态内存分配派生类
{
private:
    char * style;
public:
    hasDMA(const char * s = "none", const char * l = "null", int r =  0);
    hasDMA(const char * s , const baseDMA & rs);
    hasDMA(const hasDMA & hs);
    ~hasDMA();
    hasDMA & operator=(const hasDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
    
};





#endif /* dma_hpp */
