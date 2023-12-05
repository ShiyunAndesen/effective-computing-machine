#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	float price, pay, total, discount, income, change;
//	int count;
//	printf("请输入商品单价，购买数量，收款金额：\n");
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
//	printf("应收金额：%.2f，找回金额：%.2f", income, change);
//	return 0;
//}


//输入某年某月某日，判断这一天是这一年的第几天。
int main()
{
	int year, month, day, total;
	printf("请输入年月日（格式为：2008 12 10）：\n");
	scanf("%d%d%d", &year, &month, &day);
	if (year < 0 || month <= 0 || month>12 || day <= 0 || day > 31)
		printf("您输入有误，请确认后重新输入！\n");
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
	printf("这是%d年的第%d天\n", year, total);
	return 0;
}