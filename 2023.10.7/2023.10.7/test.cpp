#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//递归和迭代//???
/*
//求n的阶乘（不考虑溢出）
int Facl1(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1;i <= n;i++)
	{
		ret *= i;
	}
	return ret;
}
int Fac2(int n)
{
	if (n <= 1)
	return 1;
	else
		return n * Fac2(n - 1);
}
int main()
{
	//求n的阶乘
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Facl1(n);
	printf("%d\n", ret);
	return 0;
}
*/
//求第n个婓波那契数（不考虑溢出）
//1，1，2，3，5，8，13，21，34，55

//int Fib(int n)
//{
//	int count = 0;
//	if (n == 3)//测试第三个婓波那契数
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return 0;
//}
//将递归改为非递归
void test(int n)
{
	if (n < 10000)
	{
		test(n + 1);
	}
}
int main()
{
	test(1);
	return 0;
}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//汉诺塔问题
using namespace std;
int sum = 0;//步数累加
int hanoi(int n, int a, int b, int c)
//盘子数  起始1  目标3  暂存2
{
	if (n == 1)
	{
		sum++;
		

//青蛙跳台阶问题