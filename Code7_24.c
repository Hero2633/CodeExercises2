#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//long long Factorial1(long long n)
//{
//	if (n == 1||(!n))
//		return 1;
//	return n * Factorial1(n-1);
//}
//long long Factorial2(long long n)
//{
//	long long i = 1;
//	long long sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}
//int main()
//{
//	long long n = 0;
//	scanf("%lld",&n);
//	long long ret = Factorial1(n);
//	printf("%lld的阶乘\n",n);
//	printf("递归:%lld\n",ret);
//	 ret = Factorial2(n);
//	printf("非递:%lld\n", ret);
//
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int tmp = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		tmp = i;
//		while (tmp > 0)
//		{
//			if (9==tmp % 10)
//			{
//				count++;
//			}
//			tmp /= 10;
//		}
//	}
//	printf("含9的个数:%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{		count++;
//		printf("%d ", i);
//	}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//
//void print(int n)
//{
//	if (n < 10)
//		printf("%d ", n);
//	else
//	{
//		print(n / 10);
//		printf("%d ",n%10);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	print(n);
//	return 0;
//}
//void Printf(int* arr, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//}
//void InsertionSort(int *arr,int len)
//{
//	int end = 1;
//	for (int i = 0; i < len - 1; i++)
//	{
//	 end = i;
//	int next = arr[end + 1];
//	while (end >= 0)
//	{
//		if (arr[end] >= next)
//		{
//			arr[end + 1] = arr[end];
//			end--;
//		}
//		else
//			break;
//	}
//	arr[end + 1] = next;
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0,10};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	InsertionSort(arr, len);
//	Printf(arr,len);
//
//	return 0;
//}
//void Myreverse(int* a, int left, int right)
//{
//	while (left <= right)
//	{
//		int tmp = a[right];
//		a[right] = a[left];
//		a[left] = tmp;
//		left++;
//		right--;
//	}
//}
//
//void rotate(int* nums, int numsSize, int k) {
//
//	k = k % numsSize;
//	int left = 0;
//	int right = numsSize - 1;
//	Myreverse(nums, left, right);
//	Myreverse(nums, left, k - 1);
//	Myreverse(nums, k, numsSize - 1);
//}

//int main()
//{
//	int a = 10;
//	printf("before:%d\n",a);
//	int* p = &a;
//	*p = 20;
//	printf("after:%d\n", a);
//
//	return 0;
//}
//int main()
//{
//	char* p1 = NULL;
//	short* p2 = NULL;
//	int* p3 = NULL;
//	long long* p4 = NULL;
//	float* p5 = NULL;
//	printf("%p\n",p1);
//	printf("%p\n\n", p1+1);
//
//	printf("%p\n", p2);
//	printf("%p\n\n", p2 + 1);
//
//	printf("%p\n", p3);
//	printf("%p\n\n", p3 + 1);
//
//	printf("%p\n", p4);
//	printf("%p\n\n", p4 + 1);
//	
//	printf("%p\n", p5);
//	printf("%p\n", p5 + 1);
//}

//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5 };
//	return 0;
//}
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("%p\n", &a);
//	printf("%p\n", &b);
//	printf("%p\n",&c);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]:%p\n",i,&arr[i]);
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		p[i] = i;
//	}
//	return 0;
//}
//int main()
//{
//	char arr[3] = { 9,8,7 };
//	printf("%p\n", arr );
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr);
//	printf("%p\n",&arr+1);
//	return 0;
//}