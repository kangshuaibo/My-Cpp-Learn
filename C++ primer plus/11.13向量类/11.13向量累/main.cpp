//
//  main.cpp
//  11.13向量累
//
//  Created by 张耘博 on 2020/3/25.
//  Copyright © 2020 张耘博. All rights reserved.
//

#include <iostream>
#include "vector.hpp"
#include <cstdlib>  //rand() srand()
#include <ctime>    //time()

int main(int argc, const char * argv[]) {
    using namespace std;
    using VECTOR::Vector;
    srand(time(0)); //seed random number generator
    double direction;
    Vector step;
    Vector result(0.0,0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout<< "Enter target distance (q to quit):";
    while (cin >> target)
    {
        cout << "Enter step length:";
        if(!(cin >> dstep))
            break;
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);  //极坐标
            result = result + step;
            steps++;
        }
        cout<<"After" <<steps <<"steps, the subject "<< "has the following location:\n";
        cout<< result<<endl;
        result.polar_mode();
        cout<<"or\n"<<result <<endl;
        cout<<"Average outward distance per step = "<< result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0,0.0);
        cout<<"Enter target distance (qq to quit):";
    }
    cout << "在你他妈的见\n";
    cin.clear();
    while (cin.get()!='\n') {
        continue;
    }
    return 0;
}
