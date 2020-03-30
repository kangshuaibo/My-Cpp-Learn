//
//  mytime0.hpp
//  11.1时间
//
//  Created by 张耘博 on 2020/3/24.
//  Copyright © 2020 张耘博. All rights reserved.
//

#ifndef mytime0_hpp
#define mytime0_hpp
class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h,int m = 0);  //构造函数
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0,int m = 0);
    Time Sum(const Time & t) const; //两个对象相加
    void Show() const;
};


#endif /* mytime0_hpp */
