//
//  stock10.hpp
//  10.3.1构造函数
//
//  Created by 张耘博 on 2020/3/23.
//  Copyright © 2020 张耘博. All rights reserved.
//

#ifndef stock10_hpp
#define stock10_hpp

#include <string>

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){total_val = share_val * shares;}
public:
    Stock();    //默认构造函数
    Stock(const std::string & co,long n = 0 ,double pr = 0.0);
    ~Stock();   //析构函数
    
    void buy(long num,double price);
    void sell(long num,double price);
    void update(double price);
    void show();
};

#endif /* stock10_hpp */
