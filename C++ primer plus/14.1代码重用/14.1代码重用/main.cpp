//
//  main.cpp
//  14.1代码重用
//
//  Created by 张耘博 on 2020/4/8.
//  Copyright © 2020 张耘博. All rights reserved.
//

#include <iostream>
#include "studentc.hpp"
using std::cin;
using std::cout;
using std::endl;

void set(Student & sa, int n);
const int pupils = 3;
const int quizzes = 5;

int main(int argc, const char * argv[])
{
    Student ada[pupils] = {Student(quizzes),
        Student(quizzes),
        Student(quizzes)};
    
    int i;
    for ( i = 0; i < pupils; ++i)
        set(ada[i],quizzes);    //quizzes = 5
    cout << "\n Student List: \n";
    
    for (i =0; i < pupils; ++i)
    {
        cout  << endl <<ada[i];
        cout << "average:" << ada[i].Average() << endl;
    }
    cout << "Done.\n";
   
    return 0;
}

void set(Student & sa, int n)
{
    cout << "Please enter the student's name:";
    getline(cin, sa);
    cout << "Please enter" << n << "quiz scores:\n";
    for (int i = 0; i < n; i++)
        cin >> sa[i];
    while(cin.get() != '\n')
        continue;
}
