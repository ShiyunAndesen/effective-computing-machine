#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����ָ������
//������һ�������ͬ�������ݵĴ洢�ռ�
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//ָ������
//	int* arr[5];
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ��������ָ�������
//	int (*pa)(int, int) = Add;//Sub/Mul/Div
//	int(*parr[4])(int,int) = { Add,Sub,Mul,Div};//����ָ�������
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5 -1 6 0
//	}
//	return 0;
//}

//����ָ���������;��ת�Ʒ�
//void menu()
//{
//	printf("******************\n");
//	printf("** 1.Add  2.Sub **\n");
//	printf("** 3.Mul  4.Div **\n");
//	printf("** 5.Xor  0.exit **\n");
//	printf("******************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("������������������>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//}
////ָ����ָ�������ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	int (*pf)(int, int);//����ָ��
//	int (*pfArr[4])(int, int);//����ָ�������
//	int (*(*pfArr[4]))(int, int);//pfArr��һ������ָ�룬ָ��ָ���������4��Ԫ��
//}

//�ص�����
//void menu()
//{
//	printf("******************\n");
//	printf("** 1.Add  2.Sub **\n");
//	printf("** 3.Mul  4.Div **\n");
//	printf("** 5.Xor  0.exit **\n");
//	printf("******************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("������������������>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x,y));
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(Xor);
//			break;
//		case 0:
//			printf("�˳�\n");
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//}

void print(char* str)
{
	printf("hehe:%s", str);
}
void test(void(*p)(char*))
{
	printf("test\n");
	p("bit");
}
int main()
{
	test(print);
	return 0;
}