//
//  main.cpp
//  一个字符串类
//
//  Created by 张耘博 on 2020/3/28.
//  Copyright © 2020 张耘博. All rights reserved.
//

#include <iostream>
#include "string1.hpp"
const int ArSize = 10;
const int MaxLen = 81;


int main(int argc, const char * argv[]) {
    using std::cout;
    using std::cin;
    using std::endl;
    
    String name;
    cout<<"Hi,What's your name?";
    cin>>name;
    
    cout<<name<<",Please enter"<< ArSize<< "<empty line quit>:\n";
    
    String sayings[ArSize]; //对象数组
    char temp[MaxLen];
    int i;
    for(i=0;i<ArSize;i++)
    {
        cout << i+1 << ":";
        cin.get(temp, MaxLen);
        while(cin && cin.get() != '\n')
            continue;
        if(!cin|| temp[0] == '\n')
            break;
        else
            sayings[i] = temp;  //循环输入字符串 输入空行结束
    }
    
    int total = i; //读取的总行数
    
    if(total>0)
    {
            cout << "Here are your sayings:\n";
            for(i=0;i<total;i++)
                cout << sayings[i][0] << ":" <<sayings[i] << endl;  //且显示第一个字符
        
        
        int shortest = 0;
        int first = 0;
        for(i = 1; i< total ;i++)   //找最短
        {
            if(sayings[i].length() < sayings[shortest].length())
                shortest = i;
            if (sayings[i] < sayings[first])
                first = i;
        }
        
        cout <<  "最短的:" << sayings[shortest] << endl;
        cout << "第一个字母:"<< sayings[first] << endl;
        cout << "这个程序用了几个对象:" << String::HowMany() <<"\n";
    }
    else
        cout<<"No input ,Bye.\n";
    
    
    return 0;
}
