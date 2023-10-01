#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
/*
//函数的嵌套调用和链式访问（函数之间是可以有机组合的）
//嵌套调用
void new_line()
{
	printf("hehe\n");
}
void three_line()
{
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		new_line();
	}
}
int main()
{
	three_line();
	return 0;
}

//链式访问（把一个函数的返回值作为另一个函数的参数）
int main()
{
	int len = 0;
	//1
	len = strlen("abc");
	printf("%d\n", len);
	//2
	printf("%d\n", strlen("abc"));//链式访问
	return 0;
}

int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	//printf打印整形（int），返回值：每一个这样的函数返回打印的字符个数
	return 0;
}
*/
//函数的声明和定义
//函数声明
//1.告诉编译器有一个函数叫什么，参数是什么，返回类型是什么。但是具体是不是存在，无关紧要
//2.函数的声明一般出现在函数的使用之前。要满足先声明后使用
//3.函数的声明一般要放在头文件中
//函数定义：函数的定义是指函数的具体实现，交代函数的功能实现

//函数声明
//int Add(int, int);
#include"Add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);
		printf("%d\n", sum);
	return 0;
}
