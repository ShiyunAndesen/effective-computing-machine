#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����������������Զ���10��ѧ�������䣬���򣫵���
//#define N 10
//int main()
//{
//	int i, j, k, a[N];
//	printf("������10��ѧ�������䣺\n");
//	for (i = 0;i < N;i++)   //ѭ������10�����ݣ��洢��a[i]
//		scanf("%d", &a[i]);
//	for (j = 0;j < 9;j++)   //��ѭ�������10����
//	{
//		for(i=0;i<9-j;i++)  //��ѭ�����Ƚϴ�С9��
//			if (a[i] > a[i + 1])
//			{
//				k = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = k;
//			}
//	}
//	printf("С��������:\n");
//	for (i = 0;i < N;i++)
//		printf("%d", a[i]);
//	printf("\n");
//	printf("��С����:\n");
//	for (i = 9;i >= 0;i--)
//		printf("%d", a[i]);
//}

//����ָ��
//int main()
//{
//	int* p = NULL;//����ָ��
//	char* pc = NULL;//�ַ�ָ��
//	int arr[10];
//	//arr--��Ԫ�ص�ַ
//	//&arr[0]--��Ԫ�ص�ַ
//	//&arr--����ĵ�ַ
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//����ĵ�ַҪ������
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		//printf("%d ", (*pa)[i]);
//		//printf("%d ",*pa);
//		printf("%d ", *(*pa+i));
//
//		//(*pa)[i] <=> *(*pa+i)
//	}
//}

void print1(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < x;i++)
	{
		for (j = 0;j < y;j++)
		{
			//printf("%d", arr[i][j]);
			//printf("%d", *(*(arr+i)+j));
			//printf("%d", (*(arr + i))[j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7 } };
	print1(arr, 3, 5);
	return 0;
}