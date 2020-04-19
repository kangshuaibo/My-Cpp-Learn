//
//  tabtenn1.cpp
//  13.4派生类
//
//  Created by 张耘博 on 2020/3/30.
//  Copyright © 2020 张耘博. All rights reserved.
//

#include "tabtenn1.hpp"
#include <iostream>

TableTennisPlayer::TableTennisPlayer (const string &fn, const string & ln, bool ht) : firstname(fn),lastname(ln),hasTable(ht)   //列表初始化
{
    
}

void TableTennisPlayer::Name() const
{
    std::cout << lastname << "," << firstname;
}


//派生类方法
RatedPlayer::RatedPlayer(unsigned int r, const string & fn, const string & ln, bool ht) : TableTennisPlayer(fn,ln,ht)
{
    rating = r; //传递比分
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp) : TableTennisPlayer(tp),rating(r)
{
    
}
