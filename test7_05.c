#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
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