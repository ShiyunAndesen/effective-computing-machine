#include<stdio.h>
//��СдӢ����ĸ���໥ת��
//int main()
//{
//	char ch1, ch2;
//	ch1 = 'a';
//	ch2 = 'Q';
//	ch1 = ch1 - 32;
//	ch2 = ch2 + 32;
//	printf("%c,%c\n%d,%d\n", ch1, ch2, ch1, ch2);
//	return 0;
//}

//��дA СдbӢ����ĸ���໥ת�������ֱ����ַ��ͺ�������ʽ���
//int main()
//{
//	char ch1, ch2;
//	ch1 = 'A';
//	ch2 = 'b';
//	ch1 = ch1 + 32;
//	ch2 = ch2 - 32;
//	printf("%c,%c\n%d,%d\n", ch1, ch2, ch1, ch2);
//	return 0;
//}

//�ַ��ͱ��������ͱ������໥��ֵ
int main()
{
	char x = '\256';
	int y;
	y = x;
	printf("y=%d\n", y);//��y=-82
	return 0;
}