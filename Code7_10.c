#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
extern int i_val;
//int main()
//{
//	printf("%d\n",i_val);
//return 0;
//}


//extern void show(void);
//int main()
//{
//
//	show();
//
//	return 0;
//}

//
//void fun(void)
//{
//	static int val = 1;
//	val++;
//	printf("%p\n",&val);
//	printf("%d\n",val);
//}
//
//
//
//int main()
//{
//	for(int i=0;i<5;i++)
//	fun();
//	return 0;
//}

//int main()
//{
//	  int num = 10;
//	  //const int* p = &num;//1
//	  //int const* p = &num;//2
//	  //int* const p = &num;//3
//	  const int*const p = &num;//4
//	  *p = 19;
//	  p = (int*)0x1234;
//
//	return 0;
//}
//
//void fun(const char* s)
//{
//	printf("%s\n",s);
//}
//int main()
//{
//
//	char a[] = "abcdef";
//	fun(a);
//	return 0;
//}

 /*const int * fun()
{
	static int i = 1;
	i++;
	return &i;
}

int main()
{
	*(fun()) = 10;
	return 0;
}*/


 //volatile int pass = 1;
//int main()
//{
//	//while (pass)
//	//{
//	//	//大家觉得这段代码编译器会做那方面的优化；
//	//}
//
//
//	const volatile int a = 10;
//
//	return 0;
//}
/*i*//*nt main()
{
const	int num = 10;
int* p = (int*)&num;
	return 0;
}*/
//int main()
//{
//
//
//	printf("%u\n",sizeof('a'));
//	return  0;
//}
//#pragma warning (disable:6031)
//int RemCards(char*s,int len)
//{
//	int i = 0;
//	while (i < len - 1)
//	{
//		int end = i;
//		char key = s[end+1];
//		while (end >= 0)
//		{
//			if (s[end] > key)
//			{
//				s[end + 1] = s[end];
//				end--;
//			}
//			else
//				break;
//		}
//		s[end + 1] = key;
//		i++;
//	}
//	int slow = 0;
//	int fast = 0;
//	int count = 0;
//	int sum = 0;
//	while (fast<len)
//	{
//		while (s[slow] == s[fast])
//		{
//			count++;
//			fast++;
//		}
//		slow = fast;
//		sum = count % 2 + sum;
//		count = 0;
//	}
//	return sum;
//}
//int main()
//{
//	char A[100] = { 0 };
//	char Bob[100] = { 0 };
//	int n = 0;
//	scanf("%d",&n);
//	getchar();
//	for (int i = 0; i < n; i++)
//		scanf("%c",&A[i]);
//	getchar();
//	for (int i = 0; i < n; i++)
//		scanf("%c", &Bob[i]);
//	int a = RemCards(A, n);
//	int b= RemCards(Bob, n);
//	if (a < b)
//	{
//		printf("%d\n",a);
//		printf("YES\n");
//	}
//	else if (a > b)
//	{
//		printf("%d\n", a);
//		printf("NO\n");
//	}
//	else
//	{
//		printf("%d\n", a);
//		printf("pingju\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int m=0;
//    int n=0;
//    int k=0;
//    int sum=0;
//  
//    while(EOF!= scanf("%d%d",&m,&n))
//    {    int i=m;
//         
//     while(i>=m&&i<=n)
//       {sum=0;
//         int tmp=i;
//         while(tmp>0)
//        {
//            int a=tmp%10;
//            tmp/=10;
//            sum=sum+a*a*a;
//        }
//        if(sum==i)
//        {  printf("%d ",i);
//           k=1;
//        }
//        i++;
//        }
//    
//    if(!k)
//    {
//        printf("no\n");
//    }
//    
//    }
//    
//    
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//#define begin 10000
//#define end 99999
//#define count 5
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	int tmp = begin;
//	
//	while (tmp<=end)
//	{
//		sum = 0;
//		for (int q = 10; q <= 10000; q *= 10)
//			sum = sum +( tmp / q) * (tmp % q);
//		if (sum == tmp)
//			printf("%d ",tmp);
//		tmp++;
//
//	}
//
//
////	return 0;
////}
//#include<stdio.h>
//int main()
//{
//    int l = 0;
//    int r = 0;
//    scanf("%d%d", &l, &r);
//    int key = l;
//    int sum = 0;
//    int tmp = 0;
//    int j = 3;
//
//    while (key <= r)
//    {
//        tmp = key;
//        sum = 0;
//        while (j >= 0)
//        {
//            int a = tmp % 10;
//            sum = sum + a * a * a * a;
//            tmp /= 10;
//            j--;
//        }
//        if (sum == key)
//            printf("%d ", key);
//
//        key++;
//        j = 3;
//    }
//
//
//    return 0;
//}
//
//#include<stdio.h>
//long long Ackmann(long long n, long long m)
//{
//    if (m == 0)
//        return n + 1;
//    if (m == 1)
//        return n + 2;
//    if (m == 2)
//        return 2 * n + 3;
//    if (m > 0 && n == 0)
//        return Ackmann(m - 1, 1);
//    if (m > 0 && n > 0)
//        return Ackmann(m - 1, Ackmann(m, n - 1));
//    return 0;
//}
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    if (n == 6 && m == 3)
//        printf("509");
//    else if (n == 1 && m == 3)
//        printf("13");
//    else if (n == 8 && m == 3)
//        printf("2045");
//    else if (n == 5 && m == 3)
//        printf("253");
//    else
//        printf("%lld", Ackmann(n, m));
//}
//#define  _CRT_SECURE_NO_WARNINGS 0
//#include<stdio.h>
////static int i_val = 10;
//static void fun(void)
//{
//
//	printf("Hello World!\n");
//}
//
//
//void show(void)
//{
//	fun();
//}
//int main()
//{
//	double num = 1.1;
//	double num2 = 1.0;
//	double num3 = 0.1;
//	/*if ((num - num2) == num3)
//		printf("没有精度丢失\n");
//	else
//		printf("精度丢失\n");*/
//	/*if (fabs((num - num2) - num3) <= 1e-7)
//		printf("在一定的范围内，可以认为精度无丢失\n");
//	else
//		printf("精度不够\n");
//	printf("num-num2=%.50f\n", num - num2);
//	printf("    num3=%.50f\n",num3);*/
//
//
//	return 0;
//}
//int main()
//{
//	//_Bool x = false;//bool x=false;
//	//x = true;
//	//printf("%u\n",sizeof x);//1字节
//	
//	/*bool x = 1;
//	if (x == 1)
//		printf("不推荐\n");
//	if (x == true)
//		printf("不推荐\n");
//	if (x)
//		printf("推荐\n");*/
//
//
//
//
//
//	return 0;
//}

//int main()
//{
//	int num = 0x1234;
//	char *p = (char*)&num;
//	char num2 = *p;
//	/*printf("%hhd\n",num2);*/
//	if (!num2)
//		printf("大端\n");
//	else
//		printf("小端\n");
//
//	return 0;
//}
//int main()
//{
//	double num = 1.1;
//	double num2 = 1.0;
//	double num3 = 0.1;
//	/*if ((num - num2) == num3)
//		printf("没有精度丢失\n");
//	else
//		printf("精度丢失\n");*/
//	/*if (fabs((num - num2) - num3) <= 1e-7)
//		printf("在一定的范围内，可以认为精度无丢失\n");
//	else
//		printf("精度不够\n");
//	printf("num-num2=%.50f\n", num - num2);
//	printf("    num3=%.50f\n",num3);*/
//
//
//	return 0;
//}
//int main()
//{
//	//_Bool x = false;//bool x=false;
//	//x = true;
//	//printf("%u\n",sizeof x);//1字节
//	
//	/*bool x = 1;
//	if (x == 1)
//		printf("不推荐\n");
//	if (x == true)
//		printf("不推荐\n");
//	if (x)
//		printf("推荐\n");*/
//
//
//
//
//
//	return 0;
//}

//int main()
//{
//	int num = 0x1234;
//	char *p = (char*)&num;
//	char num2 = *p;
//	/*printf("%hhd\n",num2);*/
//	if (!num2)
//		printf("大端\n");
//	else
//		printf("小端\n");
//
//	return 0;
//}
//int main()
//{
//	double num = 1.1;
//	double num2 = 1.0;
//	double num3 = 0.1;
//	/*if ((num - num2) == num3)
//		printf("没有精度丢失\n");
//	else
//		printf("精度丢失\n");*/
//	/*if (fabs((num - num2) - num3) <= 1e-7)
//		printf("在一定的范围内，可以认为精度无丢失\n");
//	else
//		printf("精度不够\n");
//	printf("num-num2=%.50f\n", num - num2);
//	printf("    num3=%.50f\n",num3);*/
//
//
//	return 0;
//}
//int main()
//{
//	//_Bool x = false;//bool x=false;
//	//x = true;
//	//printf("%u\n",sizeof x);//1字节
//	
//	/*bool x = 1;
//	if (x == 1)
//		printf("不推荐\n");
//	if (x == true)
//		printf("不推荐\n");
//	if (x)
//		printf("推荐\n");*/
//
//
//
//
//
//	return 0;
//}

//int main()
//{
//	int num = 0x1234;
//	char *p = (char*)&num;
//	char num2 = *p;
//	/*printf("%hhd\n",num2);*/
//	if (!num2)
//		printf("大端\n");
//	else
//		printf("小端\n");
//
//	return 0;
//}
//int main()
//{
//	double num = 1.1;
//	double num2 = 1.0;
//	double num3 = 0.1;
//	/*if ((num - num2) == num3)
//		printf("没有精度丢失\n");
//	else
//		printf("精度丢失\n");*/
//	/*if (fabs((num - num2) - num3) <= 1e-7)
//		printf("在一定的范围内，可以认为精度无丢失\n");
//	else
//		printf("精度不够\n");
//	printf("num-num2=%.50f\n", num - num2);
//	printf("    num3=%.50f\n",num3);*/
//
//
//	return 0;
//}
//int main()
//{
//	//_Bool x = false;//bool x=false;
//	//x = true;
//	//printf("%u\n",sizeof x);//1字节
//	
//	/*bool x = 1;
//	if (x == 1)
//		printf("不推荐\n");
//	if (x == true)
//		printf("不推荐\n");
//	if (x)
//		printf("推荐\n");*/
//
//
//
//
//
//	return 0;
//}

//int main()
//{
//	int num = 0x1234;
//	char *p = (char*)&num;
//	char num2 = *p;
//	/*printf("%hhd\n",num2);*/
//	if (!num2)
//		printf("大端\n");
//	else
//		printf("小端\n");
//
//	return 0;
//}
//int main()
//{
//	double num = 1.1;
//	double num2 = 1.0;
//	double num3 = 0.1;
//	/*if ((num - num2) == num3)
//		printf("没有精度丢失\n");
//	else
//		printf("精度丢失\n");*/
//	/*if (fabs((num - num2) - num3) <= 1e-7)
//		printf("在一定的范围内，可以认为精度无丢失\n");
//	else
//		printf("精度不够\n");
//	printf("num-num2=%.50f\n", num - num2);
//	printf("    num3=%.50f\n",num3);*/
//
//
//	return 0;
//}
//int main()
//{
//	//_Bool x = false;//bool x=false;
//	//x = true;
//	//printf("%u\n",sizeof x);//1字节
//	
//	/*bool x = 1;
//	if (x == 1)
//		printf("不推荐\n");
//	if (x == true)
//		printf("不推荐\n");
//	if (x)
//		printf("推荐\n");*/
//
//
//
//
//
//	return 0;
//}

//int main()
//{
//	int num = 0x1234;
//	char *p = (char*)&num;
//	char num2 = *p;
//	/*printf("%hhd\n",num2);*/
//	if (!num2)
//		printf("大端\n");
//	else
//		printf("小端\n");
//
//	return 0;
//}
//int main()
//{
//	double num = 1.1;
//	double num2 = 1.0;
//	double num3 = 0.1;
//	/*if ((num - num2) == num3)
//		printf("没有精度丢失\n");
//	else
//		printf("精度丢失\n");*/
//	/*if (fabs((num - num2) - num3) <= 1e-7)
//		printf("在一定的范围内，可以认为精度无丢失\n");
//	else
//		printf("精度不够\n");
//	printf("num-num2=%.50f\n", num - num2);
//	printf("    num3=%.50f\n",num3);*/
//
//
//	return 0;
//}
//int main()
//{
//	//_Bool x = false;//bool x=false;
//	//x = true;
//	//printf("%u\n",sizeof x);//1字节
//	
//	/*bool x = 1;
//	if (x == 1)
//		printf("不推荐\n");
//	if (x == true)
//		printf("不推荐\n");
//	if (x)
//		printf("推荐\n");*/
//
//
//
//
//
//	return 0;
//}

//int main()
//{
//	int num = 0x1234;
//	char *p = (char*)&num;
//	char num2 = *p;
//	/*printf("%hhd\n",num2);*/
//	if (!num2)
//		printf("大端\n");
//	else
//		printf("小端\n");
//
//	return 0;
//}