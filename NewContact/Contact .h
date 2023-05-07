#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>




#define MAX_NAME 1000
#define MAX_SEX 200

#define MAX_TELE 11
#define MAX_ADDR 200


#define MAX 200



#define DEFAULT_SZ 3//初始量
#define INC_SZ 2//增加的量



typedef struct peoinfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];

}peoinfo;
//////静态////////////////
//typedef struct contact
//{
//	peoinfo data[MAX];
//	int sz;
//}contact;
////////动态////////////////
typedef struct contact
{
	peoinfo *data;//指向动态申请的空间用来存放信息
	int sz;
	int capacity;//当前通讯录的最大容量
}contact;



//初始化通讯录
void init_contact(contact* cp);

//添加联系人
void add_contact(contact* cp);
//打印
void contact_print(const contact* cp);
//删除联系人
void del_contact(contact* cp);

int Find_by_name(contact* cp, char name);//通过名字找到

void destorycontact(contact*cp);//销毁通讯录

void search_contact(contact* cp);//查找

void modify_contact(contact* cp);//修改

void sort_contact(contact* cp);//排序


void save_contact(contact* cp);//保存通讯录

void load_contact(contact* cp);//加载通讯录


void checkcapacity(contact* cp);//考虑增容