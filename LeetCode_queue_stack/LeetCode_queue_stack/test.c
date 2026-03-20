#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#if 0
//用两个栈实现队列
typedef int STDataType;
typedef struct stack
{
    STDataType* a;
    int top;
    int capacity;
}ST;
void STInit(ST* pst);
void STDestroy(ST* pst);

// 入栈  出栈
void STPush(ST* pst, STDataType x);
void STPop(ST* pst);

// 取栈顶数据
STDataType STTop(ST* pst);

// 判空
bool STEmpty(ST* pst);
// 获取数据个数
int STSize(ST* pst);

void STInit(ST* pst)
{
    assert(pst);
    pst->a = NULL;
    pst->top = 0;
    pst->capacity = 0;
}

void STDestroy(ST* pst)
{
    assert(pst);
    free(pst->a);
    pst->a = NULL;
    pst->top = 0;
    pst->capacity = 0;

}

int STSize(ST* pst)
{
    assert(pst);
    return pst->top;
}


void STPush(ST* pst, STDataType x)
{
    assert(pst);
    if (pst->top == pst->capacity)
    {
        int newcapacity = pst->capacity == 0 ? 4 : 2 * pst->capacity;
        STDataType* cur = (STDataType*)realloc(pst->a, newcapacity * sizeof(STDataType));
        if (cur == NULL)
        {
            perror("realloc fail");
            return;
        }
        else
        {
            pst->capacity = newcapacity;
            pst->a = cur;
        }
    }
    pst->a[pst->top] = x;
    pst->top++;

}

void STPop(ST* pst)
{
    assert(pst);
    assert(pst->top != 0);
    pst->top--;

}

STDataType STTop(ST* pst)
{
    assert(pst);
    assert(pst->top != 0);
    return pst->a[pst->top - 1];
}

bool STEmpty(ST* pst)
{
    assert(pst);
    return pst->top == 0;
}

typedef struct {
    ST stack1;
    ST stack2;
} MyQueue;


MyQueue* myQueueCreate()
{
    MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
    if (obj == NULL)
    {
        perror("malloc fail");
        return NULL;
    }
    else
    {
        STInit(&obj->stack1);
        STInit(&obj->stack2);
    }
    return obj;
}

void myQueuePush(MyQueue* obj, int x)
{
    assert(obj);
    if (!STEmpty(&obj->stack1))
    {
        STPush(&obj->stack1, x);
    }
    else {
        STPush(&obj->stack2, x);
    }
}

int myQueuePop(MyQueue* obj) {
    ST* empty = &obj->stack1;
    ST* noempty = &obj->stack2;
    if (!STEmpty(&obj->stack1))
    {
        noempty = &obj->stack1;
        empty = &obj->stack2;
    }
    while (STSize(noempty) > 1)
    {
        STPush(empty, STTop(noempty));
        STPop(noempty);
    }
    int x = STTop(noempty);
    STPop(noempty);
    while (STSize(empty))
    {
        STPush(noempty, STTop(empty));
        STPop(empty);
    }
    return x;
}

int myQueuePeek(MyQueue* obj) {
    assert(obj);
    ST* empty = &obj->stack1;
    ST* noempty = &obj->stack2;
    if (!STEmpty(&obj->stack1))
    {
        noempty = &obj->stack1;
        empty = &obj->stack2;
    }
    while (STSize(noempty) > 1)
    {
        STPush(empty, STTop(noempty));
        STPop(noempty);
    }
    int x = STTop(noempty);

    while (STSize(empty))
    {
        STPush(noempty, STTop(empty));
        STPop(empty);
    }
    return x;

}

bool myQueueEmpty(MyQueue* obj) {
    assert(obj);
    return (STSize(&obj->stack1) == 0) && (STSize(&obj->stack2) == 0);

}

void myQueueFree(MyQueue* obj) {
    assert(obj);
    STDestroy(&obj->stack1);
    STDestroy(&obj->stack2);
    free(obj);
    obj = NULL;

}
#endif 
//优化后两个栈实现队列
typedef int STDataType;
typedef struct stack
{
    STDataType* a;
    int top;
    int capacity;
}ST;
void STInit(ST* pst);
void STDestroy(ST* pst);

// 入栈  出栈
void STPush(ST* pst, STDataType x);
void STPop(ST* pst);

// 取栈顶数据
STDataType STTop(ST* pst);

// 判空
bool STEmpty(ST* pst);
// 获取数据个数
int STSize(ST* pst);

void STInit(ST* pst)
{
    assert(pst);
    pst->a = NULL;
    pst->top = 0;
    pst->capacity = 0;
}

void STDestroy(ST* pst)
{
    assert(pst);
    free(pst->a);
    pst->a = NULL;
    pst->top = 0;
    pst->capacity = 0;

}

int STSize(ST* pst)
{
    assert(pst);
    return pst->top;
}


void STPush(ST* pst, STDataType x)
{
    assert(pst);
    if (pst->top == pst->capacity)
    {
        int newcapacity = pst->capacity == 0 ? 4 : 2 * pst->capacity;
        STDataType* cur = (STDataType*)realloc(pst->a, newcapacity * sizeof(STDataType));
        if (cur == NULL)
        {
            perror("realloc fail");
            return;
        }
        else
        {
            pst->capacity = newcapacity;
            pst->a = cur;
        }
    }
    pst->a[pst->top] = x;
    pst->top++;

}

void STPop(ST* pst)
{
    assert(pst);
    assert(pst->top != 0);
    pst->top--;

}

STDataType STTop(ST* pst)
{
    assert(pst);
    assert(pst->top != 0);
    return pst->a[pst->top - 1];
}

bool STEmpty(ST* pst)
{
    assert(pst);
    return pst->top == 0;
}

typedef struct {
    ST pushstack;
    ST popstack;
} MyQueue;


MyQueue* myQueueCreate()
{
    MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
    if (obj == NULL)
    {
        perror("malloc fail");
        return NULL;
    }
    else {
        STInit(&obj->pushstack);
        STInit(&obj->popstack);
    }
    return obj;
}

void myQueuePush(MyQueue* obj, int x)
{
    assert(obj);
    STPush(&obj->pushstack, x);
}

int myQueuePop(MyQueue* obj) {
    assert(obj);
    if (STEmpty(&obj->popstack))
    {
        while (!STEmpty(&obj->pushstack))
        {
            STPush(&obj->popstack, STTop(&obj->pushstack));
            STPop(&obj->pushstack);
        }
    }
    int x = STTop(&obj->popstack);
    STPop(&obj->popstack);
    return x;

}

int myQueuePeek(MyQueue* obj) {
    assert(obj);
    if (STEmpty(&obj->popstack))
    {
        while (!STEmpty(&obj->pushstack))
        {
            STPush(&obj->popstack, STTop(&obj->pushstack));
            STPop(&obj->pushstack);
        }
    }
    int x = STTop(&obj->popstack);
    return x;

}

bool myQueueEmpty(MyQueue* obj) {
    assert(obj);
    return STEmpty(&obj->pushstack) && STEmpty(&obj->popstack);
}

void myQueueFree(MyQueue* obj) {
    assert(obj);
    STDestroy(&obj->pushstack);
    STDestroy(&obj->popstack);
    free(obj);
}


//用两个队列实现栈
typedef int QDataType;

typedef struct QListNode
{
    QDataType val;
    struct QListNode* next;

}QNode;

typedef struct Queue
{
    QNode* phead;
    QNode* ptail;
    int size;
}Queue;
// 初始化队列 
void QueueInit(Queue* q);
// 队尾入队列 
void QueuePush(Queue* q, QDataType data);
// 队头出队列 
void QueuePop(Queue* q);
// 获取队列头部元素 
QDataType QueueFront(Queue* q);
// 获取队列队尾元素 
QDataType QueueBack(Queue* q);
// 获取队列中有效元素个数 
int QueueSize(Queue* q);
// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
bool QueueEmpty(Queue* q);
// 销毁队列 
void QueueDestroy(Queue* q);


void QueueInit(Queue* q)
{
    assert(q);
    q->phead = NULL;
    q->ptail = NULL;
    q->size = 0;
}
void QueuePush(Queue* q, QDataType x)
{
    assert(q);
    QNode* newnode = (QNode*)malloc(sizeof(QNode));
    if (newnode == NULL)
    {
        perror("malloc fail");
        return;
    }
    else
    {
        newnode->next = NULL;
        newnode->val = x;
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
    return q->phead->val;
}

QDataType QueueBack(Queue* q)
{
    assert(q);
    assert(q->size != 0);
    return q->ptail->val;
}

int QueueSize(Queue* q)
{
    assert(q);
    return q->size;
}

bool QueueEmpty(Queue* q)
{
    assert(q);
    return q->size == 0;
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

typedef struct {
    Queue queue1;
    Queue queue2;

} MyStack;


MyStack* myStackCreate()
{
    MyStack* pst = (MyStack*)malloc(sizeof(MyStack));
    if (pst == NULL)
    {
        perror("malloc fail");
        return NULL;
    }
    else
    {
        QueueInit(&pst->queue1);
        QueueInit(&pst->queue2);

    }
    return pst;
}

void myStackPush(MyStack* obj, int x) {
    assert(obj);
    if (!QueueEmpty(&obj->queue1))
    {
        QueuePush(&obj->queue1, x);
    }
    else
    {
        QueuePush(&obj->queue2, x);
    }

}

int myStackPop(MyStack* obj) {
    assert(obj);
    Queue* empty = &obj->queue1;
    Queue* noempty = &obj->queue2;
    if (!QueueEmpty(&obj->queue1))
    {
        noempty = &obj->queue1;
        empty = &obj->queue2;
    }
    while (QueueSize(noempty) > 1)
    {
        QueuePush(empty, QueueFront(noempty));
        QueuePop(noempty);
    }
    int x = QueueFront(noempty);
    QueuePop(noempty);
    return x;

}

int myStackTop(MyStack* obj) {
    assert(obj);
    if (!QueueEmpty(&obj->queue1))
    {
        return QueueBack(&obj->queue1);
    }
    else
    {
        return QueueBack(&obj->queue2);
    }

}

bool myStackEmpty(MyStack* obj) {
    assert(obj);
    return (QueueSize(&obj->queue1) == 0) && (QueueSize(&obj->queue2) == 0);

}

void myStackFree(MyStack* obj) {
    assert(obj);
    QueueDestroy(&obj->queue1);
    QueueDestroy(&obj->queue2);
    free(obj);
    obj = NULL;
}
