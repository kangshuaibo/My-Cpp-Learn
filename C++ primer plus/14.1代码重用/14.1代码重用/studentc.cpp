//
//  studentc.cpp
//  14.1代码重用
//
//  Created by 张耘博 on 2020/4/8.
//  Copyright © 2020 张耘博. All rights reserved.
//

#include "studentc.hpp"
using std::ostream;
using std::endl;
using std::istream;
using std::string;


//public methods
double Student::Average() const
{
    if(scores.size() > 0)//使用了valarray的方法size() 和sum()
        return scores.sum()/scores.size();
    else
        return 0;
}

const string & Student::Name() const
{
    return name;
}

double  & Student::operator[](int i)
{
    return scores[i];   //use valarray<double>::operator[]()
}

double Student::operator[](int i) const
{
    return scores[i];
}


//private method
std::ostream & Student::arr_out(std::ostream & os) const
{
    int i;
    int lim = scores.size();
    if(lim > 0)
    {
        for (i = 0; i < lim; i++)
        {
            os << scores[i] << " "; //控制格式
            if (i % 5 ==4)
                os << endl;
        }
        if (i % 5 != 0)
            os << endl;
    }
    else
        os << "empty array";
    return os;
}



//firends
//use string version of operator>>()
istream & operator>>(istream & is, Student & stu)
{
    is >> stu.name;
    return is;
}

istream & getline(istream & is, Student & stu)
{
    getline(is, stu.name);
    return is;
}

ostream & operator<<(ostream & os, const Student & stu)
{
    os<< "Scores for " << stu.name << ":\n";
    stu.arr_out(os);
    return os;
}


