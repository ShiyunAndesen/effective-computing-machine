#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*
//选择语句
int main()
{
	int input = 0;
	printf("好好学习\n");
	printf("yes/no>:");
	scanf("%d", &input);
	if (input == 1)// == --判断相等
		printf("找到好工作\n");
	else 
		printf("失业\n");
		return 0;
}
*/
/*
//循环语句:while循环，for循环，do...whlie循环
int main()
{
	int line = 0;
//printf("等于0\n");
	while (line < 5)//while循环
	{
		printf("数值为:%d\n", line);
		line++;
	}
	if (line > 5)
		printf("大于5\n");
	return 0;
}
*/
/*
//函数
int Add(int x, int y)
//int Add函数返回类型，intx inty函数参数
{
	int z = x + y;//函数体--自定义函数
	return z;//
}
int main()
{
	
	//int num1 = 10;
	//int num2 = 20;
	//sum = Add(num1, num2);

	int sum = 0;
	int a = 100;
	int b = 200;
	sum = Add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}
*/
//数组
/*
int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};//定义一个存放10个整数数字的数组
	printf("%d\n", arr[4]);// arr[] --下标的方式访问元素
}
*/
/*
//输出数组中小于10的数字
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}
*/
/*
int main()
{
	int a = 10;
	printf("%d\n", a);//10
	printf("%d\n",!a);//0    !--逻辑反操作符
	return 0;
}
*/
