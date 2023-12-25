#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 5;
//	do {
//		if(i%3==1)
//			if (i % 5 == 2)
//			{
//				printf("%d", i);
//				break;
//			}
//		i++;
//	} while (i != 0);
//}

//int main()
//{
//	int y = 9;
//	for (;y > 0;y--)
//		if (y % 3 == 0)
//			printf("%d", --y);
//	return 0;
//}

//int main()
//{
//	int i, j;
//	for (i = 3;i >= 1;i--)
//	{
//		for (j = 1;j <= 2;j++)
//			printf("%d", i + j);
//		printf("\n");
//	}
//}

//int main()
//{
//	int i = 1, s = 0;
//	while (i++)
//		if (!(i % 3))
//			break;
//		else
//			s += 1;
//	printf("%d", s);
//}

//int main()
//{
//	int s = 1, t = 1, a, n;
//	scanf("%d%d", &a, &n);
//	for (int i = 1;i < n;i++)
//	{
//		t = t * 10 + 1;
//		s = s + t;
//	}
//	s *= a;
//	printf("SUM=%d\n", s);
//	return 0;
//}

//int main()
//{
//	int n1, n2;
//	scanf("%d", &n2);
//	while (n2 != 0)
//	{
//		n1 = n2 % 10;
//		n2 = n2 / 10;
//		printf("%d", n1);
//	}
//	return 0;
//}

//int main()
//{
//	int s, i;
//	for (s = 0, i = 1;i < 3;i++, s += 1);
//	printf("%d\n", s);
//	return 0;
//}

int main()
{
	int s1 = 0, s2 = 0;
	char ch;
	while ((ch = getchar()) != '\n')
	{
		if (ch >= '0' && ch <= '9')
			s1++;
		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
			s2++;
	}
	printf("%d,&d", s1, s2);
	return 0;
}