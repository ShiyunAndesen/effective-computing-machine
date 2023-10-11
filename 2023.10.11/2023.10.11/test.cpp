#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//冒泡排序
void bubble_sort(int arr[], int sz)
{
	//确定冒泡排序的趟数
	int i = 0;
	for (i = 0;i < sz - 1;i++)
	{
		int flag = 1;//假设这一趟要排序的数据已经有序
		//每一趟冒泡排序
		int j = 0;
		for (j = 0;j < sz - 1 - i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本趟排序数据不完全有序
			}
		}
		if (flag == 1)
		{
			break;//break语句只用于for和switch（循环语句）
		}

	}
}
int main()
	{
		int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
		int i = 0;
		int sz = sizeof(arr) / sizeof(arr[0]);//sizeof数组名 表示整个数组，计算的是整个数组的大小
		//对arr进行升序排序
		bubble_sort(arr, sz);
		for (i = 0;i < sz;i++)
		{
			printf("%d", arr[i]);
		}
	}
	////数组名
	//int main()
	//{
	//	int arr[10] = { 1,2,3,4,5 };
	//	printf("%p\n", arr);
	//	printf("%p\n", &arr[0]);
	//	//printf("%p\n", arr)<=>printf("%p\n", &arr[0])
	//	printf("%p\n", *arr);//1
	//	printf("%p\n", &arr);
	//	//&  数组名，数组的地址，取出的是整个数组地址
	//	return 0;
	//}
	//对比/比较
	//int main()
	//{
	//	int arr[10] = { 1,2,3,4,5 };
	//	printf("%p\n", &arr[0]);
	//	printf("%p\n", &arr[0]+1);//一个元素 四个字节
	//	printf("%p\n", &arr);
	//	printf("%p\n", &arr+1);
	//}
