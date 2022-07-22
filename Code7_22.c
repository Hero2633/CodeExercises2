#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
//void PrintfArr(int *arr,int len)//归并算法
//{
//	for (int i = 0; i < len; i++)
//	{
//
//		printf("%d ",arr[i]);
//	}
//
//}
//void Merge(int* a, int left, int right,int *b)
//{
//	if (left == right)
//		return;
//	int begin1 = left;
//	int end1 = (left + right) / 2;
//	int begin2 = end1 + 1;
//	int end2 = right;
//	Merge(a,begin1,end1,b);
//	Merge(a, begin2, end2, b);
//	int j = 0;
//	while ((begin1<=end1)&&(begin2<=end2))
//	{
//		if (a[begin1] < a[begin2])
//		{
//			b[j] = a[begin1];
//			begin1++;
//			j++;
//		}
//		else
//		{
//			b[j] = a[begin2];
//			begin2++;
//			j++;
//		}
//	}
//	while (begin2 <= end2)
//	{
//		b[j] = a[begin2];
//		begin2++;
//		j++;
//	}
//	while(begin1 <= end1)
//	{
//		b[j] = a[begin1];
//		begin1++;
//		j++;
//	}
//	j = 0;
//	for (int k = left; k <= right; k++)
//	{
//		a[k] = b[j];
//		j++;
//	}
//}
//void MergeSort(int *a,int len)
//{
//	int* b = (int*)malloc(sizeof(int)*len);
//	if (!b)
//	{
//		perror("MergeSort:");
//		return;
//	}
//	Merge(a,0,len-1,b);
//	free(b);
//}
//int main()
//{
//	int arr[] = {3,2,1,6,9,2,3,5,0,-5,-8,2,4,5,8,6,7,9,1,2,4};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	MergeSort(arr,len);
//	PrintfArr(arr,len);
//	return 0;
//}

//void MultiplicationRecipeTable(const int n)
//{
//	for (int i=1;i<=n;i++)
//	{
//		for (int j=1;j<=i;j++)
//		{
//			printf("%-2dx%-2d=%-3d ",j,i,j*i);
//		}
//		putchar('\n');
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	printf("生产%d x %d的口诀表\n",n,n);
//	MultiplicationRecipeTable(n);
//	return 0;
//}

//void Swap(int *a,int *b)
//{
//	*a = (*a) ^ (*b);
//	*b = (*a) ^ (*b);
//	*a = (*a) ^ (*b);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	printf("before:a=%d b=%d\n",a,b);
//	Swap(&a,&b);
//	printf(" after:a=%d b=%d\n", a, b);
//	return 0;
//}
//int IsRun(int year)
//{
//	return ((!(year % 4) && (year % 100)) || (!(year % 400)));
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	if (IsRun(n))
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//	return 0;
//}
//#include<stdbool.h>
//#include<math.h>
//bool IsPrime(int n)
//{
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (!(n % i))
//			return false;
//	}
//	return true;
//
//}
//void PrintfPrime(int begin,int end)
//{
//	for (int i = begin; i <= end; i++)
//	{
//		if (IsPrime(i))
//			printf("%d ",i);
//	}
//}
//int main()
//{
//	int begin = 0;
//	int end = 0;
//	scanf("%d%d",&begin,&end);
//	PrintfPrime(begin,end);
//
//
//}

//int GetMax(int x,int y)
//{
//	if (x > y)
//		return x;
//	return y;
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	int Max = GetMax(a,b);
//	printf("Max=%d\n",Max);
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	int arr[] = {9,4,6,5,9,9,9,9,9,9,9,9,9,9,9,9,9};
//	int arr1[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
//	memset(arr,5,12);
//	/*memcpy(arr,arr1,40);*/
//
//
//	return 0;
//}