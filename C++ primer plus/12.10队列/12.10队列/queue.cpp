//
//  queue.cpp
//  12.10队列
//
//  Created by 张耘博 on 2020/3/30.
//  Copyright © 2020 张耘博. All rights reserved.
//

#include "queue.hpp"
#include<cstdlib>   //for rand()

Queue::Queue(int qs) : qsize(qs) //创建qs个队列 后面为列表初始化
{
    front = rear = nullptr;
    items = 0;   //目前在队列中的项目数
}

Queue::~Queue()
{
    Node * temp;
    while (front != nullptr)
    {
        temp = front;   //用temp指向要删除的节点
        front = front->next;    //原来的frontz指针指向下一个节点
        delete temp;
    }
}

bool Queue::isempty()const
{
    return items == 0;
}

bool Queue::isfull() const
{
    return items == qsize; //目前的数量与最大数量相等
}

int Queue::queuecount() const
{
    return items;
}

bool Queue::enqueue(const Item & item)  //传入一个要入队的元素
{//判断满->把要插入的数据存放到add上->数量增->判断空->成为队头或添加到队尾->重置队尾指针
    if (isfull())
        return false;
    Node * add = new Node;  //创建节点
    add->item = item;   //add是新建节点的指针 把数据的值复制给他
    add->next = nullptr;    //新节点的下一个没有指定
    items++;
    if(front == nullptr)    //队列是空 就直接放在第一个 也就是front直接指向他
        front = add;
    else
        rear->next = add;   //t不是空 就添加到队尾 即对尾指针指向他
    rear = add;
    return true;
}

bool Queue::dequeue(Item & item) //传入一个参数用来保存出队的元素
{//判断空->队列提供给函数->数量减->对象指针指向对象->front指针后移->删除->判断空重置尾指针
    if(front == nullptr)
        return false;
    item = front->item; //将队列的第一个元素提供给 调用函数(数据复制到引用变量) 出队列的元素有使用的意义 获取出队的元素
    items--;
    Node * temp = front;    //创建指向对象的指针 指向要删除的节点
    front = front->next;    //front指针后移
    delete temp;
    if(items == 0)
        rear = nullptr;
    return true;
}

void Customer::set(long when)
{
    processtime = std::rand() % 3 + 1;
    arrive = when;
}
