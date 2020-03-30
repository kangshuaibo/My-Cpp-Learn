//
//  main.cpp
//  11.1时间
//
//  Created by 张耘博 on 2020/3/24.
//  Copyright © 2020 张耘博. All rights reserved.
//

#include <iostream>
#include "mytime0.hpp"

int main(int argc, const char * argv[]) {
    using std::cout;
    using std::endl;
    
    Time planning;
    Time coding(2,40); //用类定义对象 赋值
    Time fixing(5,55);
    Time total;
    
    cout << "Planning time = ";
    planning.Show();
    cout <<endl;
    
    cout << "coding time = ";
    coding.Show();
    cout << endl;
    
    cout << "fixing time = ";
    fixing.Show();
    cout << endl;
    
    total = coding.Sum(fixing); //😄显式和隐式传递给Sum()函数 将两个时间相加
    cout << "coding.Sum(fixing) = ";
    total.Show();
    cout << endl;
    
    return 0;
}
