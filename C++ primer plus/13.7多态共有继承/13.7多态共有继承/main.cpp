//
//  main.cpp
//  13.7多态共有继承
//
//  Created by 张耘博 on 2020/3/31.
//  Copyright © 2020 张耘博. All rights reserved.
//

#include <iostream>
#include "brass.hpp"
using std::endl;

int main(int argc, const char * argv[]) {
    using std::cout;
    using std::endl;
    
    Brass Piggy("Pigg", 381299, 4000.00);
    BrassPlus Hoggy("Hogg",382288, 3000);
    Piggy.ViewAcct();
    cout << endl;
    Hoggy.ViewAcct();
    cout << endl;
    
    cout << "存款1000到Hogg:\n";
    Hoggy.Deposit(1000.00);
    cout << "新结余: ¥" << Hoggy.Balance() << endl;
    
    cout << "取款4200从Pigg:" <<endl;
    Piggy.Withdraw(4200.00);    //
    cout << "Pigg 账户结余: ¥" << Piggy.Balance() <<endl;
    
    cout << "取款4200从Hogg:\n";
    Hoggy.Withdraw(4200);
    Hoggy.ViewAcct();
    
    
    
    return 0;
}
