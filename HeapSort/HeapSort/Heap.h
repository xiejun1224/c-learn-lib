#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
typedef int HeapDateType;
typedef struct Heap
{
	HeapDateType* a;
	int size;
	int capacity;
}HP;

void HPInit(HP*php);
void HPDestroy(HP* php);
void HPPush(HP* php, HeapDateType x);
void HPPop(HP*php);
HeapDateType HPTop(HP* php);
bool HPEmpty(HP* php);
void Swap(HeapDateType* x, HeapDateType* y);
void AdjustUP(HeapDateType* a, int child);
void AdjustDown(HeapDateType* a, int parent, int n);


