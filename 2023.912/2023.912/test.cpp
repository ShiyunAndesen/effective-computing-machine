#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
//单目操作符 sizeof 计算变量（类型所占空间的大小，单位是字节）
int main()
{
	int a = 0;//int 整型为4个字节
	printf("%d\n", sizeof(a));//4
	printf("%d\n", sizeof(int));//4
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//40=10个元素*4个字节
	//计算数组的元素个数（计算数组大小的单位是字节）
	//个数=数组总大小/每个元素的大小 printf("%d\n",sizeof(arr)/sizeof(arr[0]));

	return 0;
}

int main()
{
	int arr[10] = { 0 };
	int sz = 0;
	printf("%d\n", sizeof(arr));//40（总共的字节大小）
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz=%d\n", sz);//10(个数）
	return 0;
}

//~对一个数按位取反（二进制） ???不理解
int main()
{
	int a = 0;
	int b = ~a;
	printf("%d\n", b);//-1
	return 0;
}

//++，--  前置 后置
//后置++/--：先使用，后++/--
//前置++/--：先++/--，后使用
int main()
{
	int a = 10;
	int b = a++;//a=11,b=10
	//int b = ++a;//a=11,b=11
	//int b = a--;//a=9,b=10
	//int b = --a;//a=9,b=9
	printf("a=%d b=%d\n", a, b);
	return 0;
}

//逻辑操作符
// && 逻辑与：同真才真（1），一假全假（0）
// || 逻辑或：一真才真（1），全假才假（0）
int main()
{
	int a = 3;
	int b = 5;
	int c = a && b;//a,b是否分别为3,5，是则为真 否则为假
	//int c=a||b;
	return 0;
}

//条件操作符/三目操作符 exp1?exp2:exp3--exp1为真，执行exp2；exp1为假，执行exp3
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	max = (a > b ? a : b);//条件操作符 判断a,b大小
	if (a > b)
		max = a;
	else
		max = b;
	printf("%d\n", max);
	return 0;
}

//函数调用（）
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);//()--函数调用
	printf("%d\n", sum);//30
	return 0;
}
*/
int main()
{
	int a = 10;
	return 0;
}
