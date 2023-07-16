#define _CRT_SECURE_NO_WARNINGS 1
#include"sqlist.h"

int count = 1;

	void SqList_init(SqList* L1)//初始化
	{
		L1->a=(SqDataTtype*)malloc(sizeof(SqDataTtype));//开辟初始空间
		L1->capacity = 4;
		L1->sz = 0;
	}
	void SqList_PushForward(SqList* L1, SqDataTtype X)//头插
	{
		Memory_check(L1);
		int end = L1->sz - 1;
		while (end>=0)
		{
			L1->a[end+1] = L1->a[end];
			--end;
		}
		
		L1->a[0] = X;
		L1->sz++;
	}
	void SqList_PushBack(SqList* L1, SqDataTtype X)//尾插
	{
		Memory_check(L1);
		L1->a[L1->sz] = X;
		L1->sz++;
	}
	void SqList_PopForward(SqList* L1)//头删
	{
		int temp = L1->sz;
		int i;
		for (i=0;i<temp-1;i++)
		{
			L1->a[ i ] = L1->a[ i + 1 ];

		}
		L1->sz--;
		
	}
	void SqList_PopBack(SqList* L1 )//尾删
	{
		/*int temp = L1->sz;
		L1->a[temp - 1] = NULL;*/
		L1->sz--;
	}

	void Memory_check(SqList * L1)
	{
		
		if (L1->capacity == L1->sz)
		{
			SqDataTtype* temp=NULL;
			temp=(SqDataTtype*)realloc(temp, L1->capacity*2*sizeof(SqDataTtype));
			if (L1->a == NULL)
			{
				printf("realloc is file");
				exit(-1);
			}
			else
			{
				L1->a = temp;
				L1->capacity *= 2;
			}
			
		}

	}

	void print_list(SqList* L1)
	{
		int i;
		for (i=0;i<L1->sz;i++)
		{
			printf("%d",L1->a[i]);
		}
	}