#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"
#include"SeqList.h"
void ContactInit(Contact* con)
{
	SLinit(con);
}

void ContactDestroy(Contact* con)
{
	SLDestroy(con);

}

void ContactAdd(Contact* con)
{
	peoInfo info;
	printf("请输入要添加联系人的姓名\n");
	scanf("%s", info.name);
	printf("请输入要添加联系人的性别\n");
	scanf("%s", info.gender);
	printf("请输入要添加联系人的年龄\n");
	scanf("%d", &(info.age));
	printf("请输入要添加联系人的电话\n");
	scanf("%s", info.tel);
	printf("请输入要添加联系人的地址\n");
	scanf("%s", info.addr);
	SLPushBack(con, info);

}

int Findbyname(Contact* con, char name[])
{
	for (int i = 0; i < con->size; i++)
	{
		if (0 == strcmp(con->arr[i].name, name))
			return i;
	}
	return -1;
}

void ContactDel(Contact* con)
{
	char name[NAME_MAX];
	printf("请输入要删除联系人的姓名");
		scanf("%s", name);
	int n = Findbyname(con, name);
	if (n < 0)
	{
		printf("要删除的联系人不纯在");
		return;
	}
	SLErase(con, n);
	printf("删除成功");
}

void ContactShow(Contact* con)
{
	printf("%s %s %s %s %s\n", "姓名", "性别", "年龄", "电话", "地址");
	for (int i = 0; i < con->size; i++)
	{
		printf("%s %s %d %s %s\n", con->arr[i].name,con->arr[i].gender,con->arr[i].age,con->arr[i].tel,con->arr[i].addr);
	}
	printf("\n");
}

void ContactModify(Contact* con)
{
	char name[NAME_MAX];
	printf("请输入要修改的联系人姓名\n");
	scanf("%s", name);
	int n=Findbyname(con, name);
	if (n < 0)
	{
		printf("要修改的联系人不存在");
		return;
	}
	printf("请输入新的联系人姓名\n");
	scanf("%s", con->arr[n].name);
	printf("请输入新的联系人性别\n");
	scanf("%s", con->arr[n].gender);
	printf("请输入新的联系人年龄\n");
	scanf("%d", &con->arr[n].age);
	printf("请输入新的联系人电话\n");
	scanf("%s", con->arr[n].tel);
	printf("请输入新的联系人地址\n");
	scanf("%s", con->arr[n].addr);
	printf("修改成功\n");

}
void ContactFind(Contact* con)
{
	char name[NAME_MAX];
	printf("请输入要查找联系人的姓名\n");
	scanf("%s", name);
	int n = Findbyname(con, name);
	if (n < 0)
	{
		printf("要查找的联系人不存在\n");
		return;
	}
	printf("%s %s %s %s %s\n", "姓名", "性别", "年龄", "电话", "地址");
	
	printf("%s %s %d %s %s\n", con->arr[n].name, con->arr[n].gender, con->arr[n].age, con->arr[n].tel, con->arr[n].addr);

	printf("\n");

}

void SaveContact(Contact* con)
{
	FILE* ps = fopen("contact.txt", "wb");
	if (ps == NULL)
	{
		perror("fopen");
		return;
	}
	for (int i = 0; i < con->size; i++)
	{
		fwrite(con->arr + i, sizeof(peoInfo), 1, ps);
	}
	printf("保存联系人成功！\n");

}



