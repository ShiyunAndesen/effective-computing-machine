#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
//������������Ϸ
void meun()
{
	printf("***************\n");
    printf("***1.play 0.exit ***\n");
    printf("***************\n");

}
//��Ϸ�������㷨ʵ��
void game()
{
    char bpard[ROW][COL] = { 0 };
//���顪������߳���������Ϣ
    Init board(board, ROW, COL);
//��ʼ������
    Display Board(board, ROW, COL);
//��ӡ����
void test()
{
    int input = 0;
    do
    {
        meun();
        printf("��ѡ��:>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            printf("������");
                break;
        case 0:
            printf("�˳���Ϸ\n");
            break;
        defalt:
            printf("ѡ�����������ѡ��\n");
            break;
        }
    } while (input);
}
int main()
{
    test();
        return 0;
}