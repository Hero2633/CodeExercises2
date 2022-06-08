#define _CRT_SECURE_NO_WARNINGS
#include"Gobang.h"

void Initialize(char a[][C])
{
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < R; j++)
		{
			a[i][j] = ' ';


		}
	}

}

void PrintfArr(char a[][C])
{
	int n = 1;
	for (int m = 1; m <=C; m++)
	{
		printf("  %d ",m);
	}
	printf(" 电脑->X || 玩家->O");
	puts("  ");
	for (int i = 0; i < R; i++)
	{
		printf("  ");
		for (int j = 0; j < C; j++)
		{
			printf("+---");
		}
		puts("+");
		printf("%2d", n);
		n++;
		for (int k = 0; k < C; k++)
		{
			printf("| %c ", a[i][k]);
		}
		puts("|");

	}
	printf("  ");
	for (int j = 0; j < C; j++)
	{
		printf("+---");
	}
	puts("+");

}


int ComputerMove(char a[][C])
{
	int x = 0;
	int y = 0;
	x = rand() % R;
	y = rand() % C;
	while (a[x][y] != ' ')
	{
		x = rand() % R;
		y = rand() % C;
	}
	a[x][y] = 'X';
return WhoWin(a,x,y,'X');
}

int HumanMove(char a[][C])
{
	int x = 0;
	int y = 0;
	printf("请输入你的坐标>:");
	scanf("%d%d",&x,&y);
	while ((x > R || x < 1) || (y > C || y <1) || a[x-1][y-1] != ' ')
	{
		printf("坐标非法,请重新输入>:");
		scanf("%d%d",&x,&y);
	}
	a[x-1][y-1] = 'O';
	return WhoWin(a, x - 1, y - 1, 'O');

}

int WhoWin(char a[][C],int x,int y,char ch)
{
	int count = 0;
	int x1 = x;
	int y1 = y;
	//////////////////横着来
	while ((x1 < R && x1 >= 0) && (y1 < C && y1 >= 0)&&a[x1][y1++]==ch)
	{
		count++;
	}
	x1 = x;
	y1 = y;
	while ((x1 < R && x1 >= 0) && (y1 < C && y1 >= 0) && a[x1][y1--] == ch)
		count++;
	if (count >= Size+1)
		return count;
	////////////////////////////
	x1 = x;
	y1 = y;
	count = 0;
	/////////////////////////////竖着来
	while ((x1 < R && x1 >= 0) && (y1 < C && y1 >= 0) &&a[x1++][y1]==ch)
		count++;
	x1 = x;
	y1 = y;
	while ((x1 < R && x1 >= 0) && (y1 < C && y1 >= 0) && a[x1--][y1]==ch)
		count++;
	if (count >= Size+1)
		return count;
	////////////////////////////
	count = 0;
	x1 = x;
	y1 = y;
	/////////////////////////左下来
	while ((x1<R&&x1>=0)&&(y1<C&&y1>=0)&&a[x1++][y1++]==ch)
	{
		count++;
	}
	x1 = x;
	y1 = y;
	while ((x1 < R && x1 >= 0) && (y1 < C && y1 >= 0) && a[x1--][y1--] == ch)
		count++;
	if (count >= Size+1)
		return count;
	////////////////////////////////////
	count = 0;
	x1 = x;
	y1 = y;
	//////////////////////////////////左下来
	while ((x1 < R && x1 >= 0) && (y1 < C && y1 >= 0) && a[x1++][y1--] == ch)
		count++;
	x1 = x;
	y1 = y;
	while ((x1< R && x1 >= 0) && (y1 < C && y1 >= 0) && a[x1--][y1++] == ch)
		count++;
	if (count >= Size+1)
		return count;
	//////////////////////////
	if (IsFull(a) == true)
		return 1;//(没有谁赢)棋盘满了，游戏结束
	return -1;//都不满足且棋盘未满，游戏继续

}

bool IsFull(char a[][C])
{
	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
			if (a[i][j] == ' ')
				return false;
	return true;

}