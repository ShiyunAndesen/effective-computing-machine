#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
//static 保存使用上一次循环的值
//static修饰局部变量，局部变量生命周期变长
void test()
{
	static int a = 1;//a是一个静态的局部变量
	a++;
	printf("a=%d\n", a);//2，3，4，5，6
	//删去static得2，2，2，2，2
}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}

int main()
{
	extern int g_val;
	printf("g_val=%d\n", g_val);//无法解析外部符号/指令
	return 0;
}

extern int Add(int, int);
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum=%d\n", sum);//无法解析外部符号/指令
	return;
}

//#define 定义常量和宏
#define Max 100//define 定义标识符常量
int main()
{
	int a = Max;
	return 0;
}

int Max(int x, int y)//函数的实现
{
	if (x > y)
		return x;
	else
		return y;
}

#define MAX(X,Y) (X>Y?X:Y)//宏的定义
int main()
{
	//int a=MAX;
	int a = 10;
	int b = 20;
	//函数方式
	int max = MAX(a, b);
	printf("max=%d\n", max);//max=20
	max = MAX(a, b);
	//函数方式
	printf("max=%d\n", max);//max=(a>b?a:b)//max=20
	return 0;
}

int main()
{
	int a = 10;//4个字节
	int* p = &a;//int*是p的存放类型
	//寻找a的地址
//	printf("%p\n", & a);
//	printf("%p\n", p);
	*p = 20;//*—解引用操作符/间接访问操作符
	printf("a=%d\n", a);//a=20
	return 0;
}

//指针变量的大小
int main()
{
	printf("%d\n", sizeof(char/short / int / double));
	return 0;
}

//结构体（struct)—复杂对象
struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};
int main()
{
//struct 利用结构体类型——创建一个该类型的结构体函数
 struct Book b1 = { "C语言程序设计"，55 };//(???
 printf("书名：%s\n", b1.name);
 /printf("价格:%d\n", b1.price);
		return 0;
}
*/

