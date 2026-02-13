#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int SLDateType;
//定义节点
typedef struct SListNode
{
	SLDateType date;
	struct SListNode* next;
}SLTNode;

//打印
void SLTPrint(SLTNode* plist);
//尾插
void SLTPushBack(SLTNode** pphead, SLDateType x);
//头插
void SLTPushFront(SLTNode** pphead, SLDateType x);
//尾删
void SLTPopBack(SLTNode** pphead);
//头删
void SLTPopFront(SLTNode** pphead);
//查找
SLTNode* SLTFind(SLTNode* phead, SLDateType x);
//在指定位置位置之前插入
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLDateType x);
//在指定位置之后插入数据
void SLTInsertAfter(SLTNode* pos, SLDateType x);
//删除指定位置
void SLTErase(SLTNode** pphead, SLTNode* pos);
//删除指定位置之后的数据
void SLTEraseAfter(SLTNode* pos);
//销毁链表
void SLTDestroy(SLTNode** pphead);