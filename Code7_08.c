#define  _CRT_SECURE_NO_WARNINGS 0
//int main()
//{
//	void x;
//	printf("Hello \nWorld!");
//
//	return 0;
//}

#include<stdio.h>
//int main()
//{
//	printf("%u\n",sizeof(void));
//	return 0;
//}

//i/*nt main(void)
//{
//	void* p = NULL;
//	return 0;
//}*/

//int main()
//{
//
//	void* p1 = NULL;
//	int* p2 = NULL;
//	char* p3 = NULL;
//	p2 = p1;
//	p3 = p1;
//	int num2 = 1;
//	p1 = &num2;
//	char num3 = 'a';
//	p1 = &num3;
//	return 0;
//
//}


//fun()
//{
//	printf("hahaha\n");
//}
//
//int main()
//{
//	
//	int a=fun();
//	printf("%d\n",a);
//	return 0;
//}
//void fun()
//{
//	printf("hahaha\n");
//
//}
//int main()
//{
//	int a = fun();
//	printf("%d\n",a);
//
//	return 0;
//
//}



//void fun(void)
//{
//	printf("Hello World\n");
//}
//int main()
//{
//	fun(1,2,3,4);
//	return 0;
//}


//char* fun()
//{
//	char str[] = "ABDCE";
//	return str;
//
//}
//int main()
//{
//	char* s = fun();
//	char a[6] = { 0 };
//	for (int i = 0; i < 6; i++)
//		a[i] = s[i]; 
//	printf("%s\n",a);
//	return 0;
//}
//int fun()
//{
//	printf("hahaa\n");
//	return 6;
//}
//int main()
//{
//	int a = fun();
//	printf("%d\n",a);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//#include<float.h>
//int main()
//{
//    double a;
//    double b;
//    double c;
//    while (scanf("%lf%lf%lf", &a, &b, &c) != EOF)
//    {
//        if (fabs(a) < DBL_EPSILON)
//            printf("Not quadratic equation\n");
//        else
//        {
//            double deita = b * b - 4 * a * c;
//            b = -b;
//            if (fabs(deita) < DBL_EPSILON)
//                if ((fabs(b - sqrt(deita)) / 2 / a) < DBL_EPSILON)
//                    printf("x1=x2=%.2lf\n", 0.00);
//                else
//                    printf("x1=x2=%.2lf\n", (b - sqrt(deita)) / 2 / a);
//            else if (deita > 0)
//                printf("x1=%.2lf;x2=%.2lf\n", (b - sqrt(deita)) / (2 * a), (b + sqrt(deita)) / (2 * a));
//            else
//            {
//                double tmp = sqrt(fabs(deita));
//                a = fabs(a);
//                printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", (b) / 2 / a, tmp / 2 / fabs(a), (b) / 2 / a, tmp / 2 /fabs( a));
//
//
//            }
//
//        }
//    }
//    return 0;
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	int sum = 0;
//eg:	scanf("%d%d%d",&year,&month,&day);
//	if (day > 31)
//	{
//		printf("输入的day有问题，请重新输入>:");
//		goto eg;
//	}switch (month - 1)
//	{
//	case 11:sum += 30;
//	case 10:sum += 31;
//	case 9:sum += 30;
//	case 8:sum += 31;
//	case 7:sum += 31;
//	case 6:sum += 30;
//	case 5:sum += 31;
//	case 4:sum += 30;
//	case 3:sum += 31;
//	case 2:sum += 28;
//	case 1:sum += 31;
//	case 0:sum += day; printf("这是%d年的第%d天\n",year,sum); break;
//
//	default:printf("month输入有误，请重新输入>:"); goto eg;
//
//
//	}
//
//
//	return 0;
//}
//
//
//
