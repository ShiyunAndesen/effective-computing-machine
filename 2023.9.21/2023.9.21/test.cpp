#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>///strcmp��ͷ�ļ�
#include<windows.h>//sleep��ͷ�ļ�
#include<stdlib.h>//system��ͷ�ļ�
/*
//��һ�����������в��Ҿ����ĳ����//ʹ�ö��ֲ���
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//�ڴ�������Ѱ������n
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	//�±꣺�����0��ʼ���
	int left = 0;//���±�
	int right = sz - 1;//���±�
    while(left<=right)
	{
		int mid = (left + right) / 2;
		//���ֲ���ѭ����
		if (arr[0] > k)
		{
			right = mid - 1;
		}
		else if (arr[0] < k)
		{
			left = mid + 1;
		}
		else
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
		break;
		if (left > right)
		{
			printf("�Ҳ���\n");
		}
		return 0;
	}
}

//��д���룬��ʾ����ַ��������ƶ� ���м���
int main()
{
	char arr1[] = { "welcome to bit!!!" };
	char arr2[] = { "#####" };
	int left = 0;
	int right = strlen(arr1) - 1;//strlen����һ���ַ�����Ԫ�ظ���������������'\n')
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr2[right];
		printf("%s\n", arr);
		sleep(1000);
		system("cls");//systemִ��ϵͳ�����һ��������'cls'�����Ļ
		left++;
		right--;
	}
	return 0;
}
*/
//��д����ʵ��ģ���û������龰������ֻ�ܵ�������
// ��ֻ���������������룬���������ȷ����ʾ����ɹ���������ξ�����ʧ�ܣ����Ƴ�����
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0;i < 3;i++)
	{
		printf("����������:>");
		scanf("%s", password);//�洢������ַ��������룩
		if (strcmp(password, "123456") == 0)//strcmp���ڱȽ������ַ����Ƿ����
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
		printf("��������������˳�����");
	return 0;
}