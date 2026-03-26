#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"
void HeapTest1()
{
	int a[] = { 2,8,4,6,1,0,8,3,1,9 };
	HP ph;
	HPInit(&ph);
	int sz = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < sz; i++)
	{
		HPPush(&ph, a[i]);
	}
	for (int j = 0; j < sz; j++)
	{
		if (!HPEmpty(&ph))
		{
			printf("%d ", HPTop(&ph));
			HPPop(&ph);
		}
	}

}
//向上调整建堆
HeapDateType* HeapSort1(HeapDateType* a, int n)
{
	//升序建大堆
	//降序键小堆 
	assert(a);
	for (int i = 1; i < n; i++)
	{
		AdjustUP(a, i);
	}
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, 0, end);
		end--;
	}
	return a;
}
//向下调整建堆
HeapDateType* HeapSort2(HeapDateType* a, int n)
{
	//升序建大堆
	//降序键小堆 
	assert(a);
	for (int i=(n-1-1)/2; i >=0 ; i--)
	{
		AdjustDown(a, i,n);
	}
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, 0, end);
		end--;
	}
	return a;
}

void HeapTest2()
{
	int q[] = { 4,7,2,8,1,0,6,2,7,9 };
	int sz = sizeof(q) / sizeof(q[0]);
	HeapSort2(&q, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", q[i]);
	}
}

int main()
{
	//HeapTest1();
	HeapTest2();
	return 0;
}
