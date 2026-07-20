#define _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"
// 初始化栈 
void StackInit(Stack* ps)
{
	assert(ps);
	ps->_a = (STDataType*)malloc(sizeof(STDataType) * 4);
	if (ps->_a == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	ps->_top = 0;
	ps->_capacity = 4;
}

// 入栈 
void StackPush(Stack* ps, STDataType data)
{
	assert(ps);
	if (ps->_capacity == ps->_top)
	{
		STDataType* tmp = (STDataType*)realloc(ps->_a, 2 * ps->_capacity * sizeof(STDataType));
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}
		ps->_a = tmp;
		ps->_capacity *= 2;
	}
	ps->_a[ps->_top++] = data;
}

// 出栈 
void StackPop(Stack* ps)
{
	assert(ps);
	assert(ps->_top != 0);
	ps->_top--;
}

// 获取栈顶元素 
STDataType StackTop(Stack* ps)
{
	assert(ps);
	assert(ps->_top != 0);
	return ps->_a[ps->_top - 1];
}

// 获取栈中有效元素个数 
int StackSize(Stack* ps)
{
	assert(ps);
	return ps->_top;
}

// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0 
bool StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->_top == 0;
}

// 销毁栈 
void StackDestroy(Stack* ps)
{
	assert(ps);
	free(ps->_a);
	ps->_a = NULL;
	ps->_capacity = ps->_top = 0;
}
// 打印栈的所有元素
void StackPrint(Stack* ps)
{
	for (int i = 0; i <ps->_top; i++)
	{
		printf("%d ", ps->_a[i]);
	}
	printf("\n");
}
