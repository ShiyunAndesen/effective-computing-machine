#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.ʹ��do....while...����ʮ��ѧ���ɼ����ܳɼ���ƽ���ɼ�
//int main()
//{
//	int i = 1, sum = 0, score;
//	float ave;
//	printf("������10��ѧ���ĳɼ���\n");
//	do
//	{
//		printf("%d��ѧ���ĳɼ���", i);
//		scanf("%d", &score);
//		sum += score;
//		i++;
//	} while (i <= 10);
//	ave = sum / 10.0;
//	printf("�ܳɼ�Ϊ%d\tƽ���ɼ�Ϊ%.2f\n", sum, ave);
//	return 0;
//}

//2.ʹ��do-while��䣬�����Sn=ataataaat��+aa��a��ֵ������a 
//��һ�����֡�����:3 + 33 + 333 + 3333 + 33333 + 333333(��ʱ��a = 6, =3),
//a��n�ɼ������롣
//���� : ��
//����Ŀ���Խ����ֲ��Ϊa * 10n + ǰһ�����֣����� :
//	3 = 3 * 10o + 0 : Ĭ��3��ǰһ������Ϊ0��Ҳ����û���κ�ֵ��
//	33 = 3 * 101 + 3 : 33��ǰһ������Ϊ3��
//	333 - 3 * 102 + 33 : 333��ǰһ������Ϊ33��
//	�Դ����ơ�
//	���ԣ���ÿ��ѭ����ʱ����Ҫ�����£���һ�ν����ֵ
int main()
{
	int i = 1, a, n, sum = 0, temp = 0;
	printf("input a:\n");
	scanf("%d", &a);
	printf("input n:\n");
	scanf("%d", &n);
	do
	{
		temp = temp * 10 + a;
		sum = sum + temp;//ѭ����ͣ�������a,aa,....)
		i++;
	} while (i <= n);
	printf("sum=%d\n", sum);
}