#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdbool.h>
//int main()
//{
//	BOOL x = TRUE;
//
//	
//	return 0;
//}
//int main()
//{
//	int num1 = 1;
//	double num2 = 3;
//	num1 + num2;
//	NULL;
//	return 0;
//
//}

//
//int main()
//{
//	int num = -1;
//	printf("没被强转之前:%d\n",num);
//	unsigned int num2 = (unsigned int)num;
//	printf("被强制之后  ：%u\n",num2);
//	return 0;
//}

//int main()
//{
//	double num1 = 1.1;
//	double num2 = 1.0;
//	if (num1 - num2 == 0.1)
//		printf("相等\n");
//	else
//		printf("不相等\n");
//	return 0;
//}
//int main()
//{
//	double num1 = 1.1;
//	double num2 = 1.0;
//	printf("num1-num2=%.50f\n",num1-num2);
//	printf("0.1      =%.50f\n",0.1);
//
//	return 0;
//}
//#include<math.h>
//#define EPS 0.0000000000001
//int main()
//{
//	double num1 = 1.1;
//	double num2 = 1.0;
//	if (fabs((num1 - num2) - 0.1) < EPS)
//		printf("近似相等\n");
//	else
//		printf("不相等\n");
//
//	return 0;
//}
// 
// 
//#include<math.h>
//#include<float.h>
//int main()
//{
//	double num1 = 1.1;
//	double num2 = 1.0;
//	if (fabs((num1 - num2) - 0.1) <DBL_EPSILON)
//		printf("近似相等\n");
//	else
//		printf("不相等\n");
//
//	return 0;
//}


//
//#include<math.h>
//#include<float.h>
//int main()
//{
//	double num = 0.000000000000000000001;
//	if (fabs(num) < DBL_EPSILON)//你写成这样if(fabs(num-0.0)<DBL_EPSILON)也可以；
//		printf("相等\n");
//	return  0;
//}