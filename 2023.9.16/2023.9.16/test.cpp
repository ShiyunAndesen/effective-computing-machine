#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
//static ����ʹ����һ��ѭ����ֵ
//static���ξֲ��������ֲ������������ڱ䳤
void test()
{
	static int a = 1;//a��һ����̬�ľֲ�����
	a++;
	printf("a=%d\n", a);//2��3��4��5��6
	//ɾȥstatic��2��2��2��2��2
}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}

int main()
{
	extern int g_val;
	printf("g_val=%d\n", g_val);//�޷������ⲿ����/ָ��
	return 0;
}

extern int Add(int, int);
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum=%d\n", sum);//�޷������ⲿ����/ָ��
	return;
}

//#define ���峣���ͺ�
#define Max 100//define �����ʶ������
int main()
{
	int a = Max;
	return 0;
}

int Max(int x, int y)//������ʵ��
{
	if (x > y)
		return x;
	else
		return y;
}

#define MAX(X,Y) (X>Y?X:Y)//��Ķ���
int main()
{
	//int a=MAX;
	int a = 10;
	int b = 20;
	//������ʽ
	int max = MAX(a, b);
	printf("max=%d\n", max);//max=20
	max = MAX(a, b);
	//������ʽ
	printf("max=%d\n", max);//max=(a>b?a:b)//max=20
	return 0;
}

int main()
{
	int a = 10;//4���ֽ�
	int* p = &a;//int*��p�Ĵ������
	//Ѱ��a�ĵ�ַ
//	printf("%p\n", & a);
//	printf("%p\n", p);
	*p = 20;//*�������ò�����/��ӷ��ʲ�����
	printf("a=%d\n", a);//a=20
	return 0;
}

//ָ������Ĵ�С
int main()
{
	printf("%d\n", sizeof(char/short / int / double));
	return 0;
}

//�ṹ�壨struct)�����Ӷ���
struct Book
{
	char name[20];//C���Գ������
	short price;//55
};
int main()
{
//struct ���ýṹ�����͡�������һ�������͵Ľṹ�庯��
 struct Book b1 = { "C���Գ������"��55 };//(???
 printf("������%s\n", b1.name);
 /printf("�۸�:%d\n", b1.price);
		return 0;
}
*/

