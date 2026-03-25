#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"
void TestHp1()
{
	int a[] = { 2,5,7,2,6,8,4,8,0,3 };
	HP hp;
	HPInit(&hp);
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		HPPush(&hp, a[i]);
	}
	printf("TestHp1 (建堆): ");
	while (!HPEmpty(&hp))
	{
		printf("%d ", HPTop(&hp));
		HPPop(&hp);
	}
	printf("\n");
}
void TestHp2()
{
	int a[] = { 2,5,7,2,6,8,4,8,0,3 };
	HP hp;
	HPInit(&hp);
	int sz = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < sz; i++)
	{
		HPPush(&hp, a[i]);
	}
	for (int j = 0; j < sz; j++)
	{
		a[j] = HPTop(&hp);
		HPPop(&hp);
	}
	printf("TestHp2 (排序): ");
	for (int k = 0; k < sz; k++)
	{
		printf("%d ", a[k]);
	}
	printf("\n");
}
int main()
{
	TestHp1();
	TestHp2();
	return 0;
}
