//
//  main.cpp
//  10_8_stock20
//
//  Created by 张耘博 on 2020/3/24.
//  Copyright © 2020 张耘博. All rights reserved.
//

#include <iostream>
#include "stock20.hpp"

const int STKS = 4;

int main(int argc, const char * argv[]) {
    //创建对象数组 存放对象并初始化
    Stock stocks[STKS] = {
        Stock("Visa",12,20.0),
        Stock("Nvda",30,128.0),
        Stock("BABA",50,60),
        Stock("NTNX",60,70)
    };
    
    std::cout << "持有的股票有:\n";
    int st;
    for(st = 0; st < STKS;st++)
        stocks[st].show();
    
    //将指针指向第一个元素
    const Stock * top = &stocks[0]; //top是一个地址
    for(st=1; st<STKS ;st++)
        top = &top->topval(stocks[st]);//😊调用topval()函数的对象&top 与 显式的stock[st]比较大小 用top指针指向大的
    std::cout << "\n持有的最大值是\n";
    top->show();
    
    
    return 0;
}
