#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//  'string'�����ַ���
//��дһ����������һ����д��ĸ������ת��Ϊ��Ӧ��Сд��ĸ��������������Ҫ������˵��
//1
int main()
{
	char c1, c2;
	printf("����������һ����д��ĸ��\t");
		scanf("%c",&c1);
	c2 = c1 + 32;//��д��ĸ��>Сд��ĸ  +32
		printf("�ô�д��ĸ��Сд��ĸΪ��%c\t", c2);//'%t'��һ����ʽ�����ַ������ڿ���������ĸ�ʽ 
	return 0;
}