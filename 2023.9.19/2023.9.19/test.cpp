#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
//while���
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF);//end of file �ļ�������־��������ֵΪ��1
	{
		putchar(ch);
			//getchar��putchar��Ӧ//������÷�/�ô�
	}
	return 0;
}

int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s",password);//�������� �������password������
	while ((ch = getchar()) != '\n');//���ڶ�ȡ������ʣ���ַ�ֱ��'\n'��ȡ��
	{
		;
	}
	printf("��ȷ�ϣ�Y/N):.");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("����ȷ��\n");
	}
	return 0;
}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}
	return 0;
}

//forѭ�� for�����ʽ1�����ʽ2�����ʽ3��
//ʹ��forѭ����ӡ1��10������
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d", i);//1,2,3,4,5,6,7,8,9,10
	}
	return 0;
}

//ʹ��for��while������//"i++"λ�ò�ͬ
int main()
{
	int i = 0;
	for (i = 1;i <= 10;i++)//��ʼ�����жϣ�����
	{
		if (i == 5)
			continue;
		printf("%d", i);//1234678910
	}
	return 0;
}

int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d", i);//1��2��3��4
		i++;
	}
	return 0;
}

//forѭ�������Ʊ���
//1.������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����
//2.����for����ѭ�����Ʊ�����ȡֵ��ȡ��ǰ�պ�"����
int main()
{
	int i = 0;
	for (i = 0;i < 10;i++)//ǰ�պ��������ʽ
	{
		if (i = 5)//��forѭ�����ڸı�ѭ������
			printf("haha\n");//������ѭ��
		printf("hehe\n");

	}
	return 0;
}

//һЩforѭ���ı���
//forѭ���ĳ�ʼ�����������ж϶�����ʡ�ԣ�������
int main()
{
	int i = 0;
	for (i<10;i++)//forѭ���ı��֡���ʡ�Գ�ʼ�����ɹ�����
	{
		int j = 0;
		for (j<10;j++)
		{
			printf("hehe\n");
		}
	}
	return 0;
}
*/
