#include<stdio.h>
//�ṹ��
//�ṹ�������
//struct stu //�ṹ������
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//�����ṹ��ı���
//typedef struct stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//����
//int main()
//{
//	struct stu s1;//�ֲ�����
//	struct stu s2;//
//}

//�ṹ������Ķ���ͳ�ʼ��
//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//����
//int main()
//{
//	stu s1 = { "����",20,"17759375672","��" };//�ֲ�����
//	stu s2 = { "����",30,"13860386386","����" };//�ֲ�����
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

//�ṹ��ķ���
typedef struct stu
{
	//��Ա����
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
	stu s = { "����",40,"17759375672","��" };
		print1(s);
	print2(&s);
	return 0;
}