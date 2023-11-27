#include<stdio.h>
//结构体
//结构体的声明
//struct stu //结构体类型
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//三个结构体的变量
//typedef struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//类型
//int main()
//{
//	struct stu s1;//局部变量
//	struct stu s2;//
//}

//结构体变量的定义和初始化
//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//类型
//int main()
//{
//	stu s1 = { "张三",20,"17759375672","男" };//局部变量
//	stu s2 = { "旺财",30,"13860386386","保密" };//局部变量
//	return 0;
//}

//struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct s s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hello",{100,'w',"hello world",3.14};
//		return 0;
//}

//结构体的访问
typedef struct stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;
void print1(stu tmp)
{
	printf("name:%s\n", tmp.name);
	printf("age:%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex:%s\n", tmp.sex);
}
void print2(stu* ps)
{
	printf("name:%s\n", ps->name);
	printf("age:%d\n", ps->age);
	printf("tele:%s\n", ps->tele);
	printf("sex:%s\n", ps->sex);
}
int main()
{
	stu s = { "李四",40,"17759375672","男" };
		print1(s);
	print2(&s);
	return 0;
}