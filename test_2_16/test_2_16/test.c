#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 0
环形链表中的约瑟夫问题
编号为 1 到 n 的 n 个人围成一圈。从编号为 1 的人开始报数，报到 m 的人离开。
下一个人继续从 1 开始报数。
n - 1 轮结束以后，只剩下一个人，问最后留下的这个人编号是多少？

数据范围：
1
≤
n
,
m
≤
10000
1≤n, m≤10000
进阶：空间复杂度
O
(
	1
)
O(1)，时间复杂度
O
(
	n
)
O(n)
示例1
输入：
5, 2
复制
返回值：
3
复制
说明：
开始5个人 1，2，3，4，5 ，从1开始报数，1->1，2->2编号为2的人离开
1，3，4，5，从3开始报数，3->1，4->2编号为4的人离开
1，3，5，从5开始报数，5->1，1->2编号为1的人离开
3，5，从3开始报数，3->1，5->2编号为5的人离开
最后留下人的编号是3
/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 *
 * @param n int整型
 * @param m int整型
 * @return int整型
 */
#include <stdio.h>
    typedef struct ListNode ListNode;
ListNode* buynode(int x)
{
    ListNode* node = (ListNode*)malloc(sizeof(ListNode));
    if (node == NULL)
    {
        perror("malloc");
        exit(1);
    }
    node->val = x;
    node->next = NULL;
    return node;
}
ListNode* creatcircle(int n)
{
    ListNode* phead = buynode(1);
    ListNode* ptail = phead;
    for (int i = 2; i <= n; i++)
    {
        ptail->next = buynode(i);
        ptail = ptail->next;
    }
    ptail->next = phead;

    return ptail;
};
int ysf(int n, int m)
{
    ListNode* prev = creatcircle(n);
    ListNode* pcur = prev->next;
    int count = 1;
    while (prev != pcur)
    {
        if (count == m)
        {
            prev->next = pcur->next;
            free(pcur);
            pcur = prev->next;
            count = 1;
        }
        else
        {
            prev = pcur;
            pcur = pcur->next;
            count++;
        }

    }
    return pcur->val;
    // write code here
}
将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
合并两个升序链表
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
    typedef struct ListNode ListNode;
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    ListNode* newList = (ListNode*)malloc(sizeof(ListNode));
    newList->next = NULL;
    ListNode* newhead = newList;
    ListNode* newtail = newList;
    ListNode* pcur1 = list1;
    ListNode* pcur2 = list2;
    while (pcur1 && pcur2)
    {
        if (pcur1->val > pcur2->val)
        {
            newtail = newtail->next;
            newtail = pcur2;
            pcur2 = pcur2->next;
        }
        else
        {
            newtail = newtail->next;
            newtail = pcur1;
            pcur1 = pcur1->next;
        }
    }
    if (pcur1)
    {
        newtail->next = pcur1;
    }
    if (pcur2)
    {
        newtail->next = pcur2;
    }
    ListNode* tem = newhead->next;
    free(newhead);
    newhead = NULL;
    return tem;

}

#endif