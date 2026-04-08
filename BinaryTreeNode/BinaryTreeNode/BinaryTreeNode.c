#define _CRT_SECURE_NO_WARNINGS 1
#include"BinaryTreeNode.h"
#include"Queue.h"
BTNode* BuyNode(int x)
{
	BTNode* Node = (BTNode*)malloc(sizeof(BTNode));
	if (Node == NULL)
	{
		perror("malloc fail");
		return NULL;
	}
	Node->data = x;
	Node->left = NULL;
	Node->right = NULL;
	return Node;
}
BTNode* CreateBTree()
{
	BTNode* Node1 = BuyNode(1);
	BTNode* Node2 = BuyNode(2);
	BTNode* Node3 = BuyNode(3);
	BTNode* Node4 = BuyNode(4);
	BTNode* Node5 = BuyNode(5);
	BTNode* Node6 = BuyNode(6);
	BTNode* Node7 = BuyNode(7);
	BTNode* Node8 = BuyNode(8);
	Node1->left = Node2;
	Node1->right = Node3;
	Node2->left = Node4;
	Node2->right = Node5;
	Node3->left = Node6;
	Node3->right = Node7;
	//Node4->left = Node8;
	Node5->left = Node8;
	return Node1;
}

void BinaryTreePrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	printf("%d ",root->data);
	 BinaryTreePrevOrder(root->left);
	 BinaryTreePrevOrder(root->right);
}

void BinaryTreeInOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	BinaryTreeInOrder(root->left);
	printf("%d ", root->data);
	BinaryTreeInOrder(root->right);
}
void BinaryTreePostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	BinaryTreePostOrder(root->left);
	BinaryTreePostOrder(root->right);
	printf("%d ", root->data);
}

int BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	return BinaryTreeSize(root->left) + BinaryTreeSize(root->right) + 1;
}

int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
		return 1;
	 return BinaryTreeLeafSize(root->left)+ BinaryTreeLeafSize(root->right);	 
}
int BTHeigh(BTNode* root)
{
	if (root == NULL)
		return 0;
	int left = BTHeigh(root->left);
	int right = BTHeigh(root->right);
	return left > right ? left + 1 : right + 1;
}
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL)
		return 0;
	if (k-1== 0)
		return 1;
	return BinaryTreeLevelKSize(root->left, k - 1) + BinaryTreeLevelKSize(root->right, k - 1);
}

BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi)
{
	if (a[*pi] =='#')
	{
		(*pi)++;
		return NULL;
	}
	BTNode* root = (BTNode*)malloc(sizeof(BTNode));
	root->data = a[(*pi)++];
		root->left = BinaryTreeCreate(a, n, pi);
	root->right= BinaryTreeCreate(a, n, pi);
	return root;
}

BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
		return NULL;
	if (root->data == x)
		return root;
	BTNode* LeftNode = BinaryTreeFind(root->left, x);
	if (LeftNode)
		return LeftNode;
	BTNode* RightNode = BinaryTreeFind(root->right, x);
	if (RightNode)
		return RightNode;
	return NULL;

}
	void BinaryTreeLevelOrder(BTNode* root)
{
	 Queue queue;
	QueueInit(&queue);
	if(root)
	QueuePush(&queue, root);
	while (!QueueEmpty(&queue))
	{
		QDataType front = QueueFront(&queue);
		printf("%d ",front->data);
		QueuePop(&queue);
		if (front->left)
			QueuePush(&queue, front->left);
		if (front->right)
			QueuePush(&queue, front->right);
	}
	QueueDestroy(&queue);
	printf("\n");
}

	bool BinaryTreeComplete(BTNode* root)
	{
		if (root == NULL)
			return 1;
		Queue q;
		QueueInit(&q);
		QueuePush(&q, root);

		while (!QueueEmpty(&q))
		{
			QDataType front = QueueFront(&q);
			QueuePop(&q);
			if (front == NULL)
				break;	
			QueuePush(&q,front->left);
			QueuePush(&q, front->right);
		}
		while (!QueueEmpty(&q))
		{
			QDataType front = QueueFront(&q);
			QueuePop(&q);
			if (front != NULL)
				return false;
		}
		return true;

	}
	
