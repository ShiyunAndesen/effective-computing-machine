#define _CRT_SECURE_NO_WARNINGS 1

//ʵ��5
#include<stdio.h>
int main()
{
	char ch1, ch2;
	printf("������һ��Сд��ĸ:\n");
	ch1 = getchar();
	ch2 = ch1 - 32;
	printf("��Ӧ�Ĵ�д��ĸ:");
	putchar(ch2);
	return 0;
}

//ʵ��6
#include<stdio.h>
int main()
{
	char ch1, ch2, ch3, ch4, ch5;
	printf("������Ҫ���ܵĵ���:\n");
	scanf("%c%c%c%c%c", &ch1, &ch2, &ch3, &ch4, &ch5);
	printf("���ܺ�:%c%c%c%c%c\n", ch1 + 5, ch2 + 5, ch3 + 5, ch4 + 5, ch5 + 5);
	return 0;
}

//ʵ��7
#include<stdio.h>
int main()
{
	int n;
	double r, c, d;
	printf("����������:\n");
	scanf("%lf", &c);
	printf("������������:\n");
	scanf("%d", &n);
	printf("��������������:\n");
	scanf("%If", &r);
	d = c + c * r * r * n;
	printf("%d���ı������Ϣ֮��Ϊ:%.2lfԪ\n", n, d);
	return 0;
}

