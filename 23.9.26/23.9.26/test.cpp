#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//库函数
/*
int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);
	printf("%s\n", arr);
	return 0;
}

int main()
{
	char arr1[] = "bit";
	char arr2[] = "######";
	strcpy(arr2, arr1);//strcpy--字符串拷贝
	printf("%s\n", arr2);
	return 0;
}

//写一个函数可以找出两个整数中的最大值
 int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);
	printf("max=%d\n", max);
	return 0;
}
*/
//写一个函数可以交换两个整形变量的变量
void swap2(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n", a, b);
	swap2(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}