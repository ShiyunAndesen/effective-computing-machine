#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
//测试三子棋游戏
void meun()
{
	printf("***************\n");
    printf("***1.play 0.exit ***\n");
    printf("***************\n");

}
//游戏的整个算法实现
void game()
{
    char bpard[ROW][COL] = { 0 };
//数组——存放走出的棋盘信息
    Init board(board, ROW, COL);
//初始化棋盘
    Display Board(board, ROW, COL);
//打印棋盘
void test()
{
    int input = 0;
    do
    {
        meun();
        printf("请选择:>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            printf("三子棋");
                break;
        case 0:
            printf("退出游戏\n");
            break;
        defalt:
            printf("选择错误，请重新选择\n");
            break;
        }
    } while (input);
}
int main()
{
    test();
        return 0;
}