//#include<stdio.h>
//union Utype{
//	int i; //4���ֽ�
//	float f; //4���ֽ�
//	double d; //8���ֽ�
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
//�ж������������������ҳ��������е�������������ϴ�������н����ͼ��
#include<stdio.h>
int main()
{
	int i, j,max;
	printf("��������������");
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
	printf("����������������%d",max);
	return 0;
}