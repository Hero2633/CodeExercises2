#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c=Add(a, b);
//	printf("%d\n",c);
//	return 0;
//}
//char* My_strlen(char* a)
//{
//	if (*a == '\0')
//		return a;
//
//	return My_strlen(++a);
//}
//int My_len(char* a)
//{
//	return My_strlen(a)-a;
//
//}
//int main()
//{
//	char a[] = "abcdef";
//	printf("%d\n",My_len(a));
//
//	return 0;
//}
//int count = 0;
//int Fac(int n)
//{
//	if(n==3)
//	count++;
//	if (n <= 2)
//		return 1;
//	return Fac(n - 1) + Fac(n - 2);
//
//
//}
//
//int main()
//{
//	Fac(40);
//	printf("%d\n",count);
//
//	return 0;
//}

//long long Exponentiation(long long n, int count)
//{
//	if (!count)
//		return 1;
//	if (!n||n==1||count == 1)
//		return n;
//	return n * Exponentiation(n,--count);
//}
//int main()
//{
//	long long n = 0;
//	int count = 0;
//	scanf("%lld%d",&n,&count);
//	long long ret = Exponentiation(n,count);
//	printf("%lld\n",ret);
//	return 0;
//}
//int DigitSum(int n)
//{
//	if (n < 10)
//		return n;
//	return n % 10 + DigitSum(n/10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = DigitSum(n);
//	printf("%d\n",ret);
//	return 0;
//}
//void E_string(char* a, int left, int right)
//{
//	if (left > right)
//		return ;
//	char tmp = a[left];
//	a[left] = a[right];
//	a[right] = tmp;
//	E_string(a,++left,--right);
//}
//void everse_string(char* string)
//{
//	int len = 0;
//	while (*(string + (len++)) != '\0');
//	len -= 1;
//	E_string(string,0,len-1);
//}
//int main()
//{
//	char arr[] = "abcdefghijk";
//	everse_string(arr);
//	printf("%s\n",arr);
//	return 0;
//}
//int My_Strlen1(char* a)//·ÇµÝ¹é
//{
//	int len = 0;
//	while (*(a+(len++))!='\0');
//	return --len;
//}
//int My_Strlen2(char* a)//µÝ¹é
//{
//	if (*a == '\0')
//		return 0;
//	return 1 + My_Strlen2(++a);
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int len1 = 0;
//	int len2 = 0;
//	len1 = My_Strlen1(arr);//·ÇµÝ¹é
//	len2 = My_Strlen2(arr);//µÝ¹é
//	printf("len1=%d\n", len1);
//	printf("len2=%d\n",len2);
//	return 0;
//}
//#include<stdio.h>
//long long Sigma(long long n)
//{
//    if (1 == n)
//        return 1;
//    return n + Sigma(n - 1);
//}
//int main()
//{
//    long long  n = 0;
//    scanf("%lld", &n);
//    long long sum = Sigma(n);
//    printf("%lld\n", sum);
//    return 0;
//}
//#include<stdio.h>
//int Sigma(int* a, int len)
//{
//    if (!len)
//        return a[len];
//    return a[len] + Sigma(a, --len);
//}
//int main()
//{
//    int arr[50] = { 0 };
//    int N = 0;
//    scanf("%d", &N);
//    for (int i = 0; i < N; i++)
//        scanf("%d", &arr[i]);
//    int sum = 0;
//    sum = Sigma(arr, N - 1);
//    printf("%d\n", sum);
//    return 0;
//
//}
//long long Fibonacci1(long long n)//·ÇµÝ¹é
//{
//	if (n <= 2)
//		return 1;
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//long long Fibonacci2(long long n)//µÝ¹é
//{
//	if (n <= 2)
//		return 1;
//	return Fibonacci2(n - 1) + Fibonacci2(n - 2);
//
//}
//int main()
//{
//	long long n = 0;
//	scanf("%lld",&n);
//	long long Fib1 = Fibonacci1(n);
//	printf("Fib1=%lld\n", Fib1);
//	long long Fib2= Fibonacci2(n);
//	printf("Fib2=%lld\n",Fib2);
//	return 0;
//}
//int Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//
//	return n * Pow(n, k - 1);
//}
//int main()
//{
//
//	printf("%d\n",Pow(1,9999999));
//
//
//
//	return 0;
//}