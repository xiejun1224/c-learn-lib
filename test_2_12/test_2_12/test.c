#define _CRT_SECURE_NO_WARNINGS 1
#include"SListNode.h"

void SLNodetest1()
{
	/*SLTNode* node1 = (SLTNode*)malloc(sizeof(SLTNode));
	SLTNode* node2 = (SLTNode*)malloc(sizeof(SLTNode));
	SLTNode* node3 = (SLTNode*)malloc(sizeof(SLTNode));
	SLTNode* node4 = (SLTNode*)malloc(sizeof(SLTNode));
	node1->date = 1;
	node2->date = 2;
	node3->date = 3;
	node4->date = 4;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;
	SLTNode* plist = node1;
	SLTPrint(plist);*/

}
void SLTNodetest2()
{
	SLTNode* plist=NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPrint(plist);
	SLTPushFront(&plist, 6);
	SLTPrint(plist);
	SLTPushFront(&plist, 7);
	SLTPrint(plist);
	SLTPushFront(&plist, 8);
	SLTPrint(plist);
	SLTPushFront(&plist, 9);
	SLTPrint(plist);
	SLTPopBack(&plist);
	SLTPrint(plist);
	SLTPopBack(&plist);
	SLTPrint(plist);
	SLTPopBack(&plist);
	SLTPrint(plist);
	SLTPopBack(&plist);
	SLTPrint(plist);
	SLTPopFront(&plist);
	SLTPrint(plist);
	SLTPopFront(&plist);
	SLTPrint(plist);

	SLTNode*find= SLTFind(plist, 6);
	/*if (find == NULL)
		printf("没有找到！\n");
	else
		printf("找到了！");*/
	//SLTInsert(&plist, find, 5);
	//SLTPrint(plist);
	//SLTErase(&plist, find);
	//SLTPrint(plist);
	SLTEraseAfter(find);
	SLTPrint(plist);
	SLTInsertAfter(find, 7);
	SLTPrint(plist);
	SLTDestroy(&plist);
	SLTPrint(plist);

}
int main()
{
	//SLNodetest1();
	SLTNodetest2();
	return 0;
}