#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
//��Ŀ������ sizeof ���������������ռ�ռ�Ĵ�С����λ���ֽڣ�
int main()
{
	int a = 0;//int ����Ϊ4���ֽ�
	printf("%d\n", sizeof(a));//4
	printf("%d\n", sizeof(int));//4
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//40=10��Ԫ��*4���ֽ�
	//���������Ԫ�ظ��������������С�ĵ�λ���ֽڣ�
	//����=�����ܴ�С/ÿ��Ԫ�صĴ�С printf("%d\n",sizeof(arr)/sizeof(arr[0]));

	return 0;
}

int main()
{
	int arr[10] = { 0 };
	int sz = 0;
	printf("%d\n", sizeof(arr));//40���ܹ����ֽڴ�С��
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz=%d\n", sz);//10(������
	return 0;
}

//~��һ������λȡ���������ƣ� ???�����
int main()
{
	int a = 0;
	int b = ~a;
	printf("%d\n", b);//-1
	return 0;
}

//++��--  ǰ�� ����
//����++/--����ʹ�ã���++/--
//ǰ��++/--����++/--����ʹ��
int main()
{
	int a = 10;
	int b = a++;//a=11,b=10
	//int b = ++a;//a=11,b=11
	//int b = a--;//a=9,b=10
	//int b = --a;//a=9,b=9
	printf("a=%d b=%d\n", a, b);
	return 0;
}

//�߼�������
// && �߼��룺ͬ����棨1����һ��ȫ�٣�0��
// || �߼���һ����棨1����ȫ�ٲż٣�0��
int main()
{
	int a = 3;
	int b = 5;
	int c = a && b;//a,b�Ƿ�ֱ�Ϊ3,5������Ϊ�� ����Ϊ��
	//int c=a||b;
	return 0;
}

//����������/��Ŀ������ exp1?exp2:exp3--exp1Ϊ�棬ִ��exp2��exp1Ϊ�٣�ִ��exp3
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	max = (a > b ? a : b);//���������� �ж�a,b��С
	if (a > b)
		max = a;
	else
		max = b;
	printf("%d\n", max);
	return 0;
}

//�������ã���
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);//()--��������
	printf("%d\n", sum);//30
	return 0;
}
*/
int main()
{
	int a = 10;
	return 0;
}
