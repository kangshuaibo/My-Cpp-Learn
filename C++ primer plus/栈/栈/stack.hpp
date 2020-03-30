//
//  stack.hpp
//  栈
//
//  Created by 张耘博 on 2020/3/24.
//  Copyright © 2020 张耘博. All rights reserved.
//

#ifndef stack_hpp
#define stack_hpp

typedef unsigned long Item;  //将关键字unsigned long替换成 Item

class Stack
{
private:
    enum{MAX = 10};     //声明数组长度的值
    Item items[MAX];    //存放栈的每一项
    int top;            //栈顶索引
public:
    Stack(); //默认构造函数
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item & item);
};

#endif /* stack_hpp */
