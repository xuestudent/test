#define _CRT_SECURE_NO_WARNINGS 1

#include"Contact .h"
//////////////静态版本////////////////////
//void init_contact(contact*cp)//初始化函数
//{
//	cp->sz = 0;
//	//contact con= {0};
//	memset(cp->data, 0, sizeof(cp->data));
//}
////////////////动态版本//////////////////
void init_contact(contact* cp)//初始化函数
{
	cp->data = (peoinfo*)malloc(DEFAULT_SZ*sizeof(peoinfo));//初始化数据开辟空间返回首元素地址给data
	if (cp->data == NULL)
	{
		perror("init_contact");
		return;
	}
	cp->sz = 0;
	cp->capacity = DEFAULT_SZ;
}
void destorycontact(contact* pc)//销毁通讯录
{
	free(pc->data);
	pc->sz = 0;
	pc->capacity = 0;


}







/////////////静态增加//////////////
//void add_contact(contact* cp)//增加联系人
//{
//	if (cp->sz == sizeof(cp->data))
//	{
//		printf("联系人已满");
//		return;
//	}
//	printf("请输入名字->");
//	scanf("%s",cp->data[cp->sz].name);
//	printf("请输入年龄->");
//	scanf("%d",&cp->data[cp->sz].age);
//	printf("请输入性别->");
//	scanf("%s", cp->data[cp->sz].sex);
//	printf("请输入电话->");
//	scanf("%s", cp->data[cp->sz].tele);
//	printf("请输入地址->");
//	scanf("%s", cp->data[cp->sz].addr);
//	cp->sz++;
//	printf("添加成功\n");
//	
//}
///////动态///////////////////////////
void add_contact(contact* cp)//增加联系人
{
	//考虑增容
	if (cp->sz == cp->capacity)
	{
		peoinfo*ptr=(peoinfo*)realloc(cp->data,(cp->capacity+INC_SZ)*sizeof(peoinfo));
		if (ptr != NULL)//判断增容是否失败
		{
			cp->data = ptr;
			cp->capacity += INC_SZ;
			printf("增容成功");
		}
		else
		{
			perror("add_contact");
			printf("增容失败");
			return;
		}
	}
	printf("请输入名字->");
	scanf("%s", cp->data[cp->sz].name);
	printf("请输入年龄->");
	scanf("%d", &cp->data[cp->sz].age);
	printf("请输入性别->");
	scanf("%s", cp->data[cp->sz].sex);
	printf("请输入电话->");
	scanf("%s", cp->data[cp->sz].tele);
	printf("请输入地址->");
	scanf("%s", cp->data[cp->sz].addr);
	cp->sz++;
	printf("添加成功\n");

}
void contact_print(const contact* cp)//打印通讯录
{
	printf("%-20s\t%-10s\t%-10s\t%-10s\t%-20s\n","姓名","年龄","性别","电话","地址");
	int i = 0;
	for (i=0;i<cp->sz;i++)
	{
		printf("%-20s\t%-10d\t%-10s\t%-10s\t%-20s\n",cp->data[i].name,
			cp->data[i].age,
			cp->data[i].sex,
			cp->data[i].tele,
			cp->data[i].addr
		);
	}




}

int Find_by_name(contact* cp, char name[])//通过名字找到
{
	int i = 0;
	for (i = 0; i < cp->sz; i++)
	{
		if (strcmp(cp->data[i].name, name)==0)//判断是否相等////////////////////
		{
			return i;
		}
	}
	return -1;
}






//删除联系人
void del_contact(contact* cp)
{
	char name[MAX] = { 0 };
	if (cp->sz == 0)
	{
		printf("通讯录空");
		return;
	}
	
	printf("请输入名字->");
	scanf("%s",name);
	int ret = Find_by_name(cp, name);
	if (ret == -1)
	{
		printf("没有此联系人");
		return;
	}
	int i = 0;
	for (i = ret; i < cp->sz; i++)
	{
		cp->data[i] = cp->data[i + 1];
	}
	cp->sz--;
	printf("删除成功\n");
}

//查找
void search_contact(contact* cp)
{
	char name[MAX] = { 0 };
	printf("请输入名字->");
	scanf("%s", name);
	int i = Find_by_name(cp, name);
	if (i == -1)
	{
		printf("没有此联系人");
		return;
	}
	else
	{
		printf("%-20s\t%-10s\t%-10s\t%-10s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-10d\t%-10s\t%-10s\t%-20s\n", cp->data[i].name,
			cp->data[i].age,
			cp->data[i].sex,
			cp->data[i].tele,
			cp->data[i].addr);
	}

}

enum b
{
	a,
	NAME,
	SEX,
	AGE,
	TELE,
	ADDR
};


void modifymenu()
{
	printf("*************************\n");
	printf("*******  1.名字   *******\n");
	printf("*******  2.性别   *******\n");
	printf("*******  3.年龄   *******\n");
	printf("*******  4.电话   *******\n");
	printf("*******  5.地址   *******\n");
	printf("*************************\n");
}
void modify_contact(contact* cp)//修改
{
	char name[MAX] = { 0 };
	printf("请输入名字->");
	scanf("%s", name);
	int i = Find_by_name(cp, name);
	if (i == -1)
	{
		printf("没有此联系人");
		return;
	}
	else
	{
		modifymenu();
		int input = 0;
		printf("请选择修改方式—>");
		scanf("%d", &input);
		switch (input)
		{
		case NAME:
			printf("请输入名字->");
			scanf("%s", cp->data[i].name);
			break;
		case SEX:
			printf("请输入性别->");
			scanf("%s", cp->data[i].sex);
			break;
		case AGE:
			printf("请输入年龄->");
			scanf("%d", &cp->data[i].age);
			break;
		case TELE:
			printf("请输入电话->");
			scanf("%s", cp->data[i].tele);
			break;
		case ADDR:
			printf("请输入地址->");
			scanf("%s", cp->data[i].addr);
			break;
		default:
			printf("选择错误请重新选择\n");
		}
		printf("修改成功\n");
	}
}
int compare(const void* a, const void* b)
	{
		return (*(int*)a - *(int*)b);
	}
void sort_contact(contact* cp)//排序
{
	if (cp->sz == 0)
	{
		printf("通讯录中没有联系人\n");
	}
	else
	{
		for (int i = 0; i < cp->sz - 1; i++)//冒泡排序
		{
			for (int j = 0; j < cp->sz - 1 - i; j++)
			{
				if ((strcmp(cp->data[j].name, cp->data[j + 1].name)) > 0)//j>j+1
				{
					peoinfo temp = cp->data[j];
					cp->data[j] = cp->data[j + 1];
					cp->data[j + 1] = temp;
				}
				5
			}
		}
		printf("排序成功！\n");
	}
	
	

}
