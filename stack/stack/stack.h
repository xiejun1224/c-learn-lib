#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<stdlib.h>
typedef int STDateType;
typedef struct stack
{
	STDateType* a;
	int top;
	int capacity;
}stack;
//初始化栈
void STInit(stack* ps);
//入栈
void STPush(stack* ps, STDateType x);
//出栈
void STPop(stack* ps);
//获取栈顶元素
STDateType STTop(stack* ps);
//销毁栈
void STDestory(stack* ps);
//栈的判空
bool STIsEmpty(stack* ps);
//获取数据个数
int STSize(stack* ps);


