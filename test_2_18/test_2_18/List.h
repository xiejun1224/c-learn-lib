#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int ListNodeDate; 
typedef struct ListNode
{
	ListNodeDate val;
	struct ListNode* next;
	struct ListNode* prev;
}ListNode;

//初始化双链表
ListNode* LTInit();
//双链表的尾插
void LTPushBack(ListNode* phead,int x);
//打印双链表
void Print(ListNode*phead);
//双链表的头插
void LTPushFront(ListNode* phead,int x);
//双链表的尾删
void LTPopBack(ListNode* phead);
//双链表的头删
void LTPopFront(ListNode* phead);
//查找
ListNode* Find( ListNode*phead,ListNodeDate x);
//在指定位置之后插入数据
void LTInsert(ListNode* pos, ListNodeDate x);
//删除指定位置的数据
void LTErase(ListNode* pos);
//销毁双链表
void LTDestory(ListNode* phead);
