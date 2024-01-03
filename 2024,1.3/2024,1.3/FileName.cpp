#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//int main()
//{
//	int a[3][3] = { 1,3,6,7,9,11,14,15,17 }, sum1 = 0, sum2 = 0, i, j;
//	for (i = 0;i < 3;i++)
//		for (j = 0;j < 3;j++)
//			if (i == j) sum1 = sum1 + a[i][j];
//	for (i = 0;i < 3;i++)
//	for (j=2;j>=0;j--)
//		if ((i + j) == 2) sum2 = sum2 + a[i][j];
//	printf("sum1=%d,sum2=%d", sum1, sum2);
//	return 0;
//}

/*int main()
{
	char s[80];
	int i, j;
	gets(s);
	for (i = j = 0;s[i] != '\0';i++)
		if (s[i] != 'H')
		
	        s[j] = '\0';
			puts(s);
			return 0;
}
*/
/*#include <stdio.h>  

int main() {
    char s[80];
    int i, j = 0; // j初始化为0，用于记录非'H'字符的下一个位置  

    gets(s); // 读取用户输入的字符串  

    for (i = 0; s[i] != '\0'; i++) { // 遍历整个字符串  
        if (s[i] != 'H') { // 如果当前字符不是'H'  
            s[j] = s[i]; // 将当前字符复制到j的位置  
            j++; // 更新j的值，指向下一个位置  
        }
    }
    s[j] = '\0'; // 在字符串末尾添加结束符  

    puts(s); // 输出处理后的字符串  

    return 0;
}
*/

//1
//int main()
//{
//	int k[30] = { 12,324,45,6,768,98,21,34,453,456 };
//	int count = 0, i = 0;
//	while (k[i])
//	{
//		if (k[i] % 2 == 0 || k[i] % 5 == 0)
//			count++;i++;
//	}
//	printf("%d,%d\n", count, i);
//	return 0;
//}

//2
//int main()
//{
//	int a[4][4] = { {1,2,3,4},{5,6,7,8},{3,9,10,2},{4,2,9,6} };
//	int i, s = 0;
//	for (i = 0;i < 4;i++)
//		s += a[i][1];
//	printf("%d\n", s);
//	return 0;
//}

//3
//int main()
//{
//	int i = 0;
//	char a[] = "abm", b[] = "aqid", c[10];
//	while (a[i] != '\0' && b[i] != '0')
//	{
//		if (a[i] >= b[i])
//			c[i] = a[i] - 32;
//		else
//			c[i] = b[i] - 32;
//		++i;
//	}
//	c[i] = '\0';
//	puts(c);
//	return 0;
//}

//4
//#include<string.h>
//int main()
//{
//	char a[] = { 'a','b','c','d','e','f','g','h','\0' };
//	int i, j;
//	i = sizeof(a);
//	j = strlen(a);
//	printf("%d,%d", i, j);
//	return 0;
//}

//5
#include<stdio.h>
#include<string.h>
int main()
{
	char a[2][4];
	strcpy(a, "you");
	strcpy(a[1], "me");
	a[0][3] = '&';
	printf("%s\n", a);
	return 0;
}
