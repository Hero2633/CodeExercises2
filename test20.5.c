#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Swap(int*a,int*b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void PrintfArr(int* a, int len)
{

	for (int i = 0; i < len; i++)
	{
		printf("%d->",a[i]);

	}
}
void HeadAdjust(int *a,int len,int root)//½¨¶Ñ
{
	if (root <0)
		return;
	int parent = root;
	int child = root * 2 + 1;
	while (child<len)
	{
		if (child+1<len&&a[child + 1] > a[child])//½µÐò/ÉýÐò
		{
			child++;

		}
		if (child<len&&a[child] > a[parent])
		{

			Swap(a + child, a + parent);
			parent = child;
			child = parent * 2 + 1;

		}
		else
			break;

	}
	root--;
	HeadAdjust(a,len,root);
}
void HeadSort(int *a,int len)//Ê±¼ä¸´ÔÓ¶È(      N * log2(N)         )
{
	int len1 = (len-1)/2;
	for (int i=0;i<len;i++)
	{
		HeadAdjust(a,len-i,(len-i-2)/2);
		Swap(a+0,a+len-i-1);	
	}
}

int main()
{
	int a[] = {4,1,67,3,97,23,89,1,45,56,3,8,36,};
	int len = sizeof(a) / sizeof(a[0]);
	
	HeadSort(a,len);
	PrintfArr(a,len);

	return 0;

}