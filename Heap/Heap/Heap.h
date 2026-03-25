#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef int HeapDataType;
typedef struct Heap
{
	HeapDataType* a;
	int size;
	int capacity;
}HP;
void Swap(HeapDataType* x, HeapDataType* y);
void HPInit(HP* php);
void HPDestroy(HP* php);
void HPPush(HP* php, HeapDataType x);
void HPPop(HP* php);
bool HPEmpty(HP* php);
void AdjustUp(HeapDataType* a, int chiled);
void AdjustDown(HeapDataType* a, int parent,int n);
HeapDataType HPTop(HP*php);

