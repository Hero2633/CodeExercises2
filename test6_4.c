#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void _Merg(int* a, int* tmp, int left, int right)
{
	if (left >= right)
		return;
	int mid = (left + right) / 2;
	_Merg(a, tmp, left, mid);
	_Merg(a,tmp,mid+1,right);
	int left1 = left;
	int end1 = mid;
	int left2 = mid + 1;
	int end2 = right;
	int i = left;
	while (left1<=end1&&left2<=end2)
	{
		if (a[left1] <= a[left2])//¿ØÖÆÉý½µÐò
		{
			tmp[i] = a[left1];
			left1++;
			i++;

		}
		else
		{
			tmp[i] = a[left2];
			left2++;
			i++;

		}

	}
	while (left1<=end1)
	{
		tmp[i] = a[left1];
		left1++;

		i++;
	}

	while (left2 <= end2)
	{
		tmp[i] = a[left2];
		left2++;
		i++;
	}
	for (int i = left; i <=right; i++)
		a[i] = tmp[i];

}

void MergeSort(int *a,int len)
{
	int* tmp = (int*)malloc(sizeof(int)*len);
	if (tmp == NULL)
		return;
	_Merg(a,tmp,0,len-1);
	free(tmp);

}

void PrintfArr(int* a, int len)
{
	for (int i=0;i<len;i++)
	{
		printf("%d->",a[i]);
	}
}
int main()
{
	int a[] = {9,6,2,43,54,645,765,4765,8653,562,3434,76,23,76,347,5,7,3,1};
	int len = sizeof(a) / sizeof(a[0]);
	MergeSort(a,len);
	PrintfArr(a, len);

	return 0;
}