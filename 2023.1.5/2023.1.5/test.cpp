#include<stdio.h>
//int main()
//{
//	//ָ������
//	int* arr[10];
//	//����ָ��
//	int* (*pa)[10] = &arr;
//	//����ָ��
//	int (*pAdd)(int, int) = Add;//&Add
//	//int sum=(*pAdd)(1,2);
//	//int sum=pAdd(1,2);
//	//int sum=Add(1,2);
//	//printf("sum=%d\n",sum);
//	//����ָ�������
//	int (*pAdd[5])(int, int);
//	//ָ����ָ�������ָ��
//	int(*(*pAdd)[5])(int, int)=&pArr;
// return 0;
//}

//ð������
#include<stdlib.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0;i < sz - 1;i++)
	{
		//һ��ð������
		int j = 0;
		for (j = 0;j < sz - 1 - i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d", arr[i]);//0123456789
	}
	return 0;
}
