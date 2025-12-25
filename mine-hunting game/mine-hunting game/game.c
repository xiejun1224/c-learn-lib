#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int GetMine(char mine[ROWS][COLS], int x, int y)
{
	int count = 0;
	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1; j++)
		{
			count += mine[x + i][y + j];
		}
	}
	return count-9*'0';
}
void InitBoard(char boar[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			boar[i][j] = set;
		}
	}
}
void PrintBoard(char boar[ROWS][COLS], int row, int col)
{
	printf("-------扫雷--------\n");
	for (int i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", boar[i][j]);
		}
		printf("\n");
	}
		
}
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_CIUNT;
	int x = 0;
    int y = 0;
	
	while (count)
	{
		x = rand() % 9 + 1;
		y = rand() % 9 + 1;
		if (mine[x][y] != '1')
		{
			mine[x][y] = '1';
			count--;
		}
	}

}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	int x = 0;
	int y = 0;
	
	while (row*col- EASY_CIUNT!= win)
	{
		printf("请输入坐标：");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 & y <= 9)
		{
			if (mine[x][y] == '1')
			{
				printf("你小子踩雷了，游戏结束\n");
				PrintBoard(mine, ROW, COL);
					break;
			}
			else
			{
				int count = GetMine(mine,x,y);
				show[x][y] = count + '0';
				PrintBoard(show, ROW, COL);
				win++;

			}
		}
		else
		{
			printf("输入错误，请重新输入。x和y的范围都在（1~9）\n");
		}
	}
}