#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 1, i = 1, sum = 0, s;
//	float ave = 0.0;
//	printf("�������ѧ���ĳɼ��ܺͺ�ƽ��ֵ\n");
//	while (n <= 4)
//	{
//		i = 1;
//		printf("\n�������%d��10��ѧ���ĳɼ�\n", n);
//		while (i <= 10)
//		{
//			printf("�������%d��ѧ���ĳɼ�:", i);
//			scanf("%d", &s);
//			sum += s;
//			i++;
//		}
//		n++;
//		ave = sum / 10.0;
//		printf("10��ѧ���ĳɼ��ܺ���%d��ƽ���ɼ���%.2f", sum, ave);
//	}
//	return 0;
//}
//
//int main()
//{
//	int n, i = 1, sum = 0, s;
//	float ave = 0.0;
//	printf("�������ѧ���ĳɼ��ܺͺ�ƽ��ֵ\n");
//	for (n = 1;n <= 4;n++)
//	{
//		i = 1;
//		printf("\n�������%d��10��ѧ���ĳɼ�\n", n);
//		for (i = 1;i <= 10;i++)
//		{
//			printf("�������%d��ѧ���ĳɼ�:", i);
//			scanf("%d", &s);
//			sum += s;
//		}
//		ave = sum / 10.0;
//		printf("10��ѧ���ĳɼ��ܺ���%d��ƽ���ɼ���%.2f", sum, ave);
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 1, i = 1, sum = 0, s;
//	float ave = 0.0;
//	printf("�������ѧ���ĳɼ��ܺͺ�ƽ��ֵ\n");
//	while (n <= 4)
//	{
//		i = 1;
//		printf("\n�������%d��10��ѧ���ĳɼ�\n", n);
//		for (i = 1;i <= 10;i++)
//		{
//			printf("�������%d��ѧ���ĳɼ�:", i);
//			scanf("%d", &s);
//			sum += s;
//		}
//		n++;
//		ave = sum / 10.0;
//		printf("10��ѧ���ĳɼ��ܺ���%d��ƽ���ɼ���%.2f", sum, ave);
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
			printf("%d������Ϊ:", n);
			for (i = 1;i < n;i++)
				if (n % i == 0)
					printf("%d ", i);
			printf("\n");
		}
	}
	return 0;
}