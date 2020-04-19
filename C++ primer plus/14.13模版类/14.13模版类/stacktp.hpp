//
//  stacktp.hpp
//  14.13模版类
//
//  Created by 张耘博 on 2020/4/14.
//  Copyright © 2020 张耘博. All rights reserved.
//

#ifndef stacktp_hpp
#define stacktp_hpp

template <class Type>
class Stack
{
private:
    enum{MAX = 10};
    Type items[MAX];
    int top;
public:
    Stack();    //构造函数 初始化
    bool isempty();
    bool isfull();
    bool push(const Type & item);
    bool pop(Type & item);
    
};

template <class Type>
Stack<Type>::Stack()
{
    top = 0;
}

template <class Type>
bool Stack<Type>::isempty()
{
    return top == 0;
}

template <class Type>
bool Stack<Type>::isfull()
{
    return top == MAX;
}

template <class Type>
bool Stack<Type>::push(const Type & item)
{
    if (top < MAX)
    {
        item[top++] = item;
        return true;
    }
    else
        return false;
    
}

template <class Type>
bool Stack<Type>::pop(Type & item)
{
    if( item > 0)
    {
        item = item[--top];
        return true;
    }
    else
        return false;
    
}



#endif /* stacktp_hpp */
