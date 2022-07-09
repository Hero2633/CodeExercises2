#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//int main()
//{
//	printf("%u\n",sizeof('a'));
//	return 0;
//}
//int main()
//{
//	/*const int a = 1;
//	a = 9;*/
//	//const int a = 9;
//	/*int* p = &a;
//	*p = 10;
//	printf("%d\n",a);*/
//	//const int a = 10;
//	//const int* p = &a;
//	///**p = 1;*/
//	//p = (int *)1;
//	/*const int a = 10;
//	const int* const p = &a;
//	const int* p1 = p;
//	printf("%d\n",a);*/
//	//int a = 8;
//	//int* p1 = &a;
//	//const int*const*const pp1 = &p1;
//	///***pp1 = 10;*/
//	//*pp1 = 1;
//	//pp1 = 10;
//	//**pp1 = 1;
//	/*int a = 1;
//	int* p = &a;
//	int** pp = &p;
//	const int * const * const * const ppp = &pp;
//	***ppp = 1;
//	**ppp = 1;
//	*ppp = 1;
//	ppp = 1;
//
//*/
//
//
//	return 0;
//}




//int main()
//{
//
//	const int a = 1;
//	/*int b = a;*/
//	 const int *  p = &(int )a;
//	/* int** pp = &(int*)p;*/
//	 int* pp = &a;
//
//
//
//
//	return 0;
const int* fun()
{
	static int p = 1;
	printf("%d\n",p);
	return&p;
}
//int main()
//{
//	/*int* p = &((int) *fun());*/
//	int* p = (int*)fun();
//	*p = 10;
//	fun();
//	return 0;
//}
//void ffun(const int *p)
//{
//	//(*p)++;
//	*p++;
//	printf("haha\n");
//
//}
//int main()
//{
//	int num = 10;
//	const int* p = &num;
//	const int*const* pp = (int **)&p;
//	pp = (int**)1;
//	ffun(&num);
//
//	return 0;
//}


//int main()
//{
//	 volatile int pass = 1;
//	while (pass)
//	{
//		;
//	}
//
//	return 0;
//}
//int main()
//{
//
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%#X,%#X\n", ptr1[-1],*ptr2);//5,2000000
//
//	return 0;
/*}*/
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int x = 1;
//    int y = 0;
//    int x1 = 1;
//    int y1 = 1;
//    scanf("%d%d", &x, &y);
//eg:scanf("%d%d", &x1, &y1);
//    if (abs(x1 - x) + abs(y1 - y) != 1)
//        goto eg;
//    if (x == x1)
//    {
//        if (y1 > y)
//            printf("u\n");
//        else if (y1 < y)
//            printf("d\n");
//
//    }
//    else if (y == y1)
//    {
//        if (x > x1)
//            printf("l\n");
//        else if (x < x1)
//            printf("r\n");
//
//    }
//
//    return 0;
//}
//#pragma warning (disable:6031)
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d%d", &m, &n);
//    int* a1 = (int*)malloc(sizeof(int) * m);
//    int* a2 = (int*)malloc(sizeof(int) * n);
//    int* sum = (int*)malloc(sizeof(int) * (m + n));
//
//    for (int i = 0; i < m; i++)
//        scanf("%d", &a1[i]);
//    for (int j = 0; j < n; j++)
//        scanf("%d", &a2[j]);
//    int l1 = 0;
//    int l2 = 0;
//    int l3 = 0;
//    while (l1 < m && l2 < n)
//    {
//        if (a1[l1] <= a2[l2])
//        {
//            sum[l3] = a1[l1];
//            l1++;
//        }
//        else
//        {
//            sum[l3] = a2[l2];
//            l2++;
//
//        }
//        l3++;
//    }
//    if (l1 == m)
//        for (; l2 < n; l2++)
//        {
//            sum[l3] = a2[l2];
//            l3++;
//        }
//    if (l2 == n)
//    {
//        for (; l1 < m; l1++)
//        {
//            sum[l3] = a1[l1];
//            l3++;
//        }
//    }
//    for (int k = 0; k < m + n; k++)
//        printf("%d ", sum[k]);
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//
//    int n = 0;
//    scanf("%d", &n);
//    int* a = (int*)malloc(sizeof(int) * n);
//    for (int i = 0; i < n; i++)
//        scanf("%d", &a[i]);
//    int flag1 = 1;
//    int flag2 = 1;
//
//
//    for (int i = 0; i < n - 1; i++)
//        if (a[i] > a[i + 1])
//        {
//            flag1 = 0;
//            break;
//        }
//
//    for (int i = 0; i < n - 1; i++)
//        if (a[i] < a[i + 1])
//        {
//            flag2 = 0;
//            break;
//        }
//
//    if (flag1 == 1 || flag2 == 1)
//        puts("sorted");
//    else
//        puts("unsorted");
//
//    return 0;
//}