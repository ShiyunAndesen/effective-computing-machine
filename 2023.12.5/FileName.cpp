#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	float price, pay, total, discount, income, change;
//	int count;
//	printf("��������Ʒ���ۣ������������տ��\n");
//	scanf("%f%d%f", &price, &count, &pay);
//	total = price * count;
//	if (total < 1000)
//		discount = 0;
//	else
//		if (total < 3000)
//			discount = 0.05;
//		else
//			if (total < 6000)
//				discount = 0.1;
//			else
//				if (total < 8000)
//					discount = 0.15;
//				else
//					discount =0.2;
//	income = total * (1 - discount);
//	change = pay - income;
//	printf("Ӧ�ս�%.2f���һؽ�%.2f", income, change);
//	return 0;
//}


//����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��졣
int main()
{
	int year, month, day, total;
	printf("�����������գ���ʽΪ��2008 12 10����\n");
	scanf("%d%d%d", &year, &month, &day);
	if (year < 0 || month <= 0 || month>12 || day <= 0 || day > 31)
		printf("������������ȷ�Ϻ��������룡\n");
	else
		switch (month)
		{
		case 1:break;
		case 2:total = 31;break;
		case 3:total = 59;break;
		case 4:total = 90;break;
		case 5:total = 120;break;
		case 6:total = 151;break;
		case 7:total = 181;break;
		case 8:total = 212;break;
		case 9:total = 243;break;
		case 10:total = 273;break;
		case 11:total = 304;break;
		case 12:total = 334;break;
		}
	total += day;
	if ((year % 4 == 0 && year != 0) || (year % 400) == 0)
	if (month > 2)
		total++;
	printf("����%d��ĵ�%d��\n", year, total);
	return 0;
}