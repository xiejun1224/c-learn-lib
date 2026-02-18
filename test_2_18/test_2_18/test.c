#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"
void LTtest1()
{
	ListNode* phead = LTInit();
	LTPushBack(phead, 1);
	Print(phead);
	LTPushBack(phead, 2);
	Print(phead);
	LTPushBack(phead, 3);
	Print(phead);
	LTPushBack(phead, 4);
	Print(phead);
	LTPushFront(phead, 5);
	Print(phead);
	LTPushFront(phead, 6);
	Print(phead);
	LTPopBack(phead);
	Print(phead);
	LTPopBack(phead);
	Print(phead);
	
	LTPopFront(phead);
	Print(phead);
	LTPopFront(phead);
	Print(phead);
	
	/*ListNode*ret= Find(phead, 1);
	LTInsert(ret, 3);
	Print(phead);
	ListNode* del = Find(phead, 1);
	LTErase(del);
	Print(phead);*/
	
	/*if (ret == NULL)
		printf("没有找到！\n");
	else
		printf("找到了！\n");*/
	LTDestory(phead);
	phead = NULL;

}
int main()
{
	LTtest1();
	return 0;
}