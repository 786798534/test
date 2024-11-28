#define _CRT_SECURE_NO_WARNINGS //vs环境下才会有(scanf需要)
#include<stdio.h>
#include<string.h>

//int main()
//{
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//		return 0;
//
//}


//类型
//int main()
//{
//	printf(" % zu\n", sizeof(int));
//	printf(" % zu\n", sizeof(long));
//	printf(" % zu\n", sizeof(short));
//	printf(" % zu\n", sizeof(char));
//	printf(" % zu\n", sizeof(float));
//	printf(" % zu\n", sizeof(double));
//}
//sizeof为类型大小，是大小单位,bit为比特位，byte字节，kb,mb,gb,tb,pb
//一个比特位为一个0，八个0合起来为一个字节，1024个字节为一个kb
//sizeof(long)>=sizeof(int),空间大了存放的个数多（大小不同表示范围不同，更加贴切）


//变量和常量
//全局变量{}外定义，局部变量{}内定义
//int main()
//{
//	short age = 20;
//	float  high = 64.5;
//	return 0;
//}
//同一个范围内不能重复定义，当全与局变量名字冲突时，局部优先


//变量的使用
//int main()
//{
//	int a =5 ;  //最好一开始就初始化
//	int b = 4;
//	scanf("%d %d", &a,&b);
//	int sum = a+b;
//	printf("%d\n",sum);//&sum是sum的变量地址，不是变量，要输出变量值应该是sum（整数可以输入到变量地址，而数才能输出到变量里）
//
//	return 0;
//}
//在vs安装路径下有个newc++file.cpp文件，在vs工程中创建.c或.cpp都是拷贝newfile.cpp文件


//变量的作用域和生理周期
//extern int a; //include是文件和extern是声明变量
//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("a = %d", a);
//	return 0;
//}
// 全局a的作用域是整个工程，可以随便用，别的c文件里的话，需要声明extern int a；
// 局部a的作用域是局部变量所在的范围，{}内


//常量：字面常量、const修饰、#define定义标识符、枚举常量（常量不可以更改）
//
//#define MAX 100
//#define STR "acf"//定义的字符串%s
//enum Color  //枚举常量为E，R，T
//{E,R,T};
//int main()
//{
//	30;//整型常量（字面常量）
//	'W';//字符常量（单引号）
//	"abc";//字符串常量（双引号）
//
//	int a = 10;//变量，可以直接a =20；改变a值
//	const int a = 10;//const修饰的常变量，本质是变量，但不能修改
//
//	int arr[10];//定义数组，必须是常量
//	const int n = 10;
//	int arr[n];//n本质是变量，有常量属性，但不能作为常量放在n
// 
//	printf("%d", MAX);//define定义的标识符常量，不可以被改
//
//	enum Color c = R;//枚举常量,当用类型创建变量时向内存申请了空间用于变量储存，enum只是枚举出来类型不占内存
//	return 0;
//}


//字符
//int main()
//{
//	char ch = 'W';//将w字符存到ch里
//	char sh = "sdfww";//双引号就是字符串，char时字符类型
//	char arr1[] = "abcdef";//创建一个数组时字符串数组，[]可以不写数字，自动根据后面数字生成
//	                        //字符串结束标志是\0，每个最后都有一个
//	char arr2[] = { 'a','b','c' };//里面没有\0，只有三个
//	printf("%s", arr2);//会一直打印到最后找到\0再停止：abc....acfa
//
//	int len1 = strlen(arr1);//求字符串长度，也是一直找到\0在停止，(string length)，头文件<string.h>
//	int len2 = strlen("abc");//abc已经是字符串，末尾有隐藏的\0,但不算字符串长度，但是空格也算长度1，一个转义字符是一个长度，
//	return 0;
//}

//转义字符：\n换行、\0是字符串结束标志
//int main()
//{
//	//printf("abc\0efg");//输出abc，因为检测到字符串结束字符了
//	//printf("%d %f %lf %s %c %zu");//整形，float数据，double数据，字符串，字符
//	//int a, b;
//	//scanf(" %d....%d",&a,&b);//@@@@@@@@@@@
//	//printf("%d,%d",a,b);
//	printf("\a");  //printf必须加“”才能输出
//	return 0;
//}
//  \?：打印三字母词防止??)变成],保留?
//  \'：转变单引号，让它只是单引号
//  \"：转变双引号
//  \\：转变成\，没有其他功能
//  \a：蜂鸣
//  \n：换行
//  \t：水平制表符，和tab一样
//  \r：回车
//  \ddd:ddd表示一到三个数字，八进制的值转化为十进制之后得到的数字---》对应ASCII码的值（0-127）
//  \xdd:十六进制数


//注释
//  /* 。。。。。  */ 不支持嵌套注释 或 //


//选择语句：if/switch
//int main()
//{
//	if (y)
//	{
//	};
//	else
//	{
//	};
//	return 0;
//
//}
////循环语句：while/for/do...while
//int main()
//{
//	int line = 0;
//	while (line <= 20000)
//	{
//		line++;
//	}
//
//	return 0;
//}


//函数
//int Add(int x, int y)//返回类型 函数名 函数参数（形参）
//{                       //函数体
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 1, b = 2;
//	int c;
//	c = Add(a, b);//（实参）
//	printf("%d",c);
//	return 0;
//}


//数组
//int main()
//{
//	int www[10] = { 1,2,3,4,5,6,7,7,7, };//序号是0开始，数组的下标
//  int fff[4 + 6] = {0}; 可以初始化,只初始化了第一个，其他默认为0
// 如果未初始化，将是随机值，初始化了第一个没其他也都是0
// 
//  C99之前可以用上面表示，不能用下面表示
//  int a = 10;
//  int fww[a];
// C99之后可以变量定义数组，但是不能初始化；
// vs不支持变长数组，不打支持C99
// 
//	printf("%d",www[2]);
//	return 0;
//
//}

//学习Git
//笔试环节采用OJ形式：IO型/接口型

//操作符
// 
//运算操作符:+ - * /取整：除都是整数的时候，执行整数除法，只要有一个2.0就是浮点数float   %取模(余数):两端必须都是整数
// 位操作符：与或非 /移位操作符：二进制计算>>   <<   
// 
//赋值操作符：
// int a = 1；初始化
// a = 1；赋值
// =赋值
// a = a + 3；
// a +=3;
// +=   -= *= /= &= ^=  |=  >>= <<=
// 
//单目操作符：（只有一个操作数）：！反操作，0为假，非0为真，if(真)才继续执行，a=0，if(!a)就可以执行
// -负数，+什么都不变，&取址
// sizeof操作数类型长度(以字节为单位)：sizeof（a）=4整型变量，sizeof（int）=4整形类型，a也可以不加（），int不可以去掉
//后置加加：先使用后++(本身加)；前置加加：先本身加加，再使用
//int a = 10;
//int b = a++;
//int c = ++a;
//a = 11,b = 10,c = 11;
//(类型)：int a = 3.14;出现字面浮点是默认a为double类型
//        int a = (int)3.14;强制执行为整数3
//
//关系操作符：
// >  >=  <=  ==  !=不等于
//
//逻辑操作符：
// ||逻辑或：或者    &&逻辑与：并且
//
//条件操作符：（三目）
//exp1 ? exp2 : exp3    1为真，2成立，1为假，3成立
//
//逗号表达式：由逗号隔开的，从左向右依次计算，整个表达式结果是最后表达式的结果
// int d = (c = b-a, a = c + b,c-3);最后d=c-3

