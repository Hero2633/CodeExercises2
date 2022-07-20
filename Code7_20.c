#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//int main()
//{
//	for (int i = 0; i <= 100; i++)
//	{
//		if (i % 2)
//		{
//			printf("%d  ",i);
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch=getchar())!=EOF)
//	{
//		if (ch < '0' || ch>'9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	for (i=1;i<101;i++)
//	{
//		if (!(i % 3))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d",&a,&b,&c);
//	if (a <= b)
//	{
//		a = a ^ b;
//		b = a ^ b;
//		a = a ^ b;
//	}
//	if (a <= c)
//	{
//		a = a ^ c;
//		c = a ^ c;
//		a = a ^ c;
//	}
//	if (b<=c)
//	{
//		b = b ^ c;
//		c = b ^ c;
//		b = b ^ c;
//	}
//	printf("%d %d %d\n",a,b,c);
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 101;
//	int j = 2;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int flag = 0;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (!(i % j))
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (!flag)
//			printf("%d ",i);
//	}
//	return 0;
//}
//int main()
//{
//	int year = 1000;
//	int r = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((!(year % 4)) && year % 100)|| \
//			(!(year%400)))
//		{
//			r++;
//			printf("%d ",year);
//			if (r != 0 && (!(r % 20)))
//				putchar('\n');
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	if (b > a)
//	{
//		a = a ^ b;
//		b = a ^ b;
//		a = a ^ b;
//	}
//	while (a%b!=0)
//	{
//		int tmp = a%b;
//		a = b;
//		b = tmp;
//	}
//	printf("%d\n",b);
//}
//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d x %-2d=%2d ",i,j,i*j);
//		}
//		putchar('\n');
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int max = 0;
//	scanf("%d",&arr[0]);
//	max = arr[0];
//	for (int i = 1; i < 10; i++)
//	{
//		scanf("%d",&arr[i]);
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("%d\n",max);
//	
//	return 0;
//}
//void PrintfArr(const int* a, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ",a[i]);
//	}
//}
//void BubbleSort1(int *a,int end)
//{
//	if (end == 0)
//		return;
//	int i = 0;
//	for (i = 0; i < end-1; i++)
//	{
//		if (a[i] > a[i + 1])
//		{
//			int tmp = a[i + 1];
//			a[i + 1] = a[i];
//			a[i] = tmp;
//		}
//	}
//	BubbleSort1(a,end-1);
//}
//void BubbleSort2(int *a,int len)
//{
//	int i = 0;
//	int j = 0;
//	for (i=0;i<len;i++)
//	{
//		for (j=0;j<len-i-1;j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int tmp = a[j + 1];
//				a[j + 1] = a[j];
//				a[j] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = {9 ,8 ,7,6,6,5,5,5,555,5,5,5,9,2,52,4,8,79};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort2(arr,len);
//	PrintfArr(arr,len);
//	return 0;
//}
//int main()
//{
//	int age = 110;
//	scanf("%d",&age);
//	if (age < 18)
//		printf("少年\n");
//	else if (age >= 18 && age < 30)
//		printf("青年\n");
//	else if(age>=30&&age<50)
//		printf("中年\n");
//	else if(age>=50&&age<70)
//		printf("老年\n");
//	else
//		printf("与天长寿\n");
//
//
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 32;
//	int c = 4;
//
//	if (a == 1)
//		if (b == 3)
//			printf("you can see me!\n");
//		else if (c == 2)
//			printf("hahaha\n");
//    else
//			printf("you not can see me!\n");
//
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
//	const int n = 3;
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case n:
//	case 4:
//	case 5:printf("工作日\n"); break;
//	case 6:
//	case 7:printf("周末\n"); break;
//	default:printf("输入错误\n"); break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	//for(i=1/*初始化*/; i<=10/*判断部分*/; i++/*调整部分*/)
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	do
//	{i++;
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		
//		
//	} while (i < 10);
//	return 0;
//}
//int main()
//{
//	printf("%d\n",M);
//	return 0;
//}