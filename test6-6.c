#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//
//	int b = 0;
//
//	scanf("%d%d", &a, &b);
//
//	printf("%d %d", a / b, a % b);
//
//	return 0;
//
//}
//#include<stdio.h>
//
//int main()
//
//{
//    int x = 0;
//    scanf("%d", &x);
//    int sum = 0;
//    while (x > 0)
//    {
//        printf("%d", x % 10);
//        x = x / 10;
//    }
//    return 0;
//
//}
//#include<stdio.h>
//
//int main()
//
//{
//    float a, b, c, d, e;
//
//    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
//
//    printf("%.1f\n", (a + b + c + d + e) / 5);
//
//    return 0;
//
//}
//#include<stdio.h>
//
//int main()
//
//{
//    int a = 0;
//    int b = 0;
//    while (scanf("%d%d", &a, &b) != EOF)
//
//    {
//
//        if (a < b)
//            printf("%d<%d\n", a, b);
//        else if (a > b)
//            printf("%d>%d\n", a, b);
//        else
//            printf("%d=%d\n", a, b);
//    }
//    return 0;
//
//}
#include<stdio.h>

int main()

{

	int second = 0;
	scanf("%d", &second);
	printf("%.0f %.0f %d", second / 3600.0, second % 3600 / 60.0, second % 60);

	return 0;

}