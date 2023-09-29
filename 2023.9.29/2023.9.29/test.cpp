#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>

//写一个函数可以判断一个数是不是素数
// 是素数返回1，不是素数返回0
int is_prime(int n)
{
	//从2至n-1的数字判断是否能整除
	int j = 0;
	for (j = 2;j <= sqrt(n);j++);
	{
		if (n%j == 0)
			return 0;
	//if(j==n)
	return 1;
}
int main()
	{
		//打印100-200之间的素数
		int i = 0;
		for (i = 100;i <= 200;i++)
		{
			//判断i是否为素数
			if (is_prime(i) == 1)
				printf("%d\n", i);
		}
		return 0;
	}
	
//写一个函数判断一年是不是闰年
int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y%400==0))
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	for (year = 1000;year <= 2000;year++)
	{
		//判断year是否为闰年
		if (1 == is_leap_year(year))
		{
			printf("%d\n", year);
		}
	}
	return 0;
}

//写一个函数，实现一个整形有序数组的二分查找
                  //本质上arr是一个指针
int binary_search(int arr[], int k,int sz)
{
	//算法的实现
	//int sz = sizeof(arr) / sizeof(arr[0]);//函数内部求参数数组个数—>不靠谱
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;//中间元素的下标
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
}
int main()
{
	//二分查找
	//在一个有序数组中查找具体的某个数
	//如果找到了返回这个数的下标，找不到的返回-1
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//在函数外部求好元素个数后传入
	                      //传递过去的是数组arr首元素的地址
	int ret = binary_search(arr, k,sz);
	if (ret == -1)
	{
		printf("找不到指定的数字\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
}

//写一个函数，每调用一次这个函数，就会将num的值增加1
void Add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("num=%d\n", num);//1
	Add(&num);
	printf("num=%d\n", num);//2
	Add(&num);
	printf("num=%d\n", num);//3
	return 0;
}