//
//  queue.hpp
//  12.10队列
//
//  Created by 张耘博 on 2020/3/30.
//  Copyright © 2020 张耘博. All rights reserved.
//

#ifndef queue_hpp
#define queue_hpp

class Customer
{
private:
    long arrive;    //到达时间
    int processtime;    //排队的过程时间
public:
    Customer() {arrive = processtime = 0;}
    void set(long when);
    long when() const { return arrive;}
    int ptime() const {return processtime;}
};

typedef Customer Item;





class Queue
{
private:
//类范围定义
    struct Node{ Item item;struct Node * next;};//Node是一个嵌套的结构定义
    enum {Q_SIZE = 10};
//私有成员
    Node * front;
    Node * rear;
    int items;       //目前在队列中的项目数量
    const int qsize;    //在队列中的最大项目数量
    //优先定义防止共有的复制
    Queue(const Queue & q):qsize(0){}
    Queue & operator=(const Queue & q){return *this;}
public:
    Queue(int qs = Q_SIZE); //创建qs个队列
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Item & item);    //在t对位添加项目
    bool dequeue(Item &item);
};
#endif /* queue_hpp */
