//
//  stack.cpp
//  栈
//
//  Created by 张耘博 on 2020/3/24.
//  Copyright © 2020 张耘博. All rights reserved.
//

#include "stack.hpp"
Stack::Stack()//默认构造函数
{
    top=0;//栈为空
}

bool Stack::isempty() const
{
    return top==0;
}

bool Stack::isfull() const
{
    return top==MAX;
}

bool Stack::push(const Item & item)
{
    if(top<MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else
        return false;
}
