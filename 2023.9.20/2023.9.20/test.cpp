#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
/*
void main()
{
	int x, y;
	x = -5;
	y = abs(x);
	printf("-5�ľ���ֵΪ��%d\n", y);
}

//do...while����ѭ��
int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			break;//�˴���break��continue��ͬ���Ľ��
		printf("%d\n", i);//1 2 3 4 
		i++;
	} while (i <= 10);
	return 0;
}

//����n�Ľ׳�//ʹ��for/whileѭ��
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);//& ��ȡ����������
	for (i = 1;i <= 10;i++)//n��һ����̬�ľֲ�������n����ʹ����һ��ѭ����ֵ��
	{
		ret = ret * i;//�����ڴ�����һ��ѭ���Ľ����
	}
	printf("ret=%d\n", ret);
	return 0;
}

//����1��+2��+3��....+10!������1��10�Ľ׳�֮�ͣ�
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1;n <= 10;n++);
	{
		ret = 1;//ret��Ҫ����
		for (i = 1;i <= n;i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}
	printf("sum=%d\n", sum);
	return 0;
}
*/
int main()
{
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (i = 1;i <= 10;i++)
	{
		ret = ret * i;
		sum = ret + sum;
	}
	printf("sun=%d\n", sum);//sum=4031973
	return 0;
}