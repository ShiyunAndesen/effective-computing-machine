#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��֧��䣨ѡ��ṹ��
/*
//if���
int main()
{
	int age = 9;
	if (age < 18)
	{
		printf("δ����\n");//�������������Ҫִ�ж�����䣬Ӧ��Ҫʹ�ô����
		printf("����̸����\n");//һ��{}��һ�������
	}
	else
	{
		if (age >= 18 && age < 28)
		printf("����\n");
		else if (age >= 28 && age < 50)
		printf("׳��\n");
		else if (age >= 50 && age < 90)
			printf("����\n");
		else
			printf("�ϲ���\n");
	}
	return 0;
}

int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
			printf("hehe\n");
	}
	else
		printf("haha\n");//haha
}

int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)//�á��ޡ�
		if (b == 2)
			printf("hehe\n");
		else//����else�������������δƥ���if����ƥ�䣩
			printf("haha\n");
	return 0;
}

//switch��䣨�����ڶ��֧�������
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1://case�ڿɰ���if...else...���
	//	if (n == 1)
	//		printf("hehe\n");
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;//(����swich��䣩 ʵ��Ч���ǰ�����б��Ϊ��ͬ����
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;//�����һ��case���ĺ������һ��break��䣨����ϰ�ߣ�
	default://����ֵ�����е�case��ǩֵ����ƥ��
		printf("�������\n");
	}
	return 0;
}

//while���
int main()
{
	int i = 1;
	i <= 10;
		while (i)
	{
			printf("%d", i);
			i++;
	}
		return 0;
}
*/
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;//������ѭ������������ֹѭ���еı���ѭ��
		printf("%d", i);//1��2��3��4
		i++;
	}
	return 0;
}