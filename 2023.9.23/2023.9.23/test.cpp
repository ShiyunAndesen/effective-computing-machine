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

 //д���뽫����������С���//???
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

//дһ�������ӡ1-100֮������3�ı���������
int main()
{
	int i = 0;
	for (i = 1;i <= 100;i++)
	{
		if (i % 3 == 0)//'%'ȡģ��i%3����������Ϊ0
			printf(" % d", i);
	}
	return 0;
}

//���������������������������Լ��
int main()
{
	int m = 24;
	int n = 8;
	//m,nΪ���������ǹ̶�������
	int r = 0;
	scanf("%d %d", &m, &n);
	while(r=m%n)
	{
		//շת������������������Ϊ0)???
		m = n;
		n = r;
	}
	printf("%d\n", n);
	return 0;
}
*/
//��ӡ1000��2000֮�������
//�ж�year�Ƿ�Ϊ���ꡣ�ܱ�4�������Ҳ��ܱ�100����/�ܱ�400����
int main()
{
	int year = 0;
	int count = 0;//count ���������...����Ŀ
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

