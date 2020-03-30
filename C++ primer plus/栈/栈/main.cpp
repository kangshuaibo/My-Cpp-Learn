//
//  main.cpp
//  栈
//
//  Created by 张耘博 on 2020/3/24.
//  Copyright © 2020 张耘博. All rights reserved.
//

#include <iostream>
#include <cctype>
#include "stack.hpp"

int main(int argc, const char * argv[]) {
    using namespace std;
    Stack st;
    char ch;
    unsigned long po;
    cout<<"按A添加订单,按P处理一个订单,按Q退出\n";
    while (cin>>ch && toupper(ch) != 'Q')   //字母存到ch 不是Q就进入循环
    {
        while (cin.get() != '\n')   //删掉输入流中多余的部分
        {
            continue;
        }
        if (!isalpha(ch))   //不是字母发出警告
        {
            cout<<'\a';
            continue;
        }
        switch (ch) {   //是字母进入选择
            case 'A':
            case 'a':cout << "请输入数据po来压入栈:";
                    cin >> po;
                    if (st.isfull())
                        cout << "stack already full\n";
                    else
                        st.push(po);
                    break;
            case 'P':
            case 'p':if (st.isempty())
                cout<<"stack already empty\n";
                else
                {
                    st.pop(po);     //pop()函数把栈顶元素赋给了po
                    cout<<"PO # "<< po <<" poped\n";
                }
                break;
        }
        cout<<"按A添加订单,按P处理一个订单,按Q退出\n";
    }
    cout<<"再您他妈的见\n";
    
    return 0;
}
