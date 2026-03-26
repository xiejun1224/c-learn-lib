#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"
void HPInit(HP* php)
{
	assert(php);
	php->a = NULL;
	php->size = php->capacity = 0;
}

void HPDestroy(HP* php)
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->size = php->capacity = 0;
}
void Swap(HeapDateType* x, HeapDateType* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void AdjustUP(HeapDateType* a, int child)
{
	assert(a);
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[parent] <a[child])
		{
			Swap(&a[parent], &a[child]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}

}
void AdjustDown(HeapDateType*a, int parent, int n)
{
	assert(a);
	int child = 2 * parent + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child + 1] > a[child])
		{
			child++;
		}
		if (a[parent] < a[child])
		{
			Swap(&a[parent], &a[child]);
			parent = child;
			child = 2 * parent + 1;
		}
		else
		{
			break;
		}
	}

}

void HPPush(HP* php, HeapDateType x)
{
	assert(php);
	if (php->size == php->capacity)
	{
		int newcapacity = php->capacity == 0 ? 4 : 2 * php->capacity;
		HeapDateType* cur = (HeapDateType*)realloc(php->a, sizeof(HeapDateType) * newcapacity);
		if (cur == NULL)
		{
			perror("realloc fail");
			return;
		}
		else
		{
			php->a = cur;
			php->capacity = newcapacity;
		}
		
	}
	php->a[php->size] = x;
	php->size++;
	AdjustUP(php->a,php->size-1);
}

void HPPop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	Swap(&php->a[0], &php->a[php->size - 1]);
	php->size--;
	AdjustDown(php->a, 0, php->size);
}

HeapDateType HPTop(HP* php)
{
	assert(php);
	return php->a[0];
}

bool HPEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}