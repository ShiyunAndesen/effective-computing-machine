#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>///strcmp的头文件
#include<windows.h>//sleep的头文件
#include<stdlib.h>//system的头文件
/*
//在一个有序数组中查找具体的某个数//使用二分查找
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//在此数组中寻找数字n
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	//下标：从序号0开始标记
	int left = 0;//左下标
	int right = sz - 1;//右下标
    while(left<=right)
	{
		int mid = (left + right) / 2;
		//二分查找循环体
		if (arr[0] > k)
		{
			right = mid - 1;
		}
		else if (arr[0] < k)
		{
			left = mid + 1;
		}
		else
			printf("找到了，下标是：%d\n", mid);
		break;
		if (left > right)
		{
			printf("找不到\n");
		}
		return 0;
	}
}

//编写代码，演示多个字符从两端移动 向中间汇聚
int main()
{
	char arr1[] = { "welcome to bit!!!" };
	char arr2[] = { "#####" };
	int left = 0;
	int right = strlen(arr1) - 1;//strlen计算一个字符串中元素个数（遇到结束符'\n')
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr2[right];
		printf("%s\n", arr);
		sleep(1000);
		system("cls");//system执行系统命令的一个函数，'cls'清空屏幕
		left++;
		right--;
	}
	return 0;
}
*/
//编写代码实现模拟用户登入情景，并且只能登入三次
// （只允许输入三次密码，如果密码正确则提示登入成功，如果三次均输入失败，则推出程序）
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0;i < 3;i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);//存储输入的字符串（密码）
		if (strcmp(password, "123456") == 0)//strcmp用于比较两个字符串是否相等
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
		printf("三次密码均错误，退出程序");
	return 0;
}