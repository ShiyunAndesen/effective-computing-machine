#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
/*
//������Ƕ�׵��ú���ʽ���ʣ�����֮���ǿ����л���ϵģ�
//Ƕ�׵���
void new_line()
{
	printf("hehe\n");
}
void three_line()
{
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		new_line();
	}
}
int main()
{
	three_line();
	return 0;
}

//��ʽ���ʣ���һ�������ķ���ֵ��Ϊ��һ�������Ĳ�����
int main()
{
	int len = 0;
	//1
	len = strlen("abc");
	printf("%d\n", len);
	//2
	printf("%d\n", strlen("abc"));//��ʽ����
	return 0;
}

int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	//printf��ӡ���Σ�int��������ֵ��ÿһ�������ĺ������ش�ӡ���ַ�����
	return 0;
}
*/
//�����������Ͷ���
//��������
//1.���߱�������һ��������ʲô��������ʲô������������ʲô�����Ǿ����ǲ��Ǵ��ڣ��޹ؽ�Ҫ
//2.����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ��
//3.����������һ��Ҫ����ͷ�ļ���
//�������壺�����Ķ�����ָ�����ľ���ʵ�֣����������Ĺ���ʵ��

//��������
//int Add(int, int);
#include"Add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);
		printf("%d\n", sum);
	return 0;
}
