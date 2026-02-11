#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"
void SLTPrint(SLTNode* phead)
{
	SLTNode* pcur = phead;
	while (pcur)
	{
		printf("%d->", pcur->date);
		pcur = pcur->next;
	}
	printf("NULL\n");
}

SLTNode* SLTBuynode(SLDateType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc");
		exit(1);
	}
	newnode->date = x;
	newnode->next = NULL;
	return newnode;
}

void SLTPushBack(SLTNode** pphead, SLDateType x)
{
	assert(pphead);
	SLTNode* ptail = *pphead;
	SLTNode* newnode = SLTBuynode(x);
	
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		while (ptail->next)
		{
			ptail = ptail->next;
		}
		ptail->next = newnode;
	}
}

void SLTPushFrond(SLTNode** pphead, SLDateType x)
{
	assert(pphead);
	SLTNode*newnode=SLTBuynode(x);
	newnode->next = *pphead;
	*pphead = newnode;

}

void SLTPopBack(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* prev = *pphead;
		SLTNode* ptail = *pphead;
		while (ptail->next)
		{
			prev = ptail;
			ptail = ptail->next;
		}
		    free(ptail);
			ptail = NULL;
			prev->next = NULL;
	}

}