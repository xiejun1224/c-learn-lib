#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	srand((unsigned)time(NULL));
	//写出游戏逻辑
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	//初始化棋盘
	    InitBoard(mine, ROWS, COLS, '0');
		InitBoard(show, ROWS, COLS, '*');
		//打印棋盘
		//PrintBoard(mine, ROW, COL);
		PrintBoard(show, ROW, COL);//只需要打印棋盘中间的9行9列就行了所以只需要传ROW和COL就行
		//布置雷
		SetMine(mine, ROW, COL);
		//PrintBoard(mine, ROW, COL);
		//排查雷
		//输入坐标，看这个坐标是否越界
		//如果是雷，游戏结束
		//如果不是雷显示周围雷的个数
		FindMine(mine, show, ROW, COL);
		
	
}
void menu()
{
	printf("请选择\n");
	printf("******1. play ************\n");
	printf("******0. exit ************\n");	
}
void test()
{
	int input = 0;
	do
	{
		menu();
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
			printf("选择错误请重新选择\n");
			break;

		}
	} while (input);//使用do while时不要忘记在while后加“；”。
}
int main()
{
	test();
	return 0;
}