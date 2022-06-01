#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Swap(int *a,int*b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void PrintfArr(int* a, int l)
{
	int i = 0;
	for (i = 0; i < l; i++)
		printf("%d->", a[i]);

}

int PartSort1(int* a, int left, int right)
{
	int pivon = left;
	int key = a[left];
	while (left<right)
	{
		while (left < right && a[right] >= key)
			--right;
		a[pivon] = a[right];
		pivon = right;
		while (left < right && a[left] <= key)
			++left;
		a[pivon] = a[left];
		pivon = left;

	}

	a[pivon] = key;
	return pivon;


}
int PartSort2(int *a,int left,int right)
{
	int pivon = left;
	int key = a[left];
	while (left<right)
	{
		while (left < right && a[right] >= key)
			--right;
		while (left < right && a[left] <= key)
			++left;

		Swap(a+left,a+right);

	}

	Swap(a+pivon,a+left);
	return right;
}
int PartSort3(int* a, int left, int right)
{
	int pivon = left;
	int key = a[left];
	int cur = left;
	int prev = left;
	while (cur!=right+1)
	{

		if (a[cur] < key)
		{
			++prev;
			Swap(a+prev,a+cur);
		}
		++cur;
	}
	Swap(a+pivon,a+prev);
	return prev;

}
void QuickSort(int *a,int left,int right)
{
	if (left >= right)
		return;
int pivon=PartSort3(a,left,right);
QuickSort(a, left, pivon - 1);
QuickSort(a,pivon+1,right);

}
#include<stdio.h>
int main()
{
	int a[] = { 9,8,7,6,5,1,32,5,46,68,56,769,43,1,76,8 };
	int len = (int)sizeof(a) / sizeof(a[0]);
	QuickSort(a,0,len-1);
	PrintfArr(a,len);
	return 0;

}