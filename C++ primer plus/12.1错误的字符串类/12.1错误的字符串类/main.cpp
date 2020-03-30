//
//  main.cpp
//  12.1错误的字符串类
//
//  Created by 张耘博 on 2020/3/28.
//  Copyright © 2020 张耘博. All rights reserved.
//

#include <iostream>
#include "stringbad.hpp"
void callme1(StringBad &);
void callme2(StringBad);

using std::cout;

int main(int argc, const char * argv[]) {
    using std::endl;
    
    
    {
        cout << "语句块开始\n";
        StringBad headline1("aaaaaaaaaaaaaaa");
        StringBad headline2("bbbbbbbbbbbbbbbbbbbbb");
        StringBad sports("cccccccccccccccccccccccc");
        
        cout << "headline1:" <<headline1 <<endl;
        cout << "headline2:" <<headline2 <<endl;
        cout << "Sports:" << sports << endl;
        cout << "\n";
        
        //按饮用传递
        callme1(headline1);
        cout << "headline1:" <<headline1 <<endl;
         cout << "\n";
        
        //按值传递
        callme2(headline2);
         cout << "headline2:" <<headline2 <<endl;
        cout << "\n";//·会调用析构函数
        
        
        
        
        //从另一个对象初始化一个对象
        cout << "从另一个对象初始化一个对象 :\n";
        StringBad sailor = sports;
        cout << "sailor: " <<sailor << endl;
        cout << "\n";
        
        //从另一个对象初始化一个对象
        cout << "从另一个对象分配对象:\n";
        StringBad knot;
        knot = headline1;
        cout << "knot:" <<knot <<endl;
        cout << "\n";
        
        cout << "函数块退出.\n";
    }
    cout << "~The end~\n";
    
    return 0;
}

void callme1(StringBad & rsb)
{
    cout << "String passed by reference:\n";
    cout << " \""<< rsb << " \" \n";
}

void callme2(StringBad sb)
{
    cout <<"String passed by value:\n";
    cout << " \" "<< sb << "\" \n";
}
