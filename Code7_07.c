#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//int main()
//{
//	/*short x = 2560;*/
//	return 0;
//}
//int main()
//{
//	fclose(stdin);
//	int a = 0;
//	scanf("%d",&a);
//
//	return 0;
//} interesting
//int main()
//{
//	int a = (unsigned char)-10;
//	printf("%d\n",a);
//
//
//
//
//
//	return 0;
//}
//test()
//{
//	printf("Hello world!\n");
//	//return 3;
//}
//shoe()
//{
//
//	printf("Hello bit\n");
//}
//fun()
//{
//	printf("Hello bit\n");
//	int a = 0;
//	printf("Hello C语言!\n");
//}
//fun1()
//{
//	printf("Hello bit\n");
//	int a = 0;
//	printf("Hello C语言!\n");
//}
//shoe2()
//{
//	printf("Hello bit\n");
//	printf("Hello bit\n");
//	printf("Hello bit\n");
//	printf("Hello bit\n");
//}
//int main()
//{
//	/*void x = 0;
//	x = 9;*/
//	/*printf("%u\n",sizeof(void));*/
//	int a=test();
//	printf("%d\n",a);
//	int b = shoe();
//	printf("%d\n",b);
//	int c = fun();
//	printf("%d\n",c);
//	int d = fun1();
//	printf("%d\n",d);
//	int e = shoe2();
//	printf("%d\n",e);
//	return 0;
//}
//void fun(void)
//{
//
//	int i = 0;
//	for (i; i < 10; i++)
//		printf("%d\n",i);
//	return 1;
//}
//int main(void)
//{
//
//	//int a = fun();
//
//	fun(1, 2, 3, 4);
//	return 0;
//}
//char* fun()
//{
//	char str[] = "ABCDEF";
//	return str;
//
//}
//int main()
//{
//	char* s = fun();
//	char a[7] = { 0 };
//	int i = 0;
//	for ( i = 0; i < 7; i++)
//		a[i] = s[i];//足以说明s所指的空间的释放并不是把s所指的数据给直接删除了或改变，而是并未动s所指向空间的的数据；
//	//至于
//	
//	printf("%s\n",a);
//	return 0;
//}
int fun(void)
{

	int a = 2;
	a++;
	return a;

}


int main()
{
	int c = fun();
	printf("%d\n",c);

	return 0;
}