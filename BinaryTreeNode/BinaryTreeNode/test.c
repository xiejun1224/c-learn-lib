#define _CRT_SECURE_NO_WARNINGS 1
#include"BinaryTreeNode.h"


void test1()
{
	BTNode* root = CreateBTree();
	BinaryTreePrevOrder(root);
	printf("\n");
	BinaryTreeInOrder(root);
	printf("\n");
	BinaryTreePostOrder(root);
	printf("\n");
	printf("%d\n", BinaryTreeSize(root));
	printf("%d\n", BinaryTreeLeafSize(root));
	printf("%d\n", BinaryTreeLevelKSize(root, 4));
	BinaryTreeLevelOrder(root);

	if (BinaryTreeComplete(root))
		printf("%d ", 1);
	else
		printf("%d ", 0);

}
void test2()
{
	char a[100] = "ABD##E#H##CF##G##";
	int i = 0;
	BTNode*root=BinaryTreeCreate(a, 100, &i);
	BinaryTreePrevOrder(root);
}

int main()
{
	test1();
	//test2();
	return 0;
}