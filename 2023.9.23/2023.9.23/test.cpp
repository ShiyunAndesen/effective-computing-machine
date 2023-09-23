#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
int max(int x, int y)
{
	int m;
	if (x > y)
		m = x;
	else m = y;
	return (m);
}
void main()
{
	int max(int x, int y);
	int a, b, c, d;
	scanf("%d,%d,%d", &a, &b, &c);
	d = max(a, b);
	d = max(d, c);
	printf("max=%d\n", d);
}

 //写代码将三个数按大到小输出//???
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf(" %d %d %d\n", a, b, c);
	return 0;
}

//写一个代码打印1-100之间所有3的倍数的数字
int main()
{
	int i = 0;
	for (i = 1;i <= 100;i++)
	{
		if (i % 3 == 0)//'%'取模，i%3整除的余数为0
			printf(" % d", i);
	}
	return 0;
}

//给定两个数，求这两个数的最大公约数
int main()
{
	int m = 24;
	int n = 8;
	//m,n为变量，而非固定的数字
	int r = 0;
	scanf("%d %d", &m, &n);
	while(r=m%n)
	{
		//辗转相除法（需相除的余数为0)???
		m = n;
		n = r;
	}
	printf("%d\n", n);
	return 0;
}
*/
//打印1000到2000之间的闰年
//判断year是否为闰年。能被4整除并且不能被100整除/能被400整除
int main()
{
	int year = 0;
	int count = 0;//count 计数，清点...的数目
	for (year = 1000;year <= 2000;year++)
	{
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		{
			printf("%d", year);
				count++;
		}
	}
	printf("\n count=%d\n", count);
}

