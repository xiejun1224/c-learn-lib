#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"
#if 0
void SListTest1()
{
	SLTNode* node1 = (SLTNode*)malloc(sizeof(SLTNode));
	node1->date = 1;
	SLTNode* node2 = (SLTNode*)malloc(sizeof(SLTNode));
	node2->date = 2;
	SLTNode* node3 = (SLTNode*)malloc(sizeof(SLTNode));
	node3->date = 3;
	SLTNode* node4 = (SLTNode*)malloc(sizeof(SLTNode));
	node4->date = 4;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;
	SLTNode* plist = node1;
	SLTPrint(plist);
}
#endif
void SLTest2()
{
	SLTNode* plist=NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPrint(plist);
	SLTPushFrond(&plist, 5);
	SLTPrint(plist);
	SLTPopBack(&plist);
	SLTPrint(plist);
	SLTPopBack(&plist);
	SLTPopBack(&plist);
	SLTPopBack(&plist);
	SLTPrint(plist);
	SLTPopBack(&plist);
	SLTPrint(plist);
	SLTPopBack(&plist);



}
int main()
{
	//SListTest1();
	SLTest2();
	return 0;
}
