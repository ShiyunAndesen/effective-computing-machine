#include<stdio.h>
//实型数据的舍入误差
//int main()
//{
	//double a = 1.234567E10, b;
	////将float改成double可以避免float类型数据运算超出精度范围而产生的溢出问题
	//b = a + 20;
	//printf("a=%f\n", a);
	//printf("b=%f\n", b);

	/*int x = 5, y = 15;
	x += x;
	printf("%d\n", x);
	x *= 4 + 3;
	printf("%d\n", x);
	x %= (y % 2);
	printf("%d\n", x);*/

	/*int a, b, c, d;
	a = 8;b = 10;
	c = a++;
	d = ++b;
	printf("%d,%d,%d,%d\n", a, b, c, d);*/

	/*int m, n;
	float x = 5.8;
	m = x;
	n = (int)x;
	printf("x=%f,m=%d,n=%d\n", x, m, n);*/

	/*int a = 077;
	printf("%d\n", --a);*/

	/*int a = 2, b = 3, c = 4;
	a *= 16 + (b++) - (++c);
	printf("%d", a);*/

	/*int x = 17, y = 26;
	printf("%d", y /= (x %= 6));*/

	/*int i = 010, j = 10;
	printf("%d,%d\n", i, j);*/

	/*char ch = 'x';
	int x;
	unsigned y;
	float z = 0;
	x = ch - z;
	y = x * x;
	z -= y / x;
	printf("ch=%c,x=%d,y=%u,z=%f", ch, x, y, z);*/

	/*int x = 1234;
	char c1, c2, c3, c4;
	c1 = x %10 + '0';
	c2 = x /10% 10 + '0';
	c3= x /100% 10 + '0';
	c4 = x/1000 + '0';
	printf("c1=%c,c2=%c,c3=%c,c4=%c", c1, c2, c3, c4);*/

	/*	int a, b, c;
	a=b=c=1;
	printf("%d,%d,%d\n", a++,b,c);
	printf("%d,%d,%d\n", a,++b,c--);
	printf("%d,%d,%d\n", a,b,++c);*/
	//return 0;
//}

//逗号表达式 exp1,exp2,exp3....
//int main()
//{
//	//1
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = a + 10, a, b = a + 1);
//	//2
//	if (a = b + 1, c = a / 2, d > 0);
//	//3
//	a = get_val();
//	count_val(a);
//	whlie(a = get_val(), count_val(a), a > 0);
//	return 0;
//}

//下标引用，函数调用和结构成员
//[]——下标引用操作符
//int arr[10];
//arr[9] = 10;
//()——函数调用操作符
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);
	printf("max=%d\n", max);
	return 0;
}