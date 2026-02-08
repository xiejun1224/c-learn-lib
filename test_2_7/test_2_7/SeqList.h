#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include"Contact.h"
#include<string.h>
//定义数据类型

typedef peoInfo SLdatetype;

//定义结构体

typedef struct SeqList
{
	SLdatetype* arr;
	int size;
	int capacity;
}SL;

//顺序表的初始化
void SLinit(SL* ps);

//顺序表的销毁
void SLDestroy(SL* ps);

//顺序表的空间增容
void SLcapacity(SL* ps);

//顺序表的尾插

void SLPushBack(SL* ps,SLdatetype x);

//顺序表的头插

void SLPushFront(SL* PS, SLdatetype x);

//顺序表的打印

void Print(SL ps);

//顺序表的尾删

void SLPopBack(SL* ps);

//顺序表的头删
void SLPopFront(SL* ps);

//顺序表在指定位置之前插入数据

void SLInsert(SL* ps, int pos, SLdatetype x);

//删除指定位置的数据

void SLErase(SL* ps, int pos);

//顺序表的查找

int SLFind(SL* ps, SLdatetype x);