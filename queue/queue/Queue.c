#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"
void QueueInit(Queue* q)
{
	assert(q);
	q->phead = NULL;
	q->ptail = NULL;
	q->size = 0;
}

void QueuePush(Queue* q, QDataType data)
{
	assert(q);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(0);
	}
	else
	{
		newnode->next = NULL;
		newnode->x = data;
	}
	if (q->ptail == NULL)
	{
		q->phead = q->ptail = newnode;
		
	}
	else
	{
		q->ptail->next = newnode;
		q->ptail = newnode;
		
	}
	q->size++;
}

void QueuePop(Queue* q)
{
	assert(q);
	assert(q->size != 0);
	if (q->phead->next == NULL)
	{
		free(q->phead);
		q->phead = q->ptail = NULL;
	}
	else
	{
		QNode* next = q->phead->next;
		free(q->phead);
		q->phead = next;
	}
	q->size--;
}

QDataType QueueFront(Queue* q)
{
	assert(q);
	assert(q->size != 0);
	return q->phead->x;
}
QDataType QueueBack(Queue* q)
{
	assert(q);
	assert(q->size != 0);
	return q->ptail->x;
}

int QueueSize(Queue* q)
{
	assert(q);
	return q->size;
}

bool QueueEmpty(Queue* q)
{
	assert(q);
	return q->size==0;
}
void QueueDestroy(Queue* q)
{
	assert(q);
	QNode* cur = q->phead;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	q->phead = q->ptail = NULL;
	q->size = 0;

}




