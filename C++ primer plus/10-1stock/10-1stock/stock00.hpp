//
//  stock00.hpp
//  10-1stock
//
//  Created by 张耘博 on 2020/3/22.
//  Copyright © 2020 张耘博. All rights reserved.
//

#ifndef stock00_hpp
#define stock00_hpp

#include <string>

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() {total_val = shares * share_val;}
public: //只能通过共有成员函数访问私有成员
    void acquire(const std::string & co,long n, double pr); //管理对某公司股票的首次购买
    void buy(long num,double price);
    void sell(long num,double price);
    void update(double price);
    void show();
};

#endif /* stock00_hpp */
