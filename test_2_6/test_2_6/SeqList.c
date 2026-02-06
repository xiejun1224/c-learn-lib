#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
void SLInit(SL* ps)
{
	ps->arr = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
void SLDestroy(SL* ps)
{
	if (ps->arr)
	{
		free(ps->arr);
	}
		ps->arr = NULL;
		ps->size = 0;
		ps->capacity = 0;
}
void SLPrint(SL ps)
{
	for (SLdateType i = 0; i<ps.size; i++)
	{
		printf("%d ", ps.arr[i]);
	}
	printf("\n");
}

void SLcheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		//空间不够需要申请空间
		//用realloc，因为realloc有增容的概念
		int Newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLdateType* tmp = (SLdateType*)realloc(ps->arr, Newcapacity * sizeof(SLdateType));
		if (tmp == NULL)
		{
			perror("realloc");
			exit(1);
		}
		ps->arr = tmp;
		ps->capacity = Newcapacity;

	}
}
//尾插的实现
void SLPushBack(SL* ps,SLdateType x)
{
	assert(ps);
	SLcheckCapacity(ps);
	/*ps->arr[ps->size] = x;
	(ps->size)++;*/
	ps->arr[ps->size++] = x;
}
//头插的实现
void SLPushFront(SL* ps, SLdateType x)
{
	assert(ps);
	SLcheckCapacity(ps);
	for (int i =ps->size++; i >0 ; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[0] = x;
}
//尾删实现
void SLpopBack(SL* ps)
{
	assert(ps);
	assert(ps->size);
	ps->size--;
}
//头删实现
void SLpopFront(SL* ps)
{
	assert(ps);
	assert(ps->size);
	for (int i = 0; i<ps->size-1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}