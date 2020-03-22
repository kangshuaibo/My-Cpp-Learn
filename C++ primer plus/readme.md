
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

# 2.3.3类
- 类是数据类型,表示什么信息和对数据执行哪些操作
- 类描述了数据类型的全部属性,对象是根据这些描述创建的实体.
- int carrots; 存整数,可以加减乘除.即描属性和操作
# 函数 
- 函数原型之于函数像变量声明之于变量`double sqrt(double)`.在使用函数前必须提供原型函数,1在源代码文件中写,2包含这个头文件
- 用户自己定义的原型函数通常放在main()前面,将代码放在后面.


```
#include <iostream>
void simon(int);	//原型函数,(或可以在头文件中

int main()
{
 using namespace std;
 simon(3);		//调用这个函数
 cout<< "hhh";
 ...
 
 return 0;
}

void simon(int n)	//原型函数代码,函数头中有形参变量n
{
	using namespace std;
	cout<<"simon say" << n << "times" << endl;
}

```
- 让程序能够访问命名空间std的方法有很多
 - `using namespace std;`放在函数定义之前,这个文件中所有函数都能访问
 - `using namespace std;`放在特定函数中
 - `using std::cout;`放在特定函数中
 - 完全不用using,在需要的元素前直接用前缀std::如:`std::cout<<"haha"<<std::endl;`
 
#chapter3数据处理
- 两个下划线或下划线加大写字母的变量名称保留给实现(编译器及其使用的资源)使用
- sizeof返回类型或变量的长度单位字节byte
- climits头文件中`#define INT_MAX 32767 `所以INT_MAX为int的最大取值(数值范围),CHAR_BIT为char字节的位数
- int四个字节32位bit,short2字节,16位bit
- C++独有的初始化`int wrens(432);`
- C++11标准的初始化`int emus{17};`或者`int rheas = {12};`或者不包含值,将初始化为0:`int rocs = { }`或者 `int psychics{ }`,这更好的防范了类型转换错误.
- 不建议将声明于赋值分开,声明的内存为上一次使用这个内存留下的缓存`建议short year=1492;`
- short表示范围为-32768~+32767,unsigned short无符号版本为0~65535(注意unsigned单独出现为unsigned int的缩写)
- 运算超出范围会变成另一端short的32767加1变成了-32768
- 程序中的int在32位系统上移植到16位系统上内存减半,反之加倍
- 十进制基数为10第一位为1~9,八进制基数为8第一位为0后面1~7:042(是4x8+2=34),16进制基数为16前两位为0x如0x42(4x16+2=66),存在计算机中都为2进制

```
int chest=42;  
int waist=0x42;  
int inseam =042;	直接输出就是十进制
```
- 输入十进制输出其他进制用hex或者oct

```
int chest=42;  
int waist=42;  
int inseam=42;  
//直接输出十进制  
cout<<"chest="<<chest<<endl;  
//使用hex输出16进制  
cout<<hex; //实际上是一条消息,告诉cout采用什么行为
cout<<"waist="<<waist<<endl;  
//输出八进制。
cout<<oct;
cout<<"inseam="<<inseam<<endl;
```
- 20220LL为long long类型 ;202919UL为unsigned long类型
- cout.put()为ostream类的成员函数打印字符
- Release2.0之前:字符变量(char ch)输出为字符,字符常量(M.N.P..)输出为数字  

```
cout<<'$'显示ASCII码
cout.put('$');显示

```
- 宽体字符wchar_t可以表示更长的字符如日语汉字等
  
```
wchar_t bot=L'P';//wchar_t为宽字符类型 常量前L表示宽常量
wcout<<L"tall"<<endl; //用wcout来处理上面类型的输出

```
- const限定符:指出常量表示的内容
建议直接赋值`const int toes=10`,先声明值就固定了,分开赋值不好    
- 为什么是const而不是#define
 - 他能够明确指定类型
 - 可以将定义限定在特定函数或文件中
 - 可用于更复杂的类型 数据结构中
 - 可以声明数组的长度
- 浮点数分成两部分存储,一部分存值,一部分存所放的大小
- cout.setf()设置输出用定点表示法self(long,long)第一个参数ios_base::fixed表示显示浮点数,第二个参数ios_base::floatfield表示保留6位小数.通常cout输出33333.250000显示为33333.25调用cout.setf()会覆盖这种行为.

```
cout.setf(ios_base::fixed,ios_base::floatfield);
cout<< "balabalab";

```
- 用{ }定义时的类型转换  

```
const int code=66;
int x=66;

char c1{23324}; //类型int往小char转换 不行
char c2 = {66}; //可以 放得下66
char c3{code};	//可以
char c4 ={x};		//不行 x非限定not constant,被视为变量,值可能无限大

x=32213;
char c5 =x;		//可以 这是传统的定义方法
```

# chapter4


