#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.
//int main()
//{
//	int x = 10, y = 20, t = 0;
//	if (x == y)
//		t = x;x = y;y = t;
//	printf("%d,%d", x, y);
//	return 0;
//}
//2.
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a > 50)
//		printf("%d", a);
//	if (a > 40)
//		printf("%d", a);
//	if (a > 30)
//		printf("%d", a);
//	return 0;
//}
//3.
//int main()
//{
//	int a = 2, b = 1, c = 2;
//	if (a)
//		if (b < 0)
//			c = 0;
//		else
//			c++;
//	printf("%d", c);
//		return 0;
//}
//4.
//int main()
//{
//	int a = 2, b = 3, c;
//	c = a;
//	if (a > b)
//		c = 1;
//	else
//		if (a == b) c = 0;
//	printf("%d\n", c);
//	return 0;
//}
//5.
//int main()
//{
//	float x = 2.0, y;
//	if (x < 0) y = 0.0;
//	else if (x < 5.0) y = 1.0 / x;
//	else y = 1.0;
//	printf("%f\n", y);
//	return 0;
//}
//6.
int main()
{
	char c;
	c = getchar();
	switch (c - '2')
	{
	case 0:
	case 1:putchar(c + 4);
	case 2:putchar(c + 4);break;
	case 3:putchar(c + 3);
	default:putchar(c + 2);break;
	}
	return 0;
}