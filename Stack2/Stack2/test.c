#define _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"
void test1()
{
	Stack st;
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	StackPush(&st, 5);
	printf("%d ", StackSize(&st));
	printf("\n");
	for (int i = 0; i < StackSize(&st); i++)
	{
		printf("%d ", st._a[i]);
	}
	StackPop(&st);
	printf("\n");
	printf("%d ", StackSize(&st));
	printf("\n");
	StackPrint(&st);

	StackDestroy(&st);
}
int main()
{
	test1();
	return 0;
}