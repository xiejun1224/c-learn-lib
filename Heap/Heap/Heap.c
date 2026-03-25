#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"
//交换
void Swap(HeapDataType* x, HeapDataType* y)
{
	HeapDataType tem = *x;
	*x = *y;
	*y = tem;
}



//初始化
void HPInit(HP* php)
{
	assert(php);
	php->a = NULL;
	php->size = 0;
	php->capacity = 0;
}
//销毁
void HPDestroy(HP* php)
{
	assert(php);
	free(php->a);
	php->size = php->capacity = 0;
}
//向上调整算法
void AdjustUp(HeapDataType* a, int chiled)
{
	assert(a);
	int parent = (chiled-1) / 2;
	while (chiled > 0)
	{
		if (a[chiled] > a[parent])
		{
			Swap(&a[chiled], &a[parent]);
			chiled = parent;
			parent = (chiled-1) / 2;
		}
		else
		{
			break;
		}
	}
}

//向下调整算法
void AdjustDown(HeapDataType* a, int parent,int n)
{
	assert(a);
	int chiled = 2 * parent + 1;
	while (chiled<n)
	{
		if (chiled + 1 < n&&a[chiled]<a[chiled+1])
		{
			chiled++;
		}
		if (a[chiled] > a[parent])
		{
			Swap(&a[chiled], &a[parent]);
			parent = chiled;
			chiled = 2 * parent + 1;
		}
		else
		{
			break;
		}
	}


}

//插入
void HPPush(HP* php, HeapDataType x)
{
	assert(php);
	if (php->size == php->capacity)
	{
		int newcapacity = php->capacity == 0 ? 4 : 2 * php->capacity;
		HeapDataType* cur = (HeapDataType*)realloc(php->a, newcapacity * sizeof(HeapDataType));
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
	AdjustUp(php->a,php->size - 1);
}
//删除堆顶元素
void HPPop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	Swap(&php->a[0], &php->a[php->size - 1]);
	php->size--;
	AdjustDown(&php->a[0],0,php->size);
}

//判空
bool HPEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}
//得到堆顶元素
HeapDataType HPTop(HP*php)
{
	assert(php);
	assert(php->size > 0);
	return php->a[0];
		
}

