#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
//while语句
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF);//end of file 文件结束标志，本质上值为—1
	{
		putchar(ch);
			//getchar与putchar对应//不理解用法/用处
	}
	return 0;
}

int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s",password);//输入密码 并存放在password数组中
	while ((ch = getchar()) != '\n');//用于读取缓冲区剩余字符直到'\n'读取完
	{
		;
	}
	printf("请确认（Y/N):.");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}
	return 0;
}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}
	return 0;
}

//for循环 for（表达式1，表达式2，表达式3）
//使用for循环打印1—10的数字
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d", i);//1,2,3,4,5,6,7,8,9,10
	}
	return 0;
}

//使用for和while的区别//"i++"位置不同
int main()
{
	int i = 0;
	for (i = 1;i <= 10;i++)//初始化，判断，调整
	{
		if (i == 5)
			continue;
		printf("%d", i);//1234678910
	}
	return 0;
}

int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d", i);//1，2，3，4
		i++;
	}
	return 0;
}

//for循环语句控制变量
//1.不可在for循环体内修改循环变量，防止for循环失去控制
//2.建议for语句的循环控制变量的取值采取“前闭后开"区间
int main()
{
	int i = 0;
	for (i = 0;i < 10;i++)//前闭后开区间的形式
	{
		if (i = 5)//在for循环体内改变循环变量
			printf("haha\n");//无限死循环
		printf("hehe\n");

	}
	return 0;
}

//一些for循环的变种
//for循环的初始化，调整，判断都可以省略（谨慎）
int main()
{
	int i = 0;
	for (i<10;i++)//for循环的变种——省略初始化不成功？？
	{
		int j = 0;
		for (j<10;j++)
		{
			printf("hehe\n");
		}
	}
	return 0;
}
*/
