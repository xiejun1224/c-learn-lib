#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
int main()
{
	SL s1;
	//≥ı ºªØ
	SLInit(&s1);
	//SLDestroy(&s1);

	//Œ≤≤Â
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	SLPushBack(&s1, 5);

	//¥Ú”°
	SLPrint(s1);

	//Õ∑≤Â
	/*SLPushFront(&s1, 6);
	SLPushFront(&s1, 7);
	SLPrint(s1);*/

	//Õ∑…æ
	SLpopFront(&s1);
	SLPrint(s1);
	SLpopFront(&s1);
	SLPrint(s1);


	//Œ≤…æ
	SLpopBack(&s1);
	SLPrint(s1);
	SLpopBack(&s1);
	SLPrint(s1);
	SLpopBack(&s1);
	SLPrint(s1);
	
	return 0;
}
