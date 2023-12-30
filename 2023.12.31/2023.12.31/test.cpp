#include<stdio.h>
//当一个函数的参数部分为一级指针时，函数能接受什么参数
//void test1(int* p)
//{}
//void test2(char* p)
//{}
//int main()
//{
//	int a = 0;
//	int* p1 = &a;
//	test1(&a);//ok
//	test1(p1);//ok
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);//ok
//	test2(pc);//ok
//	return 0;
//}
//当一个函数的参数部分为二级指针时，函数能接受什么参数
//void test(int**p)
//{}
//int main()
//{
//	int* prt;
//	int** pp = &prt;
//	test(&prt);
//	test(pp);
//	int* arr[10];
//	test(arr);//指针数组也可以
//	return 0;
//}

//函数指针
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return 0;
//}
//int main()
//{
//	/*int a = 10;
//	int b = 20;*/
//	//int arr[10] = { 0 };
//	
//	//printf("%d\n", Add(a, b));//0
//	//printf("%p\n", &Add);//00007FF61EE413D9
//	//printf("%p\n", Add);//00007FF61EE413D9
//	////&Add <=> Add  &函数名 和 函数名都是函数的地址
//	//return 0;
//
//	//int(*p)[10] = &arr;
//	int(*pa)(int,int) = Add;
//	printf("%d\n",(*pa)(2, 3));//5
//	return 0;
//}

//void print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = print;
//	(*p)("hello bit");
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (pa)(2, 3));//5
//	printf("%d\n", (*pa)(2, 3));//5
//	printf("%d\n", Add(2, 3));//5
//	return 0;
//}

//函数指针数组
int Add(int x, int y)
{	return x + y;}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	//指针数组
	int* arr[5];
	int (*pa)(int, int) = Add;//Sub/Mul/Div
	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };
	int i = 0;
	for (i = 0;i < 4;i++)
	{
		printf("%d\n", parr[i](2, 3));//5 -1 6 0
	}
	return 0;
}