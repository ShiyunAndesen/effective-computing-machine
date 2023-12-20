#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 1, i = 1, sum = 0, s;
//	float ave = 0.0;
//	printf("计算各组学生的成绩总和和平均值\n");
//	while (n <= 4)
//	{
//		i = 1;
//		printf("\n请输入第%d组10名学生的成绩\n", n);
//		while (i <= 10)
//		{
//			printf("请输入第%d名学生的成绩:", i);
//			scanf("%d", &s);
//			sum += s;
//			i++;
//		}
//		n++;
//		ave = sum / 10.0;
//		printf("10名学生的成绩总和是%d，平均成绩是%.2f", sum, ave);
//	}
//	return 0;
//}
//
//int main()
//{
//	int n, i = 1, sum = 0, s;
//	float ave = 0.0;
//	printf("计算各组学生的成绩总和和平均值\n");
//	for (n = 1;n <= 4;n++)
//	{
//		i = 1;
//		printf("\n请输入第%d组10名学生的成绩\n", n);
//		for (i = 1;i <= 10;i++)
//		{
//			printf("请输入第%d名学生的成绩:", i);
//			scanf("%d", &s);
//			sum += s;
//		}
//		ave = sum / 10.0;
//		printf("10名学生的成绩总和是%d，平均成绩是%.2f", sum, ave);
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 1, i = 1, sum = 0, s;
//	float ave = 0.0;
//	printf("计算各组学生的成绩总和和平均值\n");
//	while (n <= 4)
//	{
//		i = 1;
//		printf("\n请输入第%d组10名学生的成绩\n", n);
//		for (i = 1;i <= 10;i++)
//		{
//			printf("请输入第%d名学生的成绩:", i);
//			scanf("%d", &s);
//			sum += s;
//		}
//		n++;
//		ave = sum / 10.0;
//		printf("10名学生的成绩总和是%d，平均成绩是%.2f", sum, ave);
//	}
//	return 0;
//}

int main()
{
	int i, n, s;
	for (n = 2;n <= 1000;n++)
	{
		s = 0;
		for (i = 1;i < n;i++)
			if (n % i == 0)
				s += i;

		if (s == n)
		{
			printf("%d的因子为:", n);
			for (i = 1;i < n;i++)
				if (n % i == 0)
					printf("%d ", i);
			printf("\n");
		}
	}
	return 0;
}