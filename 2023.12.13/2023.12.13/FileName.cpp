#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////�ṹ�� 
//struct CustomArr {
//	//int len;
//	int num[];
//};
////����һ���ṹ������
int main()
{
	int i, j, t;
	int a[10];
	//printf("������10����:\n");
	/*scanf("%d", a);*/

	printf("������10��������\n");
	for (int i = 0;i < 10;i++)
	{
		scanf("%d", &a[i]);
	}
	

	/*for (j = 0;j < 9;j++)
	{
		for (i = 0;j < 9 - j;j++)
		{
			if (a[i] > a[i + 1])
			{
				t = a[i];a[i] = a[i + 1];a[i + 1] = t;
			}
		}
	}
	for (i = 0;i < 10;i++)
	{
		printf("%d ", a[i]);
	}*/
	printf("\n");
		printf("���κ�:\n");
	for (i = 0;i < 10;i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}





//int main()
//{
//	int i, j, t;
//	int a[10];
//	
//	printf("������10��������\n");
//	for (int i = 0;i < 10;i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	printf("\n");
//	printf("���κ�:\n");
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d\n", a[i]);
//	}
//	return 0;
//}