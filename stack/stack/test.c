#define _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"
void test1()
{
	stack ps;
	STInit(&ps);
	STPush(&ps, 1);
	STPush(&ps, 2);
	STPush(&ps, 3);
	STPush(&ps, 4);
	STPop(&ps);
	printf("%d\n", STTop(&ps));
	printf("%d\n", STSize(&ps));
	
	if (STIsEmpty(&ps))
	{
		printf("这个栈是空的");
	}
	else
	{
		printf("这个栈不是空的");
	}
	STDestory(&ps);
}
int main()
{
	test1();
	return 0;
}