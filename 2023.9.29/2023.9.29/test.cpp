#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>

//дһ�����������ж�һ�����ǲ�������
// ����������1��������������0
int is_prime(int n)
{
	//��2��n-1�������ж��Ƿ�������
	int j = 0;
	for (j = 2;j <= sqrt(n);j++);
	{
		if (n%j == 0)
			return 0;
	//if(j==n)
	return 1;
}
int main()
	{
		//��ӡ100-200֮�������
		int i = 0;
		for (i = 100;i <= 200;i++)
		{
			//�ж�i�Ƿ�Ϊ����
			if (is_prime(i) == 1)
				printf("%d\n", i);
		}
		return 0;
	}
	
//дһ�������ж�һ���ǲ�������
int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y%400==0))
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	for (year = 1000;year <= 2000;year++)
	{
		//�ж�year�Ƿ�Ϊ����
		if (1 == is_leap_year(year))
		{
			printf("%d\n", year);
		}
	}
	return 0;
}

//дһ��������ʵ��һ��������������Ķ��ֲ���
                  //������arr��һ��ָ��
int binary_search(int arr[], int k,int sz)
{
	//�㷨��ʵ��
	//int sz = sizeof(arr) / sizeof(arr[0]);//�����ڲ���������������>������
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;//�м�Ԫ�ص��±�
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
}
int main()
{
	//���ֲ���
	//��һ�����������в��Ҿ����ĳ����
	//����ҵ��˷�����������±꣬�Ҳ����ķ���-1
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//�ں����ⲿ���Ԫ�ظ�������
	                      //���ݹ�ȥ��������arr��Ԫ�صĵ�ַ
	int ret = binary_search(arr, k,sz);
	if (ret == -1)
	{
		printf("�Ҳ���ָ��������\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}
}

//дһ��������ÿ����һ������������ͻὫnum��ֵ����1
void Add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("num=%d\n", num);//1
	Add(&num);
	printf("num=%d\n", num);//2
	Add(&num);
	printf("num=%d\n", num);//3
	return 0;
}