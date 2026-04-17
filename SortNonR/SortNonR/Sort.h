#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<stdbool.h>
typedef int StackDataType;
typedef struct stack {
	StackDataType* a;
	int size;
	int capacity;
}stack;
//栈的初始化
void StackInit(stack* s);
//栈的销毁
void StackDestroy(stack* s);
//入栈
void StackPush(stack* s, StackDataType x);
//出栈
void StackPop(stack* s);
//获取栈顶元素
int StackTop(stack* s);
//栈的判空
bool StackEmpty(stack* s);

//冒泡排序
void BubbleSort(int* a, int n);

// 快速排序递归实现
// 快速排序hoare版本
int PartSort1(int* a, int left, int right);
// 快速排序挖坑法
int PartSort2(int* a, int left, int right);
// 快速排序前后指针法
int PartSort3(int* a, int left, int right);
void QuickSort(int* a, int left, int right);

// 快速排序 非递归实现
void QuickSortNonR(int* a, int left, int right);
//快排
void QuickSort(int* a, int left, int right);
//插入排序
void InsertSort(int* a, int n);
//归并排序
void MergeSort(int* a, int n);
//归并排序非递归
void MergeSortNonR(int* a, int n);
//交换函数
void Swap(int* x, int* y);
//三数取中
int ThreeNumMidi(int* a, int left, int right);
