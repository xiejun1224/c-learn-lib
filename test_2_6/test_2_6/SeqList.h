#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int SLdateType;
typedef struct SeqList
{
	SLdateType* arr;
	int size;
	int capacity;
}SL;
//检查空间够不够

void SLcheckCapacity(SL* ps);

//顺序表的初始化

void SLInit(SL* ps);

//顺序表的销毁
void SLDestroy(SL* ps);

//顺序表的打印
void SLPrint(SL ps);

//顺序表的尾插

void SLPushBack(SL* ps,SLdateType x);

//顺序表的头插

void SLPushFront(SL* ps, SLdateType x);

//顺序表的尾删

void SLpopBack(SL* ps);

//顺序表的头删

void SLpopFront(SL* ps);