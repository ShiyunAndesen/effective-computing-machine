#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*
#define Max 10//#define定义的标识符常量
int main()
{
	int arr[Max] = { 10 };
	printf("%d\n", Max);
	return 0;
}
*/
//枚举常量
/*
enum Sex//枚举关键 enum
{
	MALE,
	FEMALE,
	SECRET,
};
int main()
{
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n",SECRET);//2
	return 0;
}
*/
/*存在语法错误代码块
enum Color
{
	RED,
	YELLOW,
	BLUE,
};
int main()
{
	enum Color color = BLUE,
		color = YELLOW,
		return 0;
}
*/
/*
int main()
{
	char arr1[] = "a,b,c";
	char arr2[] = { 'a','b','c',0};// \0--字符串的结束标志
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}
*/
/*
#include<string.h>
int main()
{
	char arr1[] = "a,b,c";//3
	char arr2[] = { 'a','b','c' };//随机值
	printf("%d\n", strlen(arr1));//strlen 计算字符串长度的，引用头文件#include<string.h>
	//strlen函数
	//用于计算一个字符串中元素的个数，即从数组头部计算，直到遇到字符串结束符'\0'为止（不包括0 ）
	printf("%d\n", strlen(arr2));
	return 0;
}
*/
