#include<stdio.h>
//NULL--������ʼ��ָ��ģ���ָ�븳ֵ
//int main()
//{
//	//int b = 0;
//	int a = 10;
//	int* pa = &a;//��ʼ��
//	//int* p = NULL;//NULL--������ʼ��ָ��ģ���ָ�븳ֵ
//	*pa = 20;
//	pa = NULL;//paû��ָ���κε���Ч�ռ���
//	printf("%d\n", pa);//0
//	return 0;
//}

//ָ������
//����������
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d", *p);
//		//p = p + 1;//12345678910
//		p++;//12345678910
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0;i < 5;i++)
//	{
//		printf("%d", *p);
//		//p += 2;//1 3 5 7 9
//		p-=2;//10 8 6 4 2
//	}
//	return 0;
//}
//#define IN_VALUES 5
//int main()
//{
//	float values[IN_VALUES];
//	float* vp;
//	for (vp = &values[0];vp < &values[IN_VALUES];)
//	{
//		*vp++=0;
//	}
//	printf("%f\n", vp);//0.000000
//	return 0;
//}
//ָ��-ָ�� //������м�Ԫ�صĸ���
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//9
//	printf("%d\n", &arr[0] - &arr[9]);//-9
//	//printf("%d\n", &arr[9] - &ch[0]);//err //��Ҫͬ���͵ĺ������
//	return 0;
//}


//���ַ�������
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);//3
//	return 0;
//}


//ָ�������
//int main()
//{
//	//int arr[10] = { 0 };
//	//printf("%p\n", arr);//0000005AFF1EF8A8
//	//printf("%p\n", &arr[0]);//0000005AFF1EF8A8
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//ָ����������Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d", *(p + i));//12345678910
//	}
//	return 0;
//}
//����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//����ָ��
//	//int*** ppa = &ppa;//����ָ��
//	**ppa = 20;
//	printf("%d\n", **ppa);//20
//	return 0;
//}
//ָ������
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a,&b,&c };//ָ������
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		printf("%d", *(arr[i]));//102030
	}
	return 0;
}