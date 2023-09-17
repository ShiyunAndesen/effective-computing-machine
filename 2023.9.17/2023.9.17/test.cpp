#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//分支语句（选择结构）
/*
//if语句
int main()
{
	int age = 9;
	if (age < 18)
	{
		printf("未成年\n");//如果条件成立，要执行多条语句，应该要使用代码块
		printf("不能谈恋爱\n");//一对{}是一个代码块
	}
	else
	{
		if (age >= 18 && age < 28)
		printf("青年\n");
		else if (age >= 28 && age < 50)
		printf("壮年\n");
		else if (age >= 50 && age < 90)
			printf("老年\n");
		else
			printf("老不死\n");
	}
	return 0;
}

int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
			printf("hehe\n");
	}
	else
		printf("haha\n");//haha
}

int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)//得“无”
		if (b == 2)
			printf("hehe\n");
		else//悬空else（和离它最近的未匹配的if进行匹配）
			printf("haha\n");
	return 0;
}

//switch语句（常用于多分支的情况）
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1://case内可包含if...else...语句
	//	if (n == 1)
	//		printf("hehe\n");
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;//(跳出swich语句） 实际效果是把语句列表分为不同部分
	case 6:
	case 7:
		printf("休息日\n");
		break;//在最后一个case语句的后面加上一条break语句（代码习惯）
	default://表达的值与所有的case标签值都不匹配
		printf("输入错误\n");
	}
	return 0;
}

//while语句
int main()
{
	int i = 1;
	i <= 10;
		while (i)
	{
			printf("%d", i);
			i++;
	}
		return 0;
}
*/
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;//继续（循环），用于终止循环中的本次循环
		printf("%d", i);//1，2，3，4
		i++;
	}
	return 0;
}