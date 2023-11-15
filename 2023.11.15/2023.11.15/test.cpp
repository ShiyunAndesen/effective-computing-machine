//#include<stdio.h>
//#define PI 3.1415
//int main()
//{
//	float r, h;
//	printf("请输入圆的半径和圆柱的高,如：1.5，3\n");
//	scanf("%f,%f", &r, &h);
//	printf("圆的周长:%.2f\n", 2 * PI * r);
//	printf("圆的面积:%.2f\n", r* PI * r);
//	printf("圆球的表面积:%.2f\n", 4 * PI * r*r);
//	printf("圆球的体积:%.2f\n", (4.0/3)* PI * r*r*r);
//	printf("圆柱的体积:%.2f\n",  PI * r * r * h);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, x1, x2;
	printf("输入方程的a,b,c:\n");
	scanf("%lf,%lf,%lf", &a, &b, &c);
	if (b * b - 4 * a * c > 0)
	{
		x1 =(-b+sqrt(b*b-4*a*c))/(2*a);
		x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
		printf("方程的平方根为x1=%lf,x2=%lf\n", x1, x2);
	}
	else
	{
		printf("输入错误，请重新输入\n");
	}
	return 0;
}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a, b, c, x1, x2, p;
//	printf("输入方程的a: b: c: ");
//	scanf("%lf,%lf,%lf", &a, &b, &c);
//	printf("\n");
//	p = b * b - 4 * a * c;
//	x1 = (-b + sqrt(p)) / (2 * a);
//	x2 = (-b - sqrt(p)) / (2 * a);
//	printf("方程的平方根为x1=%lf,x2=%lf\n", x1, x2);
//	return 0;
