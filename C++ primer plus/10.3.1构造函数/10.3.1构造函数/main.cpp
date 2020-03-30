//
//  main.cpp
//  10.3.1构造函数
//
//  Created by 张耘博 on 2020/3/23.
//  Copyright © 2020 张耘博. All rights reserved.
//

#include <iostream>
#include "stock10.hpp"

int main(int argc, const char * argv[])
{
   {
       using std::cout;
       cout<<"用构造函数创建新对象\n";
       Stock stock1("VISA",12,20.0);
       stock1.show();
       
       Stock stock2 = Stock("BABA",2,2.0);
       stock2.show();
       
       cout<<"把stock2赋值给stock1: \n";
       stock2 = stock1;
       cout << "Listing stock1 and stock2: \n";
       stock1.show();
       stock2.show();
       
       cout<< "用构造函数重置对象 \n";
       stock1 = Stock("xioami",10,50.0);
       cout<< "Revised stock1:\n";
       stock1.show();
       cout<<"Done\n";
   }
    return 0;
}
