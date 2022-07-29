#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//void Swap(int *a,int *b)
//{
//	*a = (*a) ^ (*b);
//	*b = (*b) ^ (*a);
//	*a = (*a) ^ (*b);
//}
//int main()
//{
//
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	printf("交换之后:a=%d b=%d\n", a, b);
//	Swap(&a,&b);
//	printf("交换之后:a=%d b=%d\n",a,b);
//	return 0;
//}


//int Count_the_number_of_1(int a)
//{
//	int num = sizeof(int)*8;
//	int b = 0;
//	int count = 0;
//	while (b<num)
//	{
//		if (a & (1 << b))
//			count++;
//		b++;
//	}
//	return count;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int ret=Count_the_number_of_1(a);
//	printf("%d\n",ret);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a,&b);
//	a = a ^ b;
//	int ret = Count_the_number_of_1(a);
//	printf("%d\n", ret);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (EOF != scanf("%d", &n))
//    {
//        if (200 == n)
//            printf("OK\n");
//        else if (202 == n)
//            printf("Accepted\n");
//        else if (400 == n)
//            printf("Bad Request\n");
//        else if (403 == n)
//            printf("Forbidden\n");
//        else if (404 == n)
//            printf("Not Found\n");
//        else if (500 == n)
//            printf("Internal Server Error\n");
//        else if (502 == n)
//            printf("Bad Gateway\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//double fun(double t)
//{
//    if (t > 0)
//        return 1.0;
//    else if (t == 0)
//        return 0.5;
//    else
//        return 0.0;
//
//}
//int main()
//{
//    double t = 0;
//    while (EOF != scanf("%lf", &t))
//    {
//        double ret = fun(t);
//        if (ret == 0.5)
//            printf("%.1lf\n", fun(t));
//        else
//            printf("%d\n", (int)ret);
//    }
//    return 0;
//}
//KiKi想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。
//#include<stdio.h>
//int is_run(int t)
//{
//	return ((t % 4 == 0 && t % 100) || (t % 400 == 0));
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	while (EOF!=scanf("%d%d",&year,&month))
//	{
//		int day = 0;
//		switch (month)
//		{
//		case 12:day = 31; break;
//		case 11:day = 30; break;
//		case 10:day = 31; break;
//		case 9:day = 30; break;
//		case 8:day = 31; break;
//		case 7:day = 31; break;
//		case 6:day = 30; break;
//		case 5:day = 31; break;
//		case 4:day = 30; break;
//		case 3:day = 31; break;
//		case 2:
//		{if (is_run(year))
//		{
//			day = 29;
//		}
//		else
//			day = 28;
//
//		}break;
//		case 1:day = 31; break;
//
//		}
//		printf("%d\n,",day);
//	}
//	return 0;
//}
//int main()
//{
//	float a = 0.0f;
//	float b = 0.0f;
//	float c = 0.0f;
//	scanf("%f%f%f",&a,&b,&c);
//	if ((a + b + c) / 3 < 60)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}#include<stdio.h>
//int main()
//{
//    char arr[13];
//    int i, j;
//    scanf("%s", arr);
//    int s = 0;
//    for (i = 0, j = 1; i < 11; i++)
//    {
//        if (arr[i] != '-')
//        {
//            s += (arr[i] - '0') * j;
//            j++;
//        }
//    }
//    int m = s % 11;
//    if (m == arr[12] - '0' || (m == 10 && arr[12] == 'X'))
//    {
//        printf("Right\n");
//    }
//    else
//    {
//        if (m == 10)
//        {
//            for (i = 0; i < 12; i++)
//            {
//                printf("%c", arr[i]);
//            }
//            printf("X");
//        }
//        else {
//            for (i = 0; i < 12; i++)
//            {
//                printf("%c", arr[i]);
//            }
//            printf("%d", m);
//        }
//    }
//}
//