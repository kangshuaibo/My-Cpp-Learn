
# 基本定义
- 要让窗口打开,直到按下任意按键可在return前面添加 ```cin.get()```
- main() 定义了函数头,被启动代码调用. int main()前面的叫函数的返回类型
- C++在制定标准时去掉了main()函数中return 0;的要求
- 使用cin和cout必须包含iostream文件:```#include<iostream>```
- C++版本的math文件为cmath 

# 命名空间
- 如果使用了iostream而不是iostream.h应该使用命名空间```using namespace std;```的编译指令来使iostream中的定义对程序可用.(包含iostream文件,并编译std命名空间中的组件)
- 解释:`using`叫编译指令.例子:两个封装好的产品都有一个```wanda()```的函数.=>可以让一个公司将其定义放到一个名字为Microflop的名称空间中,这样这个函数的全程为```Micropflop::wanda()```.=>同样Piscine公司的wanda()函数表示为```Piscine::wanda()```
- 类、函数、变量是标准组件,放在命名空间std中.可以省略```using namespace std ```直接用```std::cout<<"hello";```
- 也可以只声明使用到的部分```using std::cout;```

# 输入输出
- cout是一个预定义对象,```cout<<"hello,my name"```将一个字符串插入到输出流中.如果string是一个字符串:`cout<<string`就输出这个字符串.
- 注明: 运算符号重载:<<即表示左移,又表示插入.&即表示地址,又表示AND,*即表示乘法,又表示解除指针引用.
- endl表示重起一行,位于头文件iostream中,且位于名称空间std中
- 注明:   
`cout << endl; `   
等价于:   
`cout << '\n' << flush; //flush为刷新缓冲区`  
在没有必要刷新输出流的时候应尽量使用 cout << '\n', 过多的 endl 是影响程序执行效率低下的因素之一。
- 声明不一定是定义,有定义声明,引用声明.`int carrot`表明需要的内存以及该内存单元的名称
- 字符串“25”存的是2和5的编码,数字25存的是二进制数.cout的输出是转换为了字符串打印的
- cin抓取输入流中的数据>>插入到右边的变量中  
# 类
- 类是数据类型,表示什么信息和对数据执行哪些操作
- 类描述了数据类型的全部属性,对象是根据这些描述创建的实体.
- int carrots; 存整数,可以加减乘除.
- 