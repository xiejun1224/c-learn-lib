#pragma once
#define NAME_MAX 20
#define GENDER_MAX 10
#define TEL_MAX 20
#define ADDR_MAX 100
struct SeqList;
typedef struct personInfo
{
	char name[NAME_MAX];
	char gender[GENDER_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];

}peoInfo;

typedef struct SeqList Contact;

//通讯录的初始化
void ContactInit(Contact* con);
//通讯录的销毁
void ContactDestroy(Contact* con);
//通讯录的添加
void ContactAdd(Contact* con);
//删除联系人
void ContactDel(Contact* con);

//展示联系人
void ContactShow(Contact* con);
//修改联系人
void ContactModify(Contact* con);
//查找联系人
void ContactFind(Contact* con);
//保存联系人
void SaveContact(Contact* con);
//读取本地联系人




