#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
#include"Contact.h"
#if 0
int main()
{
	SL s1;
	//初始化顺序表
	SLinit(&s1);

	//尾插
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	SLPushBack(&s1, 5);
	Print(s1);

	//头插
	SLPushFront(&s1, 6);
	SLPushFront(&s1, 7);
	SLPushFront(&s1, 8);
	SLPushFront(&s1, 9);
	SLPushFront(&s1, 10);
	Print(s1);

	//尾删
	SLPopBack(&s1);
	Print(s1);

	//头删
	SLPopFront(&s1);
	Print(s1);

	//在顺序表中指定位置插入数据
	SLInsert(&s1, s1.size, 11);
	Print(s1);
	SLInsert(&s1, 0, 12);
	Print(s1);
	SLInsert(&s1, 2, 13);
	Print(s1);

	//在顺序表中删除指定位置的数据
	SLErase(&s1, 0);
	Print(s1);
	SLErase(&s1, s1.size-1);
	Print(s1);
	SLErase(&s1, 2);
	Print(s1);

	//顺序表的查找
	int n=SLFind(&s1, 3);
	if (n >= 0)
	{
		printf("找到了，下标是%d ", n);
	}
	else
	{
		printf("没找到");
	}
	return 0;
}

void ContactTest()
{
	Contact con;
	ContactInit(&con);
	ContactAdd(&con);
	ContactAdd(&con);
	ContactAdd(&con);
	ContactShow(&con);
	ContactDel(&con);
	ContactShow(&con);
	ContactModify(&con);
	ContactShow(&con);
	ContactFind(&con);
	ContactDestroy(&con);

}
int main()
{
	ContactTest();
	return 0;
}
#endif
void LoadContact(Contact* con)
{
	FILE* ps = fopen("contact.txt", "rb");
	if (ps == NULL)
	{
		perror("fopen");
		return;
	}
	peoInfo info;
	while (fread(&info, sizeof(peoInfo), 1, ps))
	{
		SLPushBack(con, info);
	}

}
void menu()
{

	printf("*****通讯录********\n");
	printf("**1.增加联系人   2.删除联系人**************\n");
	printf("**3.修改联系人   4.查找联系人**************\n");
	printf("**5.展示联系人   0.exit      **************\n");
}
int main()
{

	int n=0;
	Contact con;
	ContactInit(&con);
	LoadContact(&con);
	do
	{
		menu();
		printf("请选择你的操作\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			ContactAdd(&con);
			break;
		case 2:
			ContactDel(&con);
			break;
		case 3:
			ContactModify(&con);
			break;
		case 4:
			ContactFind(&con);
			break;
		case 5:
			ContactShow(&con);
			break;
		case 0:
			printf("退出通讯录\n");
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}

	} while (n);
	SaveContact(&con);
	ContactDestroy(&con);
	return 0;
}