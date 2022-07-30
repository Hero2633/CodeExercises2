#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<string.h>
void fun(int (*p)[5])
{
	printf("%zu\n", sizeof(*p));
	printf("%d\n",*(*p+1));
}

//int main()
//{
//	int a[5] = { 0 };
//	fun(&a);
//
//	return 0;
//}
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	//printf("%d\n", sizeof(a));//16
//	//printf("%d\n", sizeof(a + 0));////4
//	//printf("%d\n", sizeof(*a));//4
//	//printf("%d\n", sizeof(a + 1));//4
//	//printf("%d\n", sizeof(a[1]));//4
//	//printf("%d\n", sizeof(&a));//4
//	//printf("%d\n", sizeof(*&a));//16
//	//printf("%d\n", sizeof(&a + 1));//4
//	//printf("%d\n", sizeof(&a[0]));//4
//	//printf("%d\n", sizeof(&a[0] + 1));//4
//
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr + 0));//4
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4
//	printf("%d\n", sizeof(&arr + 1));//4
//	printf("%d\n", sizeof(&arr[0] + 1));//4
//	printf("%d\n", strlen(arr));//随机值
//	printf("%d\n", strlen(arr + 0));//随机值
//	printf("%d\n", strlen(*arr));//1
//	printf("%d\n", strlen(arr[1]));//随机值
//	printf("%d\n", strlen(&arr));//4
//    printf("%d\n", strlen(&arr + 1));//4
//	printf("%d\n", strlen(&arr[0] + 1));//4
//	/*char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr + 0));
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(&arr + 1));
//	printf("%d\n", sizeof(&arr[0] + 1));
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0));
//	printf("%d\n", strlen(*arr));
//	printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));*/
//	return 0;
//}
/*nt main()
{

	char* p = "abcd";
	if (p == "abcd")
		printf("哈哈\n");
	return 0;
}*/
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//void print_bin(int n)//从左往右为第一位......
//{
//	int i = 0;
//	int a[32] = { 1 };
//	while (n)
//	{
//		a[i] = n % 2;
//		n /= 2;
//		i++;
//	}
//	printf("偶数位:");
//	for (int j = i-1; j >= 0; j--)
//	{
//		if((j+1)%2==0)
//		printf("%d ",a[j]);
//	}
//	printf("奇数位:");
//	for (int j = i - 1; j >= 0; j --)
//	{
//		if((j+1)%2)
//		printf("%d ",a[j]);
//	}
//}
//void print_(int n,int num)
//{
//	if (num == 32 || num == 31)
//	{
//		if (n & (1 << (num - 1)))
//			printf("1 ");
//		else
//			printf("0 ");//00101010101010101010101010101010
//		return;
//	}
//	print_(n,num+2);
//	if (n & (1 << (num-1)))
//		printf("1 ");
//	else
//		printf("0 ");
//
//}
//void print_(int n,int num)
//{
//	if (num == 31 || num == 32)
//	{
//		printf("%d ",(n>>((num-1)))&1);
//		return;
//	}
//	print_(n,num+2);
//	printf("%d ", (n >> ((num - 1))) & 1);
//
//
//}
//void print_bin(int n)
//{
//	printf("奇数位:");
//	print_(n,1);
//	printf("偶数位:");
//	print_(n,2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	print_bin(n);
//	return 0;
//}
//int main()
//{
//    int j = 0;
//    int n = 2;
//    scanf("%d", &n);
//    int a[10][10] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < i; j++)
//        {
//            if (a[i][j] != 0)
//            {
//                printf("NO\n");
//                return 0;
//            }
//        }
//    }
//    printf("YES\n");
//
//    return 0;
//}
//void BC111(int m)
//{
//	if (m < 6)
//	{
//		printf("%d",m);
//		return;
//	}
//	BC111(m/6);
//	printf("%d", m % 6);
//}
//int main()
//{
//	int m = 0;
//	scanf("%d",&m);
//	BC111(m);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int a[50] = { 1 };
//	for (int j = 0; j < n; j++)
//	{
//		scanf("%d",a+j);
//	}
//	int key = 0;
//	scanf("%d",&key);
//	key--;
//	for (int i = 0; i < n; i++)
//	{
//		if (i == key)
//			continue;
//		printf("%d ",a[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d",&m,&n);
//	int a = m;
//	int b = n;
//	while (a%b)
//	{
//		int tmp = a % b;
//		a = b;
//		b = tmp;
//	}
//	printf("%d\n",b+(m/b)*(n/b)*b);
//	return 0;
//}
//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//void print_bin(int n)
//{
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	print_bin(n);
//
//	return 0;
//}
//int main()
//{
//	int a = -4;
//	unsigned int c = -4;
//	int b = a >> 4;
//	int d = c >> 4;
//	printf("b=%d\n", b);
//	printf("d=%d\n",d);
//	return 0;
//}
//int main()
//{
//	int a = 2;
//	int b = 3;
//	printf("\nbefore:a=%d b=%d", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("\nafter:a=%d b=%d",a,b);
//	return 0;
//}

void print_bin(int n)
{
	int i = 0;
	int num = sizeof(int) * 8;
	i = num - 1;
	while ((i--)>=0)
	{		if (n & (1 << i))
			printf("1");
		else
			printf("0");
}
	putchar('\n');
}
//
//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//程序输出的结果是什么？
int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));
	printf("%u\n", sizeof(+c));
	printf("%u\n", sizeof(-c));
	return 0;
}