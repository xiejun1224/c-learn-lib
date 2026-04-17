#define _CRT_SECURE_NO_WARNINGS 1
#include"Sort.h"
void SortTest1()
{
	int a[] = { 5,2,1,9,3,7,4,6,8,0,11};
	int sz = sizeof(a) / sizeof(a[0]);
	//BubbleSort(a, sz);
	QuickSort(a, 0, sz - 1);
	//InsertSort(a, sz);
	//QuickSortNonR(a, 0, sz - 1);
	//MergeSort(a, sz);
	//MergeSortNonR(a, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
}
int main()
{
	SortTest1();
	return 0;
}