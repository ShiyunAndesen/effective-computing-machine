#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*
#define Max 10//#define����ı�ʶ������
int main()
{
	int arr[Max] = { 10 };
	printf("%d\n", Max);
	return 0;
}
*/
//ö�ٳ���
/*
enum Sex//ö�ٹؼ� enum
{
	MALE,
	FEMALE,
	SECRET,
};
int main()
{
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n",SECRET);//2
	return 0;
}
*/
/*�����﷨��������
enum Color
{
	RED,
	YELLOW,
	BLUE,
};
int main()
{
	enum Color color = BLUE,
		color = YELLOW,
		return 0;
}
*/
/*
int main()
{
	char arr1[] = "a,b,c";
	char arr2[] = { 'a','b','c',0};// \0--�ַ����Ľ�����־
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}
*/
/*
#include<string.h>
int main()
{
	char arr1[] = "a,b,c";//3
	char arr2[] = { 'a','b','c' };//���ֵ
	printf("%d\n", strlen(arr1));//strlen �����ַ������ȵģ�����ͷ�ļ�#include<string.h>
	//strlen����
	//���ڼ���һ���ַ�����Ԫ�صĸ�������������ͷ�����㣬ֱ�������ַ���������'\0'Ϊֹ��������0 ��
	printf("%d\n", strlen(arr2));
	return 0;
}
*/
