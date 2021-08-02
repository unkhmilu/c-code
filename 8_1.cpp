#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
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
        if (i < row - 1)
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

void playermove(char board[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    printf("玩家走\n");
    while (1)
    {
        printf("请输入坐标：\n");
        scanf("%d%d", &x, &y);
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if (board[x - 1][y - 1] == ' ')
            {
                board[x - 1][y - 1] = '*';
                break;
            }
            else
            {
                printf("该坐标被占用\n");
            }
        }
        else
        {
            printf("坐标非法，请重新输入！\n");
            break;
        }
    }
}

void computermove(char board[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    printf(" 电脑走\n");
    while (1)
    {
        x = rand() % row;
        y = rand() % col;
        if (board[x][y] == ' ')
        {
            board[x][y] = ' #';
            break;
        }
    }
}

char ifwin(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
        {
            return board[i][1];
        }
    }
    for (i = 0; i < col; i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
        {
            return board[1][i];
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    if ( 1== iffull(board,ROW,COL))
    {
        return 'q';
    }
    return 'c';
}

int iffull(char board[ROW][COL], int row,int col)
{
    int i = 0;
    int j = 0;
    for ( j=0;j<row;j++ )
    {
        for ( i = 0; i < col ; i ++)
        {
            if( board[i][j] == ' ')
            {
                return 0;
            }
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
    char ret = 0;
    char board[ROW][COL] = {0};
    initboard(board, ROW, COL);    // 初始化棋盘
    DisplayBoard(board, ROW, COL); // 打印棋盘
    while (1)
    {
        playermove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        ret = ifwin(board, ROW, COL);
        if (ret != 'c')
        {
            break;
        }
        computermove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        ret = ifwin(board, ROW, COL);
        if (ret != 'c')
        {
            break;
        }
    }
    if (ret == '*')
    {
        printf("玩家赢\n");
    }
    else if (ret == 'q')
    {
        printf("平局");
    }
    else
    {
        printf("电脑赢 ");
    }
}
void test()
{
    int input;
    srand((unsigned int)time(NULL));
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