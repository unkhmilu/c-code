#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#define ROW 3
#define COL 3

void initboard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
    int v = 0;
    int i = 0;
    for (i = 0; i < row; i++)
    {
        for (v = 0; v < col; v++)
        {
            printf(" %c ", board[i][v]);
            if (v < col - 1)
            {
                printf("|");
            }
        }
        printf("\n");
        if (i = row - 1)
        {
            for (v = 0; v < col; v++)
            {
                printf("---");
                if (v < col - 1)
                { 
                    printf("|");
                }
            }
            printf("\n");
        }
    }
}

void menu()
{
    printf("************************\n");
    printf("***1、play   0、exit****\n");
    printf("************************\n");
}

void game()
{
    char board[ROW][COL] = {0};
    initboard(board, ROW, COL); // 初始化棋盘
    DisplayBoard(board, ROW, COL);
}
void test()
{
    int input;

    do
    {
        menu();
        printf("请选择\n");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("输入错误，请重新输入\n");
            break;
        }
    } while (input);
}
int main()
{
    test();
    return 0;
}