//
//  main.cpp
//  13.4派生类
//
//  Created by 张耘博 on 2020/3/30.
//  Copyright © 2020 张耘博. All rights reserved.
//

#include <iostream>
#include "tabtenn1.hpp"


int main(int argc, const char * argv[]) {
    using std::cout;
    using std::endl;

    TableTennisPlayer player1("Tara","Boomdea", false);
    RatedPlayer rplayer1(1140, "Mallory","Duck", true);
//initialize
    rplayer1.Name();    //派生类对象用基类方法
    if (rplayer1.HasTable())
    {
        cout << "has a table.\n";
    }
    else
        cout << ":hasn`t a table.\n";
    
    player1.Name();         //基类对象用基类方法
    if (player1.HasTable())
    {
        cout << ":hasn't a table";
    }
    else
        cout << ":hasn't a table.\n";
    cout << "Name:";
    
    rplayer1.Name(); //派生类对象用基类方法
    cout << ";Rating:" << rplayer1.Rating() << endl;
    
//initialize RatedPlayer using TableTennisPlayer object
    RatedPlayer rplayer2(1212,player1);
    cout << "Name:";
    rplayer2.Name();
    cout << "; Rating: " << rplayer2.Rating() << endl;
    
    
    return 0;
}
