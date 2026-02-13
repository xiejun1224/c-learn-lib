#define _CRT_SECURE_NO_WARNINGS 1
#include"SListNode.h"
void SLTPrint(SLTNode* plist)
{
	SLTNode* phead = plist;
	while (phead)
	{
		printf("%d->", phead->date);
		phead = phead->next;
	}
	printf("NULL\n");
}

SLTNode* SLTBuyNode(SLDateType x)
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
	 SLTNode*plist= SLTBuyNode(x);

	if (*pphead == NULL)
	{
		*pphead = plist;
	}
	else
	{
		SLTNode* pcur = *pphead;
		while (pcur->next)
		{
			pcur = pcur->next;
		}
		    pcur->next = plist;
	}

}

void SLTPushFront(SLTNode** pphead, SLDateType x)
{
	assert(pphead);
	SLTNode* plist = SLTBuyNode(x);
	plist->next = *pphead;
	*pphead = plist;

}
void SLTPopBack(SLTNode** pphead)
{
	assert(pphead && *pphead);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* prev=*pphead;
		SLTNode* ptail=*pphead;
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

void SLTPopFront(SLTNode** pphead)
{
	assert(pphead && *pphead);
	/*if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* prev = *pphead;
		*pphead = prev->next;
		free(prev);
	    prev = NULL;

	}*/
	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;

}

SLTNode* SLTFind(SLTNode* phead, SLDateType x)
{
	SLTNode* pcur = phead;

	while (pcur)
	{
		if (pcur->date == x)
		{
			return pcur;
		}
		pcur = pcur->next;
	}
	return NULL;
}

void SLTInsert(SLTNode** pphead, SLTNode* pos, SLDateType x)
{
	if (*pphead == pos)
	{
		SLTPushFront(pphead, x);
	}
	else
	{
		SLTNode* newnode = SLTBuyNode(x);
		SLTNode* plist = *pphead;
		while (plist->next != pos)
		{
			plist = plist->next;
		}
		plist->next = newnode;
		newnode->next = pos;

	}
}

void SLTErase(SLTNode** pphead, SLTNode* pos)
{

	assert(pphead && *pphead);
	assert(pos);
	SLTNode* prev = *pphead;
	if (*pphead == pos)
	{
		SLTPopFront(pphead);
	}
	else
	{
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
		pos = NULL;
	}
}

void SLTEraseAfter(SLTNode* pos)
{
	assert(pos && pos->next);
	SLTNode* del = pos->next;
	pos->next = del->next;
	free(del);
	del = NULL;

}

void SLTInsertAfter(SLTNode* pos, SLDateType x)
{
	assert(pos);
	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = pos->next;
	pos->next = newnode;

}

void SLTDestroy(SLTNode** pphead)
{
	assert(pphead && *pphead);
	SLTNode* pcur = *pphead;
	while (pcur)
	{
		SLTNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	*pphead = NULL;
}