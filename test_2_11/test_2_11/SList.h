#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLDateType;
typedef struct SListNode
{
	SLDateType date;
	struct SListNode* next;
}SLTNode;

void SLTPrint(SLTNode* phead);
//Î²²å
void SLTPushBack(SLTNode**pphead,SLDateType x);
//Í·²å
void SLTPushFrond(SLTNode** pphead, SLDateType x);
//Î²É¾
void SLTPopBack(SLTNode** pphead);
//Í·É¾
void SLTPopFrond(SLTNode** pphead);