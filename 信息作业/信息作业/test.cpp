#define _CRT_SECURE_NO_WARNINGS 1

//实例5
#include<stdio.h>
int main()
{
	char ch1, ch2;
	printf("请输入一个小写字母:\n");
	ch1 = getchar();
	ch2 = ch1 - 32;
	printf("对应的大写字母:");
	putchar(ch2);
	return 0;
}

//实例6
#include<stdio.h>
int main()
{
	char ch1, ch2, ch3, ch4, ch5;
	printf("请输入要加密的单词:\n");
	scanf("%c%c%c%c%c", &ch1, &ch2, &ch3, &ch4, &ch5);
	printf("加密后:%c%c%c%c%c\n", ch1 + 5, ch2 + 5, ch3 + 5, ch4 + 5, ch5 + 5);
	return 0;
}

//实例7
#include<stdio.h>
int main()
{
	int n;
	double r, c, d;
	printf("请输入存款金额:\n");
	scanf("%lf", &c);
	printf("请输入存款年限:\n");
	scanf("%d", &n);
	printf("请输入存款年利率:\n");
	scanf("%If", &r);
	d = c + c * r * r * n;
	printf("%d年后的本金和利息之和为:%.2lf元\n", n, d);
	return 0;
}

