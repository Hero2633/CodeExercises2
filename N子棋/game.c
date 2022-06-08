#define _CRT_SECURE_NO_WARNINGS
#include"Gobang.h"
void test1()
{
	int com = 0;
	int man = 0;
	char arr[R][C];
	Initialize(arr);
	while (1)
	{
	   com=ComputerMove(arr);
	if (com == Size+1 )
	{
		system("cls");
		PrintfArr(arr);
		printf("小菜鸡,居然让电脑赢了\a\a\a\n");
		break;
	}
	else if (com == 1)
	{
		system("cls");
		PrintfArr(arr);
		printf("平局\a\a\a\n");
		break;
	}
		PrintfArr(arr);
		///////////////////////////分界线
		man=HumanMove(arr);
		if (man >= Size+1 )
		{
			system("cls");
			PrintfArr(arr);
			printf("恭喜你赢了\a\a\a\n");
			break;
		}
		else if (man >= 1)
		{
			system("cls");
			PrintfArr(arr);
			printf("平局\a\a\a\n");
			break;
		}
		system("cls");
	}
	
}

int main()
{
	srand((int)time(NULL));
	test1();

	return 0;
}