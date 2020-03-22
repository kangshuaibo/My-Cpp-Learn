//
//  main.cpp
//  10-1stock
//
//  Created by 张耘博 on 2020/3/22.
//  Copyright © 2020 张耘博. All rights reserved.
//

#include <iostream>
#include "stock00.hpp"
int main(int argc, const char * argv[]) {
    Stock fluffy_the_cat;   //定义一个对象
    
    fluffy_the_cat.acquire("Nvid", 20, 12.5);
    fluffy_the_cat.show();
    
    fluffy_the_cat.buy(15, 18.125);
    fluffy_the_cat.show();
    
    fluffy_the_cat.sell(400, 20);
    fluffy_the_cat.show();
    
    fluffy_the_cat.buy(300000, 40.125);
    fluffy_the_cat.show();
    
    fluffy_the_cat.sell(300000, 0.125);
    fluffy_the_cat.show();
    return 0;
}
