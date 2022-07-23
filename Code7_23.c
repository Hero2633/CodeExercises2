#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<float.h>
#include<math.h>
//double f(double x)
//{
//	return  x * x -1 - 4 * x;
//}
//int main()
//{
//	double left = 0;
//	double right = 0;
//eg:scanf("%lf%lf", &left, &right);
//	if (!(f(left) * f(right) < 0))
//	{
//		printf("区间输入有误，重新输入:");
//		goto eg;
//	}
//	double mid = 0;
// int flag=0;
//	while (fabs(left - right) > DBL_EPSILON)
//	{
//		mid = (left + right) /2;
//		if (f(left) * f(mid) < 0)
//		{
//			right = mid;
//		}
//		else if (f(right) * f(mid) < 0)
//		{
//			left = mid;
//		}
//		else if (f(mid) < DBL_EPSILON)
//		{
//          flag=1;
//			printf("x1=%lf\n",mid);
//			break;
//		}
//	}
// if(!flag)
// printf("没找到\n");
//	return 0;
//}
//#include<string.h>
//void PrintfArr(const int *arr,int len)
//{
//	for (int i = 0; i < len; i++)
//		printf("%d ",arr[i]);
//}
//void QuickSort(int *a,int begin,int end)
//{
//	if (begin >= end)
//		return;
//	int left = begin;
//	int right = end;
//	int key = a[left];
//	int pivont = left;
//	while (left < right)
//	{
//		while ((left<right)&&a[right] >= key)
//			right--;
//			a[pivont] = a[right];
//			pivont = right;
//		while ((left < right) && a[left] < key)
//			left++;
//			a[pivont] = a[left];
//			pivont = left;
//	
//	}
//	a[left] = key;
//	QuickSort(a,begin,left-1);
//	QuickSort(a, left+1, end);
//}
//int main()
//{
//	char arr[] = "scjcdetueopqw";
//	int len = strlen(arr);
//	int a[] = {5,4,6,8,7,1,2,3};
//	len = sizeof(a) / sizeof(a[0]);
//	QuickSort(a,0,len-1);
//	PrintfArr(a,len);
//	return 0;
//}
//#include<stdio.h>
//void fun(int n)
//{
//    if (!n)
//        return;
//    printf("%d", n % 10);;
//    fun(n /= 10);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    fun(n);
//    return 0;
//}
#pragma warning (disable:6031)
//#include<stdio.h>
//long long fun(long long n)
//{
//    if (1 == n)
//        return 1;
//    return n * fun(n - 1);
//}
//int main()
//{
//    long long n = 0;
//    long long m = 0;
//    scanf("%lld%lld", &n, &m);
//    if (n < m)
//    {
//        printf("%lld\n", 0);
//        return 0;
//    }
//    printf("%lld\n", fun(n) / fun(n - m));
//    return 0;
//}
//#include<stdio.h>
//long long h(long long n, long long x)
//{
//    if (0 == n)
//        return 1;
//    if (1 == n)
//        return 2 * n;
//    return 2 * x * h(n - 1, x) - 2 * (n - 1) * h(n - 2, x);
//}
//int main()
//{
//    long long n = 0;
//    long long x = 0;
//    scanf("%lld%lld", &n, &x);
//    printf("%lld\n", h(n, x));
//    return 0;
//}