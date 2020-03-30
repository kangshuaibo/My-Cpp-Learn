//
//  stock20.hpp
//  10_8_stock20
//
//  Created by 张耘博 on 2020/3/24.
//  Copyright © 2020 张耘博. All rights reserved.
//

#ifndef stock20_hpp
#define stock20_hpp

#include <string>

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){total_val= shares*share_val;}
public:
    Stock();    //默认构造函数
    Stock(const std::string & co, long n=0 ,double pr=0.0); //有参数的构造函数
    ~Stock();
    
    void buy(long num,double price);
    void sell(long num,double price);
    void update(double price);
    void show() const;  //后置const表明这个函数不会修改对象的数据成员
    const Stock & topval(const Stock & s) const;    //括号里面是显式const 后置的隐式const 前面的表示返回一个const &表明返回的是一个引用
    
};

#endif /* stock20_hpp */
