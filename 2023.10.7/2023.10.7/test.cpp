#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ݹ�͵���//???
/*
//��n�Ľ׳ˣ������������
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
	//��n�Ľ׳�
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Facl1(n);
	printf("%d\n", ret);
	return 0;
}
*/
//���n�����������������������
//1��1��2��3��5��8��13��21��34��55

//int Fib(int n)
//{
//	int count = 0;
//	if (n == 3)//���Ե�������������
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
//���ݹ��Ϊ�ǵݹ�
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

//��ŵ������
using namespace std;
int sum = 0;//�����ۼ�
int hanoi(int n, int a, int b, int c)
//������  ��ʼ1  Ŀ��3  �ݴ�2
{
	if (n == 1)
	{
		sum++;
		

//������̨������