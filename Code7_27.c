#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//int main()
//{
//	/*int a=0, b=0;
//	char c=0;
//	double g=0.0;
//	scanf("%d%d", &a,&b);
//	getchar();
//	scanf("%c", &c);
//	if (c == 'm')
//	{
//		if (b == 90)
//			g = a*0.95*6.95;
//		else if (b == 93)
//			g = a*0.95*7.44;
//		else if (b == 97)
//			g = a*0.95*7.93;
//	}
//	else if(c=='e')
//	{
//		if (b == 90)
//			g = 0.97*a*6.95;
//		else if (b == 93)
//			g = 0.97*a*7.44;
//		else if (b == 97)
//			g = 0.97*a*7.93;
//	}
//	printf("%.2f", g);*/
//	//	int a = 10;
//	//	return 0;
//	//}
//#include<stdio.h>
//long long fun(long long n)
//{
//    if (1 == n || 2 == n)
//        return n;
//    return fun(n - 1) + fun(n - 2);
//
//}
//
//int main()
//{
//    long long n = 0;
//    scanf("%lld", &n);
//    printf("%lld\n", fun(n));
//    return 0;
//}
//int i = 1;
//void Hanoi(int n, char a, char b, char c)
//{
//	if (1 == n)
//	{
//		printf("sept%d:%c->%c\n",i++,a,c);
//		return;
//	}
//	Hanoi(n-1,a,c,b);
//	printf("sept%d:%c->%c\n", i++, a, c);
//	Hanoi(n - 1, b, a, c);
//}
//#include<stdio.h>
//int main()
//{
//	char a = 'A';
//	char b = 'B';
//	char c = 'C';
//	int n = 0;
//	scanf("%d",&n);
//	Hanoi(n,a,b,c);
//	return 0;
//}
//牛牛定义了一个函数 digit(x,i) ，表示分离出 x 的后 i 位的数字。
//#include<stdio.h>
//void digit(long long x, int i)
//{
//	if (1 == i)
//	{
//		printf("%lld",x%10);
//		return;
//	}
//	digit(x/10,--i);
//	printf("%lld",x%10);
//
//}
//int main()
//{
//	long long n = 0;
//	int i = 0;
//	scanf("%lld%d",&n,&i);
//	digit(n, i);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int a[100] = { 0 };
//    scanf("%d", &n);
//    int l = 0;
//    int o = 0;
//    for (int i = 0; i < n; i++)
//    {
//        l = 0;
//        o = 0;
//        scanf("%d", &a[i]);
//        int val = a[i];
//        while (val)
//        {
//            if (val % 2)
//                l++;
//            else
//                o++;
//            val /= 2;
//        }
//        //printf("%d\n",o);
//        if (l % 2 && o % 2)
//            printf("%d ", 100);
//        else if ((l % 2 == 0) && (o % 2 == 0))
//            printf("%d ", 10);
//        else if (l % 2 == 0)
//            printf("%d ", 1);
//        else if (o % 2 == 0)
//            printf("%d ", 0);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    //char a1, a2, a3, a4;
//    scanf("%d %c %c %c %c", &n, &a1, &a2, &a3, &a4);
//    char a[100] = { 0 };
//    getchar();
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%c", &a[i]);
//    }
//    int len = 0;
//    if (a2 == a3)
//    {
//        while (a[len])
//            if (a[len] == a1 || a[len] == a3)
//                a[len] = a4;
//        len++;
//    }
//    else {
//        while (a[len])
//        {
//
//
//            if (a[len] == a1)
//                a[len] = a2;
//            if (a[len] == a3)
//                a[len] = a4;
//            len++;
//        }
//
//    }
//    printf("%s\n", a);
//    return 0;
//}