#include<stdio.h>
//int main()
//{
//	//指针数组
//	int* arr[10];
//	//数组指针
//	int* (*pa)[10] = &arr;
//	//函数指针
//	int (*pAdd)(int, int) = Add;//&Add
//	//int sum=(*pAdd)(1,2);
//	//int sum=pAdd(1,2);
//	//int sum=Add(1,2);
//	//printf("sum=%d\n",sum);
//	//函数指针的数组
//	int (*pAdd[5])(int, int);
//	//指向函数指针数组的指针
//	int(*(*pAdd)[5])(int, int)=&pArr;
// return 0;
//}

//冒泡排序
#include<stdlib.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0;i < sz - 1;i++)
	{
		//一趟冒泡排序
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
