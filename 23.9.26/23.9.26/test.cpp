#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//�⺯��
/*
int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);
	printf("%s\n", arr);
	return 0;
}

int main()
{
	char arr1[] = "bit";
	char arr2[] = "######";
	strcpy(arr2, arr1);//strcpy--�ַ�������
	printf("%s\n", arr2);
	return 0;
}

//дһ�����������ҳ����������е����ֵ
 int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);
	printf("max=%d\n", max);
	return 0;
}
*/
//дһ���������Խ����������α����ı���
void swap2(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n", a, b);
	swap2(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}