#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//ð������
void bubble_sort(int arr[], int sz)
{
	//ȷ��ð�����������
	int i = 0;
	for (i = 0;i < sz - 1;i++)
	{
		int flag = 1;//������һ��Ҫ����������Ѿ�����
		//ÿһ��ð������
		int j = 0;
		for (j = 0;j < sz - 1 - i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//�����������ݲ���ȫ����
			}
		}
		if (flag == 1)
		{
			break;//break���ֻ����for��switch��ѭ����䣩
		}

	}
}
int main()
	{
		int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
		int i = 0;
		int sz = sizeof(arr) / sizeof(arr[0]);//sizeof������ ��ʾ�������飬���������������Ĵ�С
		//��arr������������
		bubble_sort(arr, sz);
		for (i = 0;i < sz;i++)
		{
			printf("%d", arr[i]);
		}
	}
	////������
	//int main()
	//{
	//	int arr[10] = { 1,2,3,4,5 };
	//	printf("%p\n", arr);
	//	printf("%p\n", &arr[0]);
	//	//printf("%p\n", arr)<=>printf("%p\n", &arr[0])
	//	printf("%p\n", *arr);//1
	//	printf("%p\n", &arr);
	//	//&  ������������ĵ�ַ��ȡ���������������ַ
	//	return 0;
	//}
	//�Ա�/�Ƚ�
	//int main()
	//{
	//	int arr[10] = { 1,2,3,4,5 };
	//	printf("%p\n", &arr[0]);
	//	printf("%p\n", &arr[0]+1);//һ��Ԫ�� �ĸ��ֽ�
	//	printf("%p\n", &arr);
	//	printf("%p\n", &arr+1);
	//}
