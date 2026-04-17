#define _CRT_SECURE_NO_WARNINGS 1
#include"Sort.h"
//栈的初始化
void StackInit(stack* s)
{
	assert(s);
	s->a = NULL;
	s->size = s->capacity = 0;
}
//栈的销毁
void StackDestroy(stack* s)
{
	assert(s);
	free(s->a);
	s->a = NULL;
	s->size = s->capacity = 0;
}
//入栈
void StackPush(stack* s, StackDataType x)
{
	assert(s);
	if (s->size == s->capacity)
	{
		int newcapacity = s->capacity == 0 ? 4 : 2 * s->capacity;
		StackDataType* tmp = (StackDataType*)realloc(s->a, newcapacity * sizeof(StackDataType));
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}
		s->capacity = newcapacity;
		s->a = tmp;
		
	}
	s->a[s->size++] = x;

}
//出栈
void StackPop(stack* s)
{
	assert(s);
	assert(s->size != 0);
	s->size--;
}
//获取栈顶元素
StackDataType StackTop(stack* s)
{
	assert(s);
	assert(s->size != 0);
	return s->a[s->size-1];
}
//栈的判空
bool StackEmpty(stack* s)
{
	assert(s);
	return s->size == 0;
}


void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int flag = 0;
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				Swap(&a[j], &a[j + 1]);
				flag = 1;
			}		
		}
		if (flag == 0)
			return;
	}
}
//三数取中
int ThreeNumMidi(int* a, int left, int right)
{
	int mid = left + (right - left) / 2;
	if (a[left] > a[right])
	{
		if (a[mid] >= a[left])
			return left;
		else if (a[mid] > a[right])
			return mid;
		else
			return right;
	}
	else
	{
		if (a[mid] >= a[right])
			return right;
		else if (a[mid] > a[left])
			return mid;
		else
			return left;
	}
}
void InsertSort(int* a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (tmp < a[end]) {
				Swap(&a[end], &a[end + 1]);
				end--;
			}
			else
				break;
		}
		a[end + 1] = tmp;
	}
}
//快排霍尔法
int PartSort1(int* a, int left, int right)
{
	//三数取中防止最坏情况有序
	int mid = ThreeNumMidi(a, left, right);
	Swap(&a[mid], &a[left]);
	int begin = left;
	int end = right;
	int keyi = left;
	while (begin < end)
	{
		while (begin < end && a[end] >= a[keyi])
		{
			end--;
		}
		while (begin < end && a[begin] <= a[keyi])
		{
			begin++;
		}
		Swap(&a[begin], &a[end]);
	}
	Swap(&a[keyi], &a[begin]);
	return begin;

}
// 快速排序挖坑法
int PartSort2(int* a, int left, int right)
{
	int pivot = a[left];
	while (left < right)
	{
		while (left < right && a[right] >= pivot)
		{
			right--;
		}
		a[left] = a[right];
		while (left < right && a[left] <= pivot)
		{
			left++;
		}
		a[right] = a[left];
	}
	a[left] = pivot;
	return left;
}
// 快速排序前后指针法
int PartSort3(int* a, int left, int right)
{
	int prev = left;
	int cur = left + 1;
	int keyi = left;
	while (cur<=right)
	{
		if (a[cur] < a[keyi])
		{
			prev++;
			Swap(&a[prev], &a[cur]);
			cur++;
		}
		else
		{
			cur++;
		}
			
	}
	Swap(&a[keyi], &a[prev]);
	return prev;

}

void QuickSort(int* a, int left, int right)
{
	if (right - left <= 5)
	{
		InsertSort(a + left, right - left + 1);
		return;
	}
	int keyi = PartSort1(a,left,right);
	QuickSort(a, left, keyi - 1);
	QuickSort(a, keyi + 1, right);
}

// 快速排序 非递归实现
void QuickSortNonR(int* a, int left, int right)
{
	stack st;
	StackInit(&st);
	//入栈入一个区间
	StackPush(&st, right);
	StackPush(&st, left);
	//循环每走一次相当于一次递归
	while (!StackEmpty(&st))
	{
		int begin = StackTop(&st);
		StackPop(&st);
		int end = StackTop(&st);
		StackPop(&st);
		int keyi= PartSort3(a, begin, end);
		//因为栈是后进先出为了符合前面的递归写法我先入右区间再入左区间
		if (keyi + 1 <= end)
		{
			StackPush(&st, end);
			StackPush(&st, keyi+1);
		}
		if (begin <= keyi - 1)
		{
			StackPush(&st, keyi-1);
			StackPush(&st, begin);
		}

	}

	StackDestroy(&st);
}

void _MergeSort(int* a, int* tmp, int left, int right)
{
	if (left == right)
		return;
	int mid = left + (right - left) / 2;
	_MergeSort(a, tmp, left, mid);
	_MergeSort(a, tmp, mid + 1, right);
	int begin1 = left, end1 = mid;
	int begin2 = mid + 1, end2 = right;
	int i = left;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
		{
			tmp[i++] = a[begin1++];
		}
		else {
			tmp[i++] = a[begin2++];
		}
	}
	while (begin1 <= end1)
	{
		tmp[i++] = a[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[i++] = a[begin2++];
	}
	memcpy(a+left, tmp+left, (right - left + 1) * sizeof(int));
}
//归并排序
void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(n * sizeof(int));
	if (tmp == NULL)
	{
		perror("malloc fail");
		return;
	}
	_MergeSort(a, tmp, 0, n - 1);
	free(tmp);
	tmp = NULL;
}


//归并排序非递归
void MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(n * sizeof(int));
	if (tmp == NULL)
	{
		perror("malloc fail");
		return;
	}
	int gap = 1;
	while (gap < n) {
		for (int j = 0; j < n; j += 2 * gap)
		{
			int begin1 = j, end1 = gap + j - 1;
			int begin2 = j + gap, end2 = j+2 * gap - 1;
			int i =j;
			if (begin2 >= n)
			{
				break;
			}
			if (end2 >= n)
			{
				end2 = n - 1;
			}

			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
				{
					tmp[i++] = a[begin1++];
				}
				else {
					tmp[i++] = a[begin2++];
				}
			}
			while (begin1 <= end1)
			{
				tmp[i++] = a[begin1++];
			}
			while (begin2 <= end2)
			{
				tmp[i++] = a[begin2++];
			}
			memcpy(a + j, tmp + j, (end2 - j + 1) * sizeof(int));
		}

		gap *= 2;
	}
	
	free(tmp);
	tmp = NULL;
}