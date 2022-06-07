#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int DanceSteps(int n)
//{
//    if (n <= 2)
//        return n;
//    else
//        return DanceSteps(n - 1) + DanceSteps(n - 2);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int sum = DanceSteps(n);
//    printf("%d\n", sum);
//    return 0;
//}
//void Hannuo(int n, char a, char b, char c)
//{
//	static int i = 1;
//	if (n < 2)
//	{
//		printf("Sept%4d:%c->%c\n",i,a,c);
//		i++;
//	}
//	else
//	{
//
//		Hannuo(n - 1, a, c, b);
//		printf("Sept%4d:%c->%c\n",i,a,c);
//		i++;
//		Hannuo(n-1,b,a,c);
//
//	}
//
//
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	Hannuo(n,'A','B','C');
//	return 0;
//}
#/*include<stdio.h>

int main()

{

    int n = 0;

    scanf("%d", &n);

    int time = 0;

    if (n < 12)

        time = 2;

    else if ((n + 1) % 12)

        time = (n + 1) / 12 * 4 + 2;

    else

        time = (n + 1) / 12 * 4;

    printf("%d\n", time);
*/
   /* return 0;

}/**/
//#include<stdio.h>
//
//#include<string.h>
//
//int main()
//
//{
//
//
//
//    int sum = printf("Hello world!");
//
//    putchar('\n');
//
//    printf("%d\n", sum);
//
//    return 0;
//
//
//
//}*/
//#include<stdio.h>
//
//int main()
//
//{
//
//    char ch = 0;
//
//    scanf("%c", &ch);
//
//    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//
//        puts("YES");
//
//    else
//
//        puts("NO");
//
//
//
//    return 0;
//
//}