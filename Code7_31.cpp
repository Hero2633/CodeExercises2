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
//	SetWindowText(hnd,"easyx����");
//	MessageBox(hnd,"��ϲ���н�500W","��ʾ",MB_OKCANCEL);
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
////	settextstyle(50, 10,L"����");
////	setbkmode(TRANSPARENT);
////	outtextxy(50, 50, L"�������");
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
//	system("title ����");
//	initgraph(640, 480, SHOWCONSOLE);//��ʼ��ͼ�ν���
//	while (1)
//	{
//		change();
//		BeginBatchDraw();
//		setbkcolor(WHITE);//���ñ�����ɫ
//		cleardevice();//���
//		setlinecolor(RGB(0, 142, 252));//����������ɫ
//		setlinestyle(PS_DASHDOTDOT);//����������ʽ
//		setfillcolor(YELLOW);//���������ɫ
//		fillrectangle(50, 50, 450, 250);//���þ����С
//		setbkmode(TRANSPARENT);//���ñ���ģ��
//		settextcolor(RGB(204, 232, 207));//�����ı���ɫ
//		settextstyle(50, 0, "����"); //�����ı���ʽ
//		char p[] = "Hello World!";
//		int hight = textheight(p);
//		int width = textwidth(p);
//		int x = (400 - width) / 2 + 50;
//		int y = (200 - hight) / 2 + 50;
//		outtextxy(x, y, p);//����ı�
//		outtextxy(100, 100, "�����ı�");
//		IMAGE img;//���������ͼƬ
//		loadimage(&img, "./666.jpg", 150, 50);//��ͼƬ���ؽ�img
//		putimage(0, 0, &img);//���ͼƬ
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
//			hy -= 15; printf("�ϼ�\n"); break;
//		case 'S':
//		case's':
//		case 80:
//			hy += 15;
//			printf("�¼�\n"); break;
//		case 'A':
//		case'a':
//		case 75:
//			hx -= 15;
//			printf("���\n"); break;
//		case 'D':
//		case'd':
//		case 77:
//			hx += 15;
//			printf("�Ҽ�\n"); break;*/
//			//default:printf("������\n");
//
//		}
//		//��ȡ�����Ϣ
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
//	//			outtextxy(300, 400, "����������\n"); 
//	//			printf("��������x=%d y=%d\n", msg.x, msg.y); break;
//	//		case WM_RBUTTONDOWN:
//	//			outtextxy(300, 400, "����Ҽ�����\n");
//	//			printf("����Ҽ���x=%d y=%d\n", msg.x, msg.y); break;
//	//			break;
//	//		}
//	//	}
//	getchar();
//	closegraph();//�رս���
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
//	while (1);//����ͼ�λ������ֹһɡ������
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
		settextstyle(25, 0, "����");
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
		//			outtextxy(150, 450, "�����������!");
		//			break;
		//		case WM_RBUTTONDOWN:
		//			outtextxy(150, 450, "����Ҽ������!");
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
	while (1);//����ͼ�λ������ֹһɡ������
	closegraph();
	return 0;
}