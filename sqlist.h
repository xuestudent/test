#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


typedef int SqDataTtype ;

typedef struct list
{
	SqDataTtype *a;//数据
	int sz;//总容量
	int capacity;//现在的存储量

}SqList;
//初始化
void SqList_init(SqList *L1);
//头插
void SqList_PushForward(SqList* L1 , SqDataTtype X );
//尾插
void SqList_PushBack(SqList* L1 , SqDataTtype X );
//头删
void SqList_PopForward(SqList* L1  );
//尾删
void SqList_PopBack(SqList* L1 );
//检查内存
void Memory_check(SqList* L1);
//打印列表
void print_list(SqList* L1);
