#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//œ£∂˚≈≈–Ú

void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}

//≤Â»Î≈≈–Ú
void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
			
		}
		a[end + 1] = tmp;
	}
}



// ∂—≈≈–Ú
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void AdjustDown(int* a, int n, int root)
{
	int parent= root;
	int child = 2 * parent + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child] < a[child + 1])
		{
			child++;
		}
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = 2 * parent + 1;
		}
		else
		{
			break;
		}
	}

}
void HeapSort(int* a, int n)
{
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}
	int end = n - 1;
	while(end>0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		end--;
	}
	
}
//—°‘Ò≈≈–Ú
void SelectSort(int* a, int n)
{
	int begin = 0;
	int end = n - 1;
	while (end >begin)
	{
		int mini = begin;
		int max = begin;

		for (int i = begin+1; i < end + 1; i++)
		{

			if (a[i] < a[mini])
			{
				mini = i;
			}

			if (a[i] >a[max])
			{
				max = i;
			}
		}
		Swap(&a[begin], &a[mini]);
		if (max == begin)
		{
			max = mini;
		}
		
		Swap(&a[end], &a[max]);
		begin++;
		end--;
	}

}
void _SelectSort(int* a, int n)
{
	int begin = 0;
	while (begin < n)
	{
		int mini = begin;
		for (int i = begin + 1; i < n; i++)
		{
			if (a[i] < a[mini])
			{
				mini = i;
			}
		}
		Swap(&a[mini], &a[begin]);
		begin++;
	}
}


void test1()
{
	//int a[10] = { 2,7,1,3,8,9,4,0,5,6 };
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(a) / sizeof(a[0]);
	//InsertSort(a, sz);
	ShellSort(a, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

}
void test2()
{
	//int a[10] = { 2,7,1,3,8,9,4,0,5,6 };
	int a[10] = { 9,8,7,6,5,4,3,2,1,0};
	int sz = sizeof(a) / sizeof(a[0]);
	//HeapSort(a, sz);
	_SelectSort(a, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
}
int main()
{
	//test1();
	test2();
	return 0;
}