#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"
ListNode* buynode(int x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	if (newnode == NULL)
	{
		perror("malloc");
		exit(1);
	}
	newnode->val = x;
	newnode->next = newnode;
	newnode->prev = newnode;
}

ListNode* LTInit()
{
	ListNode* newnode = buynode(-1);
	return newnode;
}

void LTPushBack(ListNode* phead,int x)
{
	assert(phead);
	ListNode* newnode = buynode(x);
	newnode->next = phead;
	newnode->prev = phead->prev;
	phead->prev->next = newnode;
	phead->prev = newnode;
}

void Print(ListNode* phead)
{
	assert(phead);
	ListNode* plist = phead->next;
	while (plist != phead)
	{
		printf("%d ", plist->val);
		plist = plist->next;
	}
	printf("\n");
}

void LTPushFront(ListNode* phead,int x)
{
	assert(phead);
	ListNode* newnode = buynode(x);
	newnode->next = phead->next;
	newnode->prev = phead;
	phead->next->prev = newnode;
	phead->next = newnode;

}

void LTPopBack(ListNode* phead)
{
	assert(phead && phead->next!=phead);
	ListNode* del = phead->prev;
	del->prev->next = phead;
	phead->prev = del->prev;
	free(del);
	del = NULL;
}


void LTPopFront(ListNode* phead)
{
	assert(phead && phead->next != phead);
	ListNode* del = phead->next;
	del->next->prev = phead;
	phead->next = del->next;
	free(del);
	del = NULL;
}

ListNode* Find(ListNode*phead, ListNodeDate x)
{
	assert(phead && phead->next != phead);
	ListNode* plist = phead->next;
	while (plist != phead)
	{
		if (plist->val == x)
			return plist;
		else
			plist = plist->next;
	}
	return NULL;
}

void LTInsert(ListNode* pos, ListNodeDate x)
{
	assert(pos);
	ListNode* newnode = buynode(x);
	newnode->next = pos->next;
	newnode->prev = pos;
	pos->next->prev = newnode;
	pos->next = newnode;
}

void LTErase(ListNode* pos)
{
	assert(pos);
	pos->next->prev = pos->prev;
	pos->prev->next = pos->next;
	free(pos);
	pos = NULL;
}

void LTDestory(ListNode* phead)
{
	assert(phead);
	ListNode* del = phead->next;
	while (del != phead)
	{
		ListNode* next = del->next;
		free(del);
		del = next;
	}
	free(phead);
	phead = NULL;
}


