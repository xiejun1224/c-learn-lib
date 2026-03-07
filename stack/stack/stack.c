#define _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"
void STInit(stack* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}
void STPush(stack* ps, STDateType x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		int newcapacity = ps->capacity==0?4:ps->capacity * 2;
		STDateType* tem = (STDateType*)realloc(ps->a, newcapacity * sizeof(STDateType));
		if (tem == NULL)
		{
			perror("realloc fail");
			exit(0);
		}
		ps->a = tem;
		ps->capacity = newcapacity;
	}
	(ps->a)[ps->top] = x;
	ps->top++;
}

void STPop(stack* ps)
{
	assert(ps);
	ps->top--;
}

STDateType STTop(stack* ps)
{
	assert(ps);
	return ps->a[ps->top-1];
}


void STDestory(stack* ps)
{
	assert(ps);
	ps->top = 0;
	ps->capacity = 0;
	free(ps->a);
	ps->a = NULL;
}

bool STIsEmpty(stack* ps)
{
	assert(ps);
	return ps->top==0;
}

int STSize(stack* ps)
{
	assert(ps);
	return ps->top;
}

