#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
#include "add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}

//函数递归：程序调用自身的编程技巧称为递归（recirsion）。//递归的主要思考方式在于：把大事化小
//递归作为一种算法在程序设计语言中广泛应用。（程序自己调用自己）
// 一个过程或函数在其定义或说明过程中有直接或间接调用自身的一种方法，它通常把一个大型复杂的问题层层转化为一个与原问题相似的规模较小的问题来求解，递归策略只需少量的程序就可描述出解题过程所需要的多次重复计算，大大的减少了程序的代码量。

//递归的两个必要条件：
//存在限制条件，当满足这个限制条件的时候，递归便不再继续
//每次递归调用之后越来越接近这个限制条件

//接受一个整形值（无符号),按照顺序打印它的每一位。例如输入：1234，输出：1 2 3 4 
int main()
{
	printf("hehe\n");//stack overflow --栈溢出（栈区：局部变量，函数形参）
	main();
		return 0;
}

void print(int n)//1234
{
	if (n > 9)//有限制条件，不会栈溢出
	{
		print(n / 10);//
	}
	printf("%d", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);//1234
	//递归
	print(num);
}
*/
//编写函数不允许创建临时变量，求字符串的长度
#include<string.h>
int my_strlen(char* str)//'str'数组中第一个字符的地址
{
	//int count = 0;//创建的临时变量
	//while (*str != '0')
	//{
	//	count++;
	//	str++;
	//}
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
int main()
{
	char arr[] = "bit";
	// int len=strlen(arr);//求字符串长度
    //printf("%d\n",len)
	int len = my_strlen(arr);//arr是数组，数组传参 传过去的不是整个数组，而是第一个元素的地址
	printf("len=%d\n", len);
}