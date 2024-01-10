//#include<stdio.h>
//union Utype{
//	int i; //4个字节
//	float f; //4个字节
//	double d; //8个字节
//}
////u[1]; //4
//u[2]; //8
////u[3]; //12
////u[4]; //16
////u[5]; //20
//void main()
//{
//	printf("sizeof(u):%d\n", sizeof(u));
//}




//#include "stdio.h"
//
//int main()
//
//{
//    int a[4][4] = { {1,2,3,4},{5,6,7,8},{3,9,10,2},{4,2,9,6} };
//
//    int i, s = 0;
//
//    for (i = 0;i < 4;i++)
//
//        s += a[i][2];
//
//    printf("s=%d\n", s);
//
//    return 0;
//
//}


#define _CRT_SECURE_NO_WARNINGS 1
//判断输入两个的整数，找出两个数中的最大数，并附上代码和运行结果截图。
#include<stdio.h>
int main()
{
	int i, j,max;
	printf("输入两个整数：");
	scanf("%d,%d", &i, &j);
	if (i > j) 
	{
		max = i;
		scanf("%d", &max);
	}
	else
	{
		max = j;
		scanf("%d", &max);
	}
	printf("两个数中最大的数是%d",max);
	return 0;
}