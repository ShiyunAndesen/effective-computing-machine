//#include<stdio.h>
//#define PI 3.1415
//int main()
//{
//	float r, h;
//	printf("������Բ�İ뾶��Բ���ĸ�,�磺1.5��3\n");
//	scanf("%f,%f", &r, &h);
//	printf("Բ���ܳ�:%.2f\n", 2 * PI * r);
//	printf("Բ�����:%.2f\n", r* PI * r);
//	printf("Բ��ı����:%.2f\n", 4 * PI * r*r);
//	printf("Բ������:%.2f\n", (4.0/3)* PI * r*r*r);
//	printf("Բ�������:%.2f\n",  PI * r * r * h);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, x1, x2;
	printf("���뷽�̵�a,b,c:\n");
	scanf("%lf,%lf,%lf", &a, &b, &c);
	if (b * b - 4 * a * c > 0)
	{
		x1 =(-b+sqrt(b*b-4*a*c))/(2*a);
		x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
		printf("���̵�ƽ����Ϊx1=%lf,x2=%lf\n", x1, x2);
	}
	else
	{
		printf("�����������������\n");
	}
	return 0;
}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a, b, c, x1, x2, p;
//	printf("���뷽�̵�a: b: c: ");
//	scanf("%lf,%lf,%lf", &a, &b, &c);
//	printf("\n");
//	p = b * b - 4 * a * c;
//	x1 = (-b + sqrt(p)) / (2 * a);
//	x2 = (-b - sqrt(p)) / (2 * a);
//	printf("���̵�ƽ����Ϊx1=%lf,x2=%lf\n", x1, x2);
//	return 0;
