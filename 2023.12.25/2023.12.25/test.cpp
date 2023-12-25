#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//运用数组依次输出自定义10名学生的年龄，正序＋倒序
//#define N 10
//int main()
//{
//	int i, j, k, a[N];
//	printf("请输入10名学生的年龄：\n");
//	for (i = 0;i < N;i++)   //循环输入10个数据，存储至a[i]
//		scanf("%d", &a[i]);
//	for (j = 0;j < 9;j++)   //外循环，输出10个数
//	{
//		for(i=0;i<9-j;i++)  //内循环，比较大小9次
//			if (a[i] > a[i + 1])
//			{
//				k = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = k;
//			}
//	}
//	printf("小到大排序:\n");
//	for (i = 0;i < N;i++)
//		printf("%d", a[i]);
//	printf("\n");
//	printf("大到小排序:\n");
//	for (i = 9;i >= 0;i--)
//		printf("%d", a[i]);
//}

//数组指针
//int main()
//{
//	int* p = NULL;//整形指针
//	char* pc = NULL;//字符指针
//	int arr[10];
//	//arr--首元素地址
//	//&arr[0]--首元素地址
//	//&arr--数组的地址
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//数组的地址要存起来
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