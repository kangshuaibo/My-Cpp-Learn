//
//  main.cpp
//  12.10队列
//
//  Created by 张耘博 on 2020/3/30.
//  Copyright © 2020 张耘博. All rights reserved.
//

#include <iostream>
#include <cstdlib>  //for rand() srand()
#include <ctime> //for time()
#include "queue.hpp"
const int MIN_PER_HR = 60;

bool newcustomer (double x);    //是否有一个用户

int main(int argc, const char * argv[]) {
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
//设置了
    std::srand(std::time(0));
    cout<<"输入队列的最大值\n";
    int qs;
    cin >> qs;
    Queue line(qs); //新建一个队列对象line 设置最大值为qs
//2
    cout << "请输入模拟时间\n";
    int hours;
    cin >> hours;
    //模拟将运行一个循环每分钟
    long cyclelimit = MIN_PER_HR * hours;
 //3
    cout << "输入每小时的顾客平均数\n";
    double perhour; //每小时的平均数量
    cin >> perhour;
    double min_per_cust;//到达的平均时间
    min_per_cust = MIN_PER_HR;
 
    
    Item temp;  //new customer data
    long turnaways = 0;  //排满d被拒之门外的数量
    long customers = 0;   //加入队列的
    long served = 0;    //被服务的
    long sum_line= 0;   //累计的队列长度
    int wait_time = 0;  //ATM空闲前的时间
    long line_wait = 0; //累计的队列时间
    
    //开始模拟
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if(newcustomer(min_per_cust))   //有顾客
        {
            if(line.isfull())
                turnaways++;
            else
            {
                customers++;
                temp.set(cycle); //循环的次数变量传递进去 设置到达时间和随机的持续时间
                line.enqueue(temp); //设置玩这个对象后入队列
            }
        }
        if (wait_time <= 0 && !line.isempty())
        {
            line.dequeue(temp);
            wait_time = temp.ptime();   //顾客的等待时间传递给全局变量
            line_wait += cycle - temp.when();
            served++;
        }
        if (wait_time > 0)
            wait_time--;
        
        sum_line += line.queuecount();
    }
    
    if(customers > 0)
    {
        cout << "接收的顾客数:" << customers << endl;
        cout << "服务的顾客:" << served <<endl;
        cout << "阻拦了顾客:" << turnaways <<endl;
        cout << "average queue size:";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double) sum_line / cyclelimit << endl;
        cout << "平均等待时间:" << (double) line_wait /served << "minutes\n";
    }
    else
        cout << "没有顾客了!\n";
    cout << "Done!\n";
    
    
    return 0;
}

bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);
}
