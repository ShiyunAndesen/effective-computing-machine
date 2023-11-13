#include<stdio.h>
#include<string.h>
//初始指针
//int main()
//{
//	int a = 10;
//	int* p = &a;//指针用来存放地址的，地址是唯一标示一地址空间的
//	return 0;
//}

//指针和指针类型
//int main()
//{
//	//printf("%d\n", sizeof(char*));//4
//	//printf("%d\n", sizeof(short*));//4
//	//printf("%d\n", sizeof(int*));//4
//	//printf("%d\n", sizeof(double*));//4
//	//return 0;
//	////指针的大小在32位平台（✖86）都是4个字节
//
//	/*int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);*/
//
//	/*int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	pa = 0;
//	pc = 0;
//	printf("%p\n", pa);
//	printf("%p\n", pc);*/
//	return 0;
//}

//指针的解引用
int main()
{
	char arr[10] = { 0 };
	//int* p = arr;
	char* p = arr;
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		*(p + i) = 1;
	}
	return 0;

}