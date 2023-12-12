#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.使用do....while...计算十名学生成绩的总成绩和平均成绩
//int main()
//{
//	int i = 1, sum = 0, score;
//	float ave;
//	printf("请输入10名学生的成绩：\n");
//	do
//	{
//		printf("%d名学生的成绩：", i);
//		scanf("%d", &score);
//		sum += score;
//		i++;
//	} while (i <= 10);
//	ave = sum / 10.0;
//	printf("总成绩为%d\t平均成绩为%.2f\n", sum, ave);
//	return 0;
//}

//2.使用do-while语句，编程求Sn=ataataaat…+aa·a的值，其中a 
//是一个数字。例如:3 + 33 + 333 + 3333 + 33333 + 333333(此时，a = 6, =3),
//a和n由键盘输入。
//分析 : 。
//该题目可以将数字拆分为a * 10n + 前一个数字，例如 :
//	3 = 3 * 10o + 0 : 默认3的前一个数字为0，也就是没有任何值；
//	33 = 3 * 101 + 3 : 33的前一个数字为3；
//	333 - 3 * 102 + 33 : 333的前一个数字为33；
//	以此类推…
//	所以，在每次循环的时候，需要保存下，上一次结果的值
int main()
{
	int i = 1, a, n, sum = 0, temp = 0;
	printf("input a:\n");
	scanf("%d", &a);
	printf("input n:\n");
	scanf("%d", &n);
	do
	{
		temp = temp * 10 + a;
		sum = sum + temp;//循环求和（逐个求和a,aa,....)
		i++;
	} while (i <= n);
	printf("sum=%d\n", sum);
}