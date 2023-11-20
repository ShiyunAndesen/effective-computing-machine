#include<stdio.h>
//NULL--用来初始化指针的，给指针赋值
//int main()
//{
//	//int b = 0;
//	int a = 10;
//	int* pa = &a;//初始化
//	//int* p = NULL;//NULL--用来初始化指针的，给指针赋值
//	*pa = 20;
//	pa = NULL;//pa没有指向任何的有效空间了
//	printf("%d\n", pa);//0
//	return 0;
//}

//指针运算
//整数—整数
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
//指针-指针 //结果是中间元素的个数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//9
//	printf("%d\n", &arr[0] - &arr[9]);//-9
//	//printf("%d\n", &arr[9] - &ch[0]);//err //需要同类型的函数相减
//	return 0;
//}


//求字符串长度
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


//指针和数组
//int main()
//{
//	//int arr[10] = { 0 };
//	//printf("%p\n", arr);//0000005AFF1EF8A8
//	//printf("%p\n", &arr[0]);//0000005AFF1EF8A8
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//指针存放数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d", *(p + i));//12345678910
//	}
//	return 0;
//}
//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//二级指针
//	//int*** ppa = &ppa;//三级指针
//	**ppa = 20;
//	printf("%d\n", **ppa);//20
//	return 0;
//}
//指针数组
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a,&b,&c };//指针数组
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		printf("%d", *(arr[i]));//102030
	}
	return 0;
}