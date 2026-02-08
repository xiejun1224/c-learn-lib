#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
//顺序表初始化实现
void SLinit(SL* ps)
{
	ps->arr = NULL;
	ps->size = 0;
	ps->capacity = 0;

}

//顺序表销毁的实现
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


//顺序表的增容
void SLcapacity(SL* ps)
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		int Newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLdatetype* tmp = (SLdatetype*)realloc(ps->arr, Newcapacity * sizeof(SLdatetype));
		if (tmp == NULL)
		{
			perror("tmp");
			exit(1);
		}
		ps->capacity = Newcapacity;
		ps->arr = tmp;
	}
}


//顺序表的尾插实现
void SLPushBack(SL* ps,SLdatetype x)
{
	assert(ps);
	
	SLcapacity(ps);
	
	ps->arr[ps->size] = x;
	ps->size++;
}

//顺序表头插的实现
void SLPushFront(SL* ps, SLdatetype x)
{
	assert(ps);
	
	SLcapacity(ps);
	for (int i = ps->size++; i>0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[0] = x;

}

//顺序表的打印实现
void Print(SL ps)
{
	for (int i = 0; i < ps.size; i++)
	{
		printf("%d ", ps.arr[i]);
	}
	printf("\n");
}


//顺序表的尾删实现
void SLPopBack(SL* ps)
{
	assert(ps);
	assert(ps->size);
	ps->size--;

}

//顺序表的头删实现
void SLPopFront(SL* ps)
{
	assert(ps);
	assert(ps->size);
	for (int i = 0;i<ps->size-1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}


//顺序表在任意位置插入的实现
void SLInsert(SL* ps, int pos, SLdatetype x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	for (int i = ps->size++; i>pos; i--)
	{
		ps->arr[i] = ps->arr[i-1];

	}
	ps->arr[pos] = x;

}

//删除指定位置的数据实现
void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	for (int i = pos; i<ps->size-1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];

	}
	ps->size--;
}

//顺序表的查找实现
#if 0
int SLFind(SL* ps, SLdatetype x)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->arr[i] == x)
		{
			return i;
		}

	}
	return -1;

}
#endif