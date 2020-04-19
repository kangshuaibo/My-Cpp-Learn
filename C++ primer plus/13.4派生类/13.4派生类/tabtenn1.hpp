//
//  tabtenn1.hpp
//  13.4派生类
//
//  Created by 张耘博 on 2020/3/30.
//  Copyright © 2020 张耘博. All rights reserved.
//

#ifndef tabtenn1_hpp
#define tabtenn1_hpp

#include <stdio.h>
#include <string>
using std::string;

//基类
class TableTennisPlayer
{
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer (const string & fn = "none", const string & ln = "none" ,bool ht = false);    //构造函数  初始化参数
    void Name() const;  //打印名字
    bool HasTable() const {return hasTable;}
    void ResetTable(bool v) {hasTable = v;}
};






//派生类 能包括比分
class RatedPlayer : public TableTennisPlayer
{
private:
    unsigned int rating;
public:
    RatedPlayer(unsigned int r = 0,const string & fn = "none", const string & ln = "none", bool ht = false);
    RatedPlayer(unsigned int r, const TableTennisPlayer & tp);  //两个构造函数
    unsigned int Rating() const {return rating;}
    void ResetRating (unsigned int r) {rating = r;}
};

#endif /* tabtenn1_hpp */
