#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//
//int main()
//{
//   // char a[5][6] = { "abcds","shshs","wjdnb","hsjdj","jdnsb" };
//    char a[] = {"anbshdbj"};
//    char* s = a;
//    char** p = &s;
//    *p = 10;;
//    printf("%p\n", p);
//    //*((*p)++);
//    printf("before *p:%p\n", *p);
//    p++;
//    (*p)++;
//    printf("after*p:%p\n", *p);
//   /* while (**p != '\0')
//    {
//        if (*(*p)++ == 9999)
//            return 0;
//        printf("%p\n", *p);
//    }*/
//   /* printf("%p\n", *p);*/
//
//    printf("%p\n", p);
//    return 0;
//}
//int main()
//{
//	char a[] = "andjanj";
//	char* s = a;
//	char** p = &s;
//	printf("b:%p\n", p);
//	printf("b:%p\n",*p);
//	*(*p)++;
//	*(*p)++;
//	*(*p)++;
//
//	*(*p)++;
//	printf("a:%p\n", *p);
//	printf("a:%p\n",p);
//
//	return 0;
//}

//void fun(int** p)
//{
//	((*p)++);
//}
//
//
//int main()
//{
//	int a[] = {6,2,3,4,5,6,7,8};
//	/*int* s = a;
//	int** p = &s;
//	printf("b:%p\n", s);
//	fun(p);
//	printf("a:%p\n", s);*/
//
//
//	int** p = (int **)&a;
//	fun(p);
//	printf("*p:%p\n", *p);
//
//	printf("a:%p\n", a);
//	printf("p:%p\n", p);
//	printf("&a:%p\n", &a);
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	int b1 = 2;
//	int b2 = 0;
//	b1 = a++;
//	b2 = ++a;
//	a++;
//	++a;
//	printf("%d %d %d\n",a,b1,b2);
//	return 0;
//}
//int main()
//{
//	int a = 10;//这叫赋初值
//	int b = 20;
//	b = a;//这叫赋值
//	return 0;
////}
//			i/*nt main()
			/*{
				int a = 1;
				int b = 1;
				b = (++a) + (++a) + (++a);
				printf("%d\n",b);
				return 0;
			}*/
//
//int main()
//{
//	printf("%d\n",-10%3);
//	return 0;
//}
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
//bool IsPrime(long long n)
//{
//    long long i = 2;
//    for (i = 2; i <= sqrt(n); i++)
//    {
//        if (!(n % i))
//        {
//            return false;
//        }
//    }
//    return true;
//}
//int main()
//{
//    long long t = 0;
//    scanf("%lld", &t);
//    long long sum = 0;
//    long long a = t;
//    t /= 10;
//    while (t > 0)
//    {
//        sum = sum * 10 + t % 10;
//        t /= 10;
//        a *= 10;
//    }
//    sum = sum + a;
//    bool x = IsPrime(sum);
//    if (x == true)
//        printf("%s\n", "prime");
//    else
//        printf("%s\n", "noprime");
//    return 0;
//}
//bool IsPalindrome(int M, int N)
//{
//    int tmp = M;
//    int sum = 0;
//    while (tmp > sum)
//    {
//        sum = sum * N + tmp % N;
//        tmp /= N;
//    }
//	if (sum == tmp)
//		return true;
//    if ((sum / N) == tmp)
//        return true;
//    return false;
//}
//int fun(int M, int N)
//{
//    int tmp = M;
//    int sum = 0;
//    while (tmp > 0)
//    {
//        sum = sum * N + tmp % N;
//        tmp /= N;
//    }
//
//    return sum;
//

#include<string.h>
char c[100] = {0};
bool IsPalindrome(char* p, int len)
{
	
	int left = 0;
	int right = len - 1;
	while ((left) < (right))
	{
		if (p[left++] != p[right--])
			return false;
	}
	return true;
}
int getInt(char n)//将'0'-'9'转换为0-9；'a'-'z'转换成10-35
{
	if (n >= '0' && n <= '9')
		return n - '0';
	else
	{
		return n - 'A' + 10;
	}
}
char getChar(int n)//将0-9转换为'0'-'9';a-z转换成’a'-‘z'
{
	if (n >= 0 && n <= 9)
		return n + '0';
	else
		return n - 10 + 'A';
}
void Add(char* a,int N,int len)
{
	int sum1 = 0;
	int sum2 = 0;
	int tail = 0;
	int begin = 0;
	int end = len - 1;
	int i = 0;
	while (end >= 0)
	{
		sum1 = getInt(a[begin]);
		sum2 = getInt(a[end]);
		c[i] = getChar((sum1+sum2+tail)%N);
		tail = (sum1 + sum2 + tail) / N;
		end--;
		begin++;
		i++;
	}
	while (tail > 0)
	{
		c[i] = getChar(tail % N);
		tail /= N;
		i++;
	}
	c[i] = '\0';
}
int main()
{
	char a[100] = {0};
	int N = 0;
	scanf("%d", &N);
	getchar();
	scanf("%s", a);
	int len = strlen(a);
	if (IsPalindrome(a, len))
	{		printf("STEP=%d\n",1);
	return 1;
}
	int count = 0;
	while (!IsPalindrome(a,len))
	{
		Add(a,N,len);
		strcpy(a,c);
		len = strlen(c);
		count++;
		if (count >= 31)
		{
			printf("Impossible!\n");
			return 0;
		}
	}
	printf("STEP=%d\n",count);
	return 0;
}