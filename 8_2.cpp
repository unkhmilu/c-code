#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// 扫雷程序
// #define ROW 9
// #define COL 9
// #define ROWS ROW + 2
// #define COLS COL + 2
// #define easy_count 10
// void test()
// {
//     int input = 0;
//     srand((unsigned int)time(NULL));
//     do
//     {
//         menu();
//         printf("请选择\n");
//         scanf("%d", &input);
//         switch (1)
//         {
//         case 1:
//             game();
//             break;
//         case 0:
//             printf("退出游戏\n");
//         default:
//             printf("选择错误，重新选择\n");
//             break;
//         }
//     } while (input);
// }
// void menu()
// {
//     printf("******************************************\n");
//     printf("******      1.play       0.exit     ******\n");
//     printf("******************************************\n");
// }
// void initboard(char board[ROWS][COLS], int rows, int cols, char set)
// {
//     int i = 0;
//     int j = 0;
//     for (i = 0; i < rows; i++)
//     {
//         for (j = 0; j < cols; j++)
//         {
//             board[i][j] = set;
//         }
//     }
// }
// void displayboard(char board[ROWS][COLS], int row, int col)
// {
//     int i = 0;
//     int j = 0;
//     for (i = 0; i <= col; i++)
//     {
//         printf("%d ", i);
//     }
//     printf("\n");
//     for (i = 1; i <= row; i++)
//     {
//         printf("%d ", i);
//         for (j = 1; j <= col; j++)
//         {
//             printf("%c ", board[i][j]);
//         }
//         printf("\n");
//     }
// }
// void setmine(char board[ROWS][COLS], int row, int col)
// {
//     int count = easy_count;
//     while (count)
//     {
//         int x = rand() % row + 1;
//         int y = rand() % col + 1;
//         if (board[x][y] == '0')
//         {
//             board[x][y] = '1';
//             count--;
//         }
//     }
// }
// int getmine(char mine[ROWS][COLS], int x, int y)
// {
//     return mine[x - 1][y] +
//            mine[x - 1][y - 1] +
//            mine[x - 1][y + 1] +
//            mine[x][y + 1] +
//            mine[x][y - 1] +
//            mine[x + 1][y + 1] +
//            mine[x + 1][y] +
//            mine[x + 1][y + 1] - 8 * '0';
// }
// void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
// {
//     int x = 0;
//     int y = 0;
//     int win = 0;
//     while (win < row * col - easy_count)
//     {
//         printf("请输入排查雷的坐标\n");
//         scanf("%d%d", &x, &y);
//         if (x >= 1 && x <= row && y >= 1 && y <= col)
//         {
//             if (mine[x][y] == '1')
//             {
//                 printf("很遗憾，你被炸死了\n");
//                 displayboard(mine, row, col);
//                 break;
//             }
//             else
//             {
//                 // 计算x,y坐标周围有几个雷
//                 int count = getmine(mine, x, y);
//                 show[x][y] = count + '0';
//                 displayboard(show, row, col);
//                 win++;
//             }
//         }
//         else
//         {
//             printf("输入坐标非法，请重新输入\n");
//         }
//     }
//     if (win == row * col - easy_count)
//     {
//         printf("恭喜你，排雷成功\n");
//         displayboard(mine, row, col);
//     }
// }
// void game()
// {
//     // 雷的存储；
//     char mine[ROWS][COLS] = {0};
//     // 搜索出雷的信息
//     char show[ROWS][COLS] = {0};
//     //初始化
//     initboard(mine, ROWS, COLS, '0');
//     initboard(show, ROWS, COLS, '*');
//     // 打印棋盘
//     //displayboard(mine, ROW, COL);
//     displayboard(show, ROW, COL);
//     // 布置雷
//     setmine(mine, ROW, COL);
//     // 扫雷
//     //displayboard(mine, ROW, COL);
//     findmine(mine, show, ROW, COL);
// }

int main()
{
    // test();
    
	//计算 num 的 补码 中有几个 1
    int i = 0;
    int num = 0;
    int count = 0;
    scanf("%d", &num);
    for (i = 0; i < 32; i++)
    {
        if (1 == (num >> i) & 1)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}