#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
#include "add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}

//�����ݹ飺�����������ı�̼��ɳ�Ϊ�ݹ飨recirsion����//�ݹ����Ҫ˼����ʽ���ڣ��Ѵ��»�С
//�ݹ���Ϊһ���㷨�ڳ�����������й㷺Ӧ�á��������Լ������Լ���
// һ�����̻������䶨���˵����������ֱ�ӻ��ӵ��������һ�ַ�������ͨ����һ�����͸��ӵ�������ת��Ϊһ����ԭ�������ƵĹ�ģ��С����������⣬�ݹ����ֻ�������ĳ���Ϳ������������������Ҫ�Ķ���ظ����㣬���ļ����˳���Ĵ�������

//�ݹ��������Ҫ������
//���������������������������������ʱ�򣬵ݹ�㲻�ټ���
//ÿ�εݹ����֮��Խ��Խ�ӽ������������

//����һ������ֵ���޷���),����˳���ӡ����ÿһλ���������룺1234�������1 2 3 4 
int main()
{
	printf("hehe\n");//stack overflow --ջ�����ջ�����ֲ������������βΣ�
	main();
		return 0;
}

void print(int n)//1234
{
	if (n > 9)//����������������ջ���
	{
		print(n / 10);//
	}
	printf("%d", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);//1234
	//�ݹ�
	print(num);
}
*/
//��д��������������ʱ���������ַ����ĳ���
#include<string.h>
int my_strlen(char* str)//'str'�����е�һ���ַ��ĵ�ַ
{
	//int count = 0;//��������ʱ����
	//while (*str != '0')
	//{
	//	count++;
	//	str++;
	//}
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
int main()
{
	char arr[] = "bit";
	// int len=strlen(arr);//���ַ�������
    //printf("%d\n",len)
	int len = my_strlen(arr);//arr�����飬���鴫�� ����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
	printf("len=%d\n", len);
}