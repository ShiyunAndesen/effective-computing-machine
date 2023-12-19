#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1;i <= 3;i = i + 1)//i=i+1 <=> i++
//	{
//		for (j = 1;j <= 5;printf("*"), j++)
//			printf("\n");
//	}
//	//printf("\n");
//	return 0;
//}

//int main()
//{
//	int n, i, j, k;
//	printf("n=");
//	scanf("%d", &n);
//	for (i = 1;i <= n;i++)
//	{
//		for (j = 1;j <= n - i;j++)
//			printf(" ");
//		for (k = 1;k <= 2 * i - 1;k++)
//			printf("*");
//		printf("\n");
//	}
//	for (i = 1;i <= n;i++)
//	{
//		for (j = 1;j <= i;j++)
//			printf(" ");
//		for (k = 1;k <= 2 * (n-i) - 1;k++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}

//指针
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	//char* p = "abcdef";//"abcdef"是一个常量字符串
//	printf("%c\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}

//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组中的元素个数
//	printf("%d\n", sz);//2
//}
//int main()
//{
//	int arr[10] = { 0 };// 两个元素：0和\n
//	test(arr);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//			printf("%d", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		printf("%d", *(arr[i]));//10203040
//	}
//}

