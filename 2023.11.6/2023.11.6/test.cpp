#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//  'string'——字符串
//编写一个程序，输入一个大写字母，将其转换为对应的小写字母并输出，输入输出要有文字说明
//1
int main()
{
	char c1, c2;
	printf("请输入任意一个大写字母：\t");
		scanf("%c",&c1);
	c2 = c1 + 32;//大写字母—>小写字母  +32
		printf("该大写字母的小写字母为：%c\t", c2);//'%t'是一个格式控制字符，用于控制输出语句的格式 
	return 0;
}