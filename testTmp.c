#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()//九九乘法表
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2dx%2d= %-4d",i,j,i*j);
//		}
//		putchar('\n');
//
//	}
//
//	return 0;
//}
//int main()
//{
//
//
//	int a[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = sizeof(a)/sizeof(int)-1;
//	for (i;i>=0;i--)
//	{
//		printf("%-3d",a[i]);
//
//	}
//	return 0;
//
//}


/*int main()///////将十快面积由小到大排序
{

	int a[10] = {0};
	int i = 0;

	for (i; i < 10; i++)
		scanf("%d",&a[i]);

	int len = 10;
	int k = 0;
	for (k=0;k<len-1;k++)
	{
		int end = k;
		int key = a[end + 1];
		while (end >= 0)
		{
			if (key < a[end])
			{
				a[end + 1] = a[end];
				end--;
			}
			else
				break;
		}
		a[end + 1] = key;
	}
	int j = 0;
	for (j; j < len; j++)
	{
		printf("%-3d",a[j]);
	}

	*//*return 0;

}*/
//int Max(int a,int b)
//{
//	return a > b ? a : b;
//
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	printf("MAX=%d\n",Max(a,b));
//
//
//	return 0;
//
//}
//
//float sum(float a,float b)
//{
//	return a + b;
//}
//int main()
//{
//	float a = 0;
//	float b = 0;
//	scanf("%f%f",&a,&b);
//	printf("%f + %f = %f\n",a,b,sum(a,b));
//
//	return 0;
//
//}