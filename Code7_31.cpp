#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")
//void BGM()
//{
//	mciSendString("open ./BGM.mp3", 0, 0, 0);
//	mciSendString("play ./BGM.mp3", 0, 0, 0);
//
//}
//void change()
//{
//	HWND hnd = GetHWnd();
//	SetWindowText(hnd,"easyx测试");
//	MessageBox(hnd,"恭喜你中奖500W","提示",MB_OKCANCEL);
//
//}
////int main()
////{
////	
////	int a[20] = { 0 };
////	int n = 0;
////	scanf("%d",&n);
////	int m = 0;
////	scanf("%d",&m);
////	int i = 0;
////	while (n>0)
////	{
////		a[i] = n % 10;
////		n /= 10;
////		i++;
////	}
////	int len = i;
////	int c = i;
////	for (int k=0;k<m;k++)
////	{
////		for (int j=0;j<len-1;j++)
////		{
////			if (a[j]<a[j+1])
////			{
////				int tmp = a[j + 1];
////				a[j + 1] = a[j];
////				a[j] = tmp;
////			}
////		}
////
////	}
////	int sum = 0;
////	for (int k = i-m-1; k >= 0; k--)
////	{
////		sum = sum * 10 + a[k];
////	}
////	printf("%d\n",sum);
////	return 0;
////}
////int main()
////{
////	initgraph(640,480);
////	cleardevice();
////	setbkcolor(WHITE);
////	cleardevice();
////	setlinecolor(RED);
////	setlinestyle(PS_DASHDOTDOT);
////	setfillcolor(BLUE);
////	circle(50,50,50);
////	fillcircle(50,150,50);
////	solidcircle(200,250,50);
////	settextcolor(RGB(204, 232, 207));
////	settextstyle(50, 10,L"宋体");
////	setbkmode(TRANSPARENT);
////	outtextxy(50, 50, L"你好世界");
////	getchar();
////	//system("pause");
////	closegraph();
//////	return 0;
////}
//int main()
//{
//	int hx = 0;
//	int hy = 0;
//	//BGM();
//	system("title 测试");
//	initgraph(640, 480, SHOWCONSOLE);//初始化图形界面
//	while (1)
//	{
//		change();
//		BeginBatchDraw();
//		setbkcolor(WHITE);//设置背景颜色
//		cleardevice();//清除
//		setlinecolor(RGB(0, 142, 252));//设置线条颜色
//		setlinestyle(PS_DASHDOTDOT);//设置线条样式
//		setfillcolor(YELLOW);//设置填充颜色
//		fillrectangle(50, 50, 450, 250);//设置矩阵大小
//		setbkmode(TRANSPARENT);//设置背景模型
//		settextcolor(RGB(204, 232, 207));//设置文本颜色
//		settextstyle(50, 0, "宋体"); //设置文本款式
//		char p[] = "Hello World!";
//		int hight = textheight(p);
//		int width = textwidth(p);
//		int x = (400 - width) / 2 + 50;
//		int y = (200 - hight) / 2 + 50;
//		outtextxy(x, y, p);//输出文本
//		outtextxy(100, 100, "测试文本");
//		IMAGE img;//定义变量存图片
//		loadimage(&img, "./666.jpg", 150, 50);//把图片加载进img
//		putimage(0, 0, &img);//输出图片
//		MOUSEMSG msg;
//		//cleardevice();
//		setfillcolor(GREEN);
//		
//		if (GetAsyncKeyState(VK_RIGHT))
//		{
//			hx += 20;
//		}
//		if (GetAsyncKeyState(VK_LEFT))
//		{
//			hx -= 20;
//		}
//		if (GetAsyncKeyState(VK_UP))
//		{
//			hy -= 20;
//		}
//		if (GetAsyncKeyState(VK_DOWN))
//		{
//			hy += 20;
//		}
//		fillcircle(hx, hy, 20);
//		FlushBatchDraw();
//		//char a = _getch();
//		//EndBatchDraw();
//		//printf("%d %c\n",a,a);
//		/*switch (a)
//		{
//		case 'W':
//		case'w':
//		case 72:
//			hy -= 15; printf("上键\n"); break;
//		case 'S':
//		case's':
//		case 80:
//			hy += 15;
//			printf("下键\n"); break;
//		case 'A':
//		case'a':
//		case 75:
//			hx -= 15;
//			printf("左键\n"); break;
//		case 'D':
//		case'd':
//		case 77:
//			hx += 15;
//			printf("右键\n"); break;*/
//			//default:printf("其它键\n");
//
//		}
//		//获取鼠标消息
//	//	if (MouseHit())
//	//		cleardevice();
//	//	{
//	//		
//	//		msg = GetMouseMsg();
//	//		if (msg.x >= 50 && msg.x <= 450 && msg.y >= 50 && msg.y <= 250)
//	//			printf("you can see me!\n");
//	//		switch (msg.uMsg)
//	//		{
//	//		case WM_LBUTTONDOWN:
//	//			outtextxy(300, 400, "鼠标左键按下\n"); 
//	//			printf("鼠标左键：x=%d y=%d\n", msg.x, msg.y); break;
//	//		case WM_RBUTTONDOWN:
//	//			outtextxy(300, 400, "鼠标右键按下\n");
//	//			printf("鼠标右键：x=%d y=%d\n", msg.x, msg.y); break;
//	//			break;
//	//		}
//	//	}
//	getchar();
//	closegraph();//关闭界面
//	
//
//	
//	
//	return 0;
//}
//
////int main()
////{
////	//BGM();
////	initgraph(640,480);
////	setbkcolor(WHITE);
////	cleardevice();
////	BGM();
////	getchar();
////	closegraph();
////
////	return 0;
////},0,
void BGM()
{
	mciSendString("open ./BGM.mp3",0,0,0);
	mciSendString("play ./BGM.mp3 repeat", 0, 0, 0);
	mciSendString("close ./BGM.mp3", 0, 0, 0);

}
//int main()
//{
//	
//	BGM();
//	initgraph(640, 480, SHOWCONSOLE);
//	while (1)
//	{
//		setbkcolor(RGB(204, 232, 207));
//		//cleardevice();
//		setlinecolor(RGB(0, 122, 204));
//		setlinestyle(PS_DASH);
//		setfillcolor(RGB(189, 141, 240));
//		int b = 300;
//		int c = 50;
//		int d = 500;
//		int e = 150;
//		fillrectangle(b, c, d, e);
//	}
//	while (1);//卡死图形化界面防止一伞而过；
//	closegraph();
//
//}
void change()
{



}
int main()
{
	//BGM();
	initgraph(640,480,SHOWCONSOLE);
	//while (1)
	//{
	BGM();
		setbkcolor(RGB(204, 232, 207));
		cleardevice();
		setlinecolor(RGB(0, 122, 204));
		setlinestyle(PS_DASH);
		setfillcolor(RGB(189, 141, 240));
		int b = 300;
		int c = 50;
		int d = 500;
		int e = 150;
		fillrectangle(b, c, d, e);
		settextcolor(RED);
		setbkmode(TRANSPARENT);
		settextstyle(25, 0, "宋体");
		char a[] = "you can see me!";
		int width = textwidth(a);
		int hight = textheight(a);
		int x = ((d - b) - width) / 2 + b;
		int y = ((e - c) - hight) / 2 + c;
		outtextxy(x, y, a);
		IMAGE img;
		loadimage(&img, "666.jpg", 300, 250);
		putimage(0, 0, &img);
		/*MOUSEMSG msg;*/
		//while (1)
		//{
		//	if (MouseHit())
		//	{
		//		cleardevice();
		//		msg = GetMouseMsg();
		//		switch (msg.uMsg)
		//		{
		//		case WM_LBUTTONDOWN:
		//			outtextxy(150, 450, "鼠标左键被点击!");
		//			break;
		//		case WM_RBUTTONDOWN:
		//			outtextxy(150, 450, "鼠标右键被点击!");
		//			break;

		//		}

		//	}
		//}
		int hx = 0;
		int hy = 0;
		//MOUSEMSG msg;
		//while (1)
		//{
		//	if (MouseHit())
		//	{
		//		cleardevice();
		//		msg = GetMouseMsg();
		//		setfillcolor(RGB(243, 243, 243));
		//		setlinestyle(PS_DASH);
		//		fillcircle(hx, hy, 20);
		//		hx = msg.x;
		//		hy = msg.y;

		//	}
		//}
		setfillcolor(RGB(243, 243, 243));
		setlinestyle(PS_DASH);
		fillcircle(hx, hy, 20);
		if (GetAsyncKeyState(VK_UP))
			hy -= 15;
		if (GetAsyncKeyState(VK_DOWN))
			hy += 15;
		if (GetAsyncKeyState(VK_LEFT))
			hx -= 15;
		if (GetAsyncKeyState(VK_RIGHT))
			hx += 15;
		
	//}
	while (1);//卡死图形化界面防止一伞而过；
	closegraph();
	return 0;
}