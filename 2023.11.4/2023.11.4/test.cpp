#include<stdio.h>
//'~'������������λȡ��
//int main()
//{
//	/*int a=0;//-1  */
//	/*int a = 11;//-12 */
//	/*printf("%d\n", ~a);*/
//
//	int a = 11;
//	//a = a | (1 << 2);//15
//	a = a & (~(1 << 2));//11
//	printf("%d\n", a);
//}

//ǰ��++/--  ����++/--
//int main()
//{
//	int a = 10;
//	printf("%d\n", ++a);//ǰ��++ ��ʹ�ú�++
//	printf("%d\n", a++);//����++ ��++��ʹ��
//	return 0;
//}

//�����ͣ�����ǿ������ת��
//int main()
//{
//	int a = (int)3.14; //int a=int(3.14);//err
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//4 //����x86
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//4 //����x86
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//�߼������� &&�߼���  ||�߼���
//int main()
//{
	/*int a = 0;
	int b = 5;*/
	//int c = a && b;
	//printf("%d\n", c);//0
	//int c = a || b;
	//printf("%d\n", c);//1

	//int a = 0;
	//int b = 0;
	//int c = a || b;
	//printf("%d\n", c);//0
	//return 0;

	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;//1 2 3 4
	//i = a++ || ++b ||d++;//1 2 3 4
	//int i = 0, a = 1, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;//2 3 3 5
	//printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
	//return 0;
//}

//��Ŀ������
int main()
{
	int a = 0;
	int b = 0;

//	if (a > 0)
//		b = 3;
//	else
//		b = -3;
////b=a>0?3:-3;

	int a = 10;
	int b = 20;
	int max = 0;
	if (a > b)
		max = a;
	else
		max = b;
	//max(a>b?a:b)
	return 0;
}