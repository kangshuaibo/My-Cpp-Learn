//
//  main.cpp
//  13.14动态内存分配继承
//
//  Created by 张耘博 on 2020/4/7.
//  Copyright © 2020 张耘博. All rights reserved.
//

#include <iostream>
#include "dma.hpp"
using namespace::std;

int main(int argc, const char * argv[]) {
    
    
    baseDMA shirt("Portabelly",8);
    lacksDMA balloon("red","Blimop",4);
    hasDMA map("Mercator","Buffalo Keys",5);
    
    cout << "Displaying baseDMA object:\n";
    cout <<shirt << endl;
    
    cout << "Displaying lacksDMA object:\n";
    cout <<balloon << endl;
    
    cout << "Displaying lacksDMA object:\n";
    cout << map << endl;
    
    lacksDMA balloon2(balloon);
    cout << "Result of lacksdDMA copy:\n";
    cout << balloon2 <<endl;
    
    hasDMA map2;
    map2 = map;
    
    
    return 0;
}
