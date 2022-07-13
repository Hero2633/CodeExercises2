#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//
//#/**/define/*                     */MAX/*                  */10/**/
//int main()
//{
//	if (0)
//	{
//		printf("1、Hello world!\n");
//		printf("2、Hello world!\n");
//		printf("3、Hello world!\n");
//		printf("4、Hello world!\n");
//		printf("5、Hello world!\n");
//		printf("6、Hello world!\n");
//	}
//	return 0;
//}
//int main()
//{
//	char a = 'a';
//	printf("%u\n", sizeof('a'));//
//	printf("%u\n", sizeof("a"));//
//	printf("%u\n",sizeof(a));//
//	printf("%u\n", sizeof('abcd'));//
//	printf("%u\n", sizeof("abcd"));//
//	
//	
//	return 0;
//}
//int main()
//{
//	char a = 0;
//	char b = 19;
//	printf("%d\n",a&&++b);
//	printf("%d\n",b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a || b)
//		printf("you can see me!\n");
//	else
//		printf("you not can see me\n");
//
//	return 0;
//}
//void ShowBits(int n)
//{
//	int num = sizeof(int) * 8 - 1;
//	int count = 0;
//	while (num >= 0)
//	{
//		if (n & (1 << num))
//			printf("1");
//		else
//			printf("0");
//		num--;
//		count++;
//		if ((count) && (count % 4==0))
//		{
//			printf(" ");
//		}
//	}
//	printf("\n");
//}

//
//int main()
//{
//	int a = -1;
//	printf("before:");
//	ShowBits(a);
//	printf(" after:");
//	ShowBits(~a);
//	return 0;
//}
//int main()
//{
//	int a = 4;//100
//	int b = 3;//011
//	printf("%d\n",a^b);//a^b:111
//	return 0;
//}
//#define fun1(x,n) x=x|(1<<(n-1))
//#define fun2(x,n) x=~x;x=fun1(x,n);x=~x
//const int i_val = 10;
//int main()\
//{
//
//	/*int a = -1;
//	ShowBits(a);
//	fun2(a,3);
//	ShowBits(a);*/
//	int* p = (int*)&i_val;
//	*p = 17;
//	printf("%d\n",i_val);
//	return 0;
//
//}
//#include<math.h>
//int main()
//{
//	float a, b, c, d, e;
//	a = 1.0f;
//	b = 2.1f;
//	c = -1.3f;
//	d = -0.2f;
//	e = 3.76f;
//	printf("f_val\ttrunc\tfloor\tceil\tround\n");
//	printf("%.1f\t%.1f\t%.1f\t%.1f\t%.1f\n", a, trunc(a), floor(a), ceil(a), round(a));
//	printf("%.1f\t%.1f\t%.1f\t%.1f\t%.1f\n", b, trunc(b), floor(b), ceil(b), round(b));
//	printf("%.1f\t%.1f\t%.1f\t%.1f\t%.1f\n", c, trunc(c), floor(c), ceil(c), round(c));
//	printf("%.1f\t%.1f\t%.1f\t%.1f\t%.1f\n", d, trunc(d), floor(d), ceil(d), round(d));
//	printf("%.1f\t%.1f\t%.1f\t%.1f\t%.1f\n", e, trunc(e), floor(e), ceil(e), round(e));
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int b = 10;
//	b = i;
//
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int b = 0;
//	b = i++ + i++ + i++;
//	printf("%d\n",i);
//	printf("%d\n",b);
//
//
//
//
//	return 0;
////}
//int main()
//{
//	/*int i = 1;
//	int b = ++i+ ++i+ ++i;*/
//	printf("%u\n",sizeof('a'));
//	return 0;
//}