#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//3.访问一个结构的成员
// . 结构体.成员名
//-> 结构体指针->成员名
//Strust Stu
////创建一个结构体类型——struct Stu
//{
//    char name[20];
//    int age;
//    char id[20];
//};
//int main()
//{
//    int a = 10;
//    //使用struct Stu这个类型创建了一个学生对象s1并初始化
//    Strust Stu s1 = { "张三",20,"2019010305" };
//    printf("%s\n", s1.name);
//    printf("%d\n", s1.age);
//    printf("%s\n", s1.id);
//    //结构体变量名.成员名
//    Strust Stu* ps = &s1;
//    printf("%s\n", (*ps).name);
//    printf("%d\n", (*ps).age);
//    printf("%s\n", ps->name);
//    printf("%d\n", ps->age);
//    //结构体变量.指针->成员名
//    return 0;
//}

//隐式类型转换
int main()
{
	/*char a = 3;
	char b = 127;
	char c = a + b;
	printf("%d\n", c);
	return 0;*/

	/*char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)
		printf("a");
	if (b = 0xb600)
		printf("b");
		if (c = 0xb6000000)
			printf("c");
		return 0;*/

	//	char c = 1;
	//printf("%u\n", sizeof(c));//1
	//printf("%u\n", sizeof(+c));//4
	//printf("%u\n", sizeof(!c));//1
	//return 0;
}

