#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��ð�������10������������С����ıȽ�
//int main()
//{
//	int i, j, n, arr[10];
//	printf("������10��������\n");
//	for (i = 0;i < 10;i++)
//		scanf("%d", &arr[i]);
//	for(i=0;i<9;i++)
//		for (j = 0;j < 9;j++)
//		//{
//			if(arr[j]>arr[j+1])
//			{
//				n = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = n;
//			}
//		//}
//	for (j = 0;j < 10;j++)
//	{
//		//scanf("%d", &arr[j]);
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}

//��ѡ�񷨶�10������������С����ıȽ�
//int main()
//{
//	int i, j, n,arr[10];
//	printf("������10��������\n");
//	for (i = 0;i < 10;i++)
//	{
//		printf("�������%d������", i + 1);//!!!
//		scanf("%d", &arr[i]);
//	}
//	for (i =1;i < 10;i++)
//		for (j = 0;j < 9;j++)
//			//{
//			if (arr[j] > arr[i])
//			{
//				n = arr[j];
//				arr[j] = arr[i];
//				arr[i] = n;
//			}
//	//}
//	for (j = 0;j < 10;j++)
//	{
//		//scanf("%d", &arr[j]);
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}

//���������ָ�����
//#include<math.h>
//test(int arr[])
//test(int arr[10])
////һά����Ĳ�������������Ҳ������ָ�루�����С����ʡ�ԣ�
//test(int* arr)
//test2(int* arr[20])
//test2(int** arr)
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}

//��ά���鴫��
//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
////void test2(int arr[3][])//err
////{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	test1(arr);
//	//test2(arr);
//	return 0;
//}

//void test(int* arr)//err
//{}
//void test(int* arr[5])//err
//{}
//void test(int(*arr)[5])
//{}
//void test(int**arr)
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}

//һά���鴫��
void print(int* p, int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d\n", *(p + 1));
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(p, sz);
	return 0;
}