#include<stdio.h>
//大，小写英文字母的相互转换
//int main()
//{
//	char ch1, ch2;
//	ch1 = 'a';
//	ch2 = 'Q';
//	ch1 = ch1 - 32;
//	ch2 = ch2 + 32;
//	printf("%c,%c\n%d,%d\n", ch1, ch2, ch1, ch2);
//	return 0;
//}

//大写A 小写b英文字母的相互转换，并分别以字符型和整数形式输出
//int main()
//{
//	char ch1, ch2;
//	ch1 = 'A';
//	ch2 = 'b';
//	ch1 = ch1 + 32;
//	ch2 = ch2 - 32;
//	printf("%c,%c\n%d,%d\n", ch1, ch2, ch1, ch2);
//	return 0;
//}

//字符型变量和整型变量的相互赋值
int main()
{
	char x = '\256';
	int y;
	y = x;
	printf("y=%d\n", y);//得y=-82
	return 0;
}