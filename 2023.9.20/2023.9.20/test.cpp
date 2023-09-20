#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
/*
void main()
{
	int x, y;
	x = -5;
	y = abs(x);
	printf("-5的绝对值为：%d\n", y);
}

//do...while（）循环
int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			break;//此处的break和continue得同样的结果
		printf("%d\n", i);//1 2 3 4 
		i++;
	} while (i <= 10);
	return 0;
}

//计算n的阶乘//使用for/while循环
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);//& 读取并保存数据
	for (i = 1;i <= 10;i++)//n是一个静态的局部变量（n保存使用上一次循环的值）
	{
		ret = ret * i;//（用于储存上一次循环的结果）
	}
	printf("ret=%d\n", ret);
	return 0;
}

//计算1！+2！+3！....+10!（计算1到10的阶乘之和）
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1;n <= 10;n++);
	{
		ret = 1;//ret需要重置
		for (i = 1;i <= n;i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}
	printf("sum=%d\n", sum);
	return 0;
}
*/
int main()
{
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (i = 1;i <= 10;i++)
	{
		ret = ret * i;
		sum = ret + sum;
	}
	printf("sun=%d\n", sum);//sum=4031973
	return 0;
}