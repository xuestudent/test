#pragma once
#include<stdio.h>
#include <stdlib.h> 
typedef int  Data_Type;
typedef struct SList
{
	Data_Type data;//数据
	struct SList* next;//下一个数据的指针
}SLNode;
//头插
void SList_PushForward(SLNode** phead, Data_Type X);
//尾插
void SList_PushBack(SLNode** phead, Data_Type X);
//头删
void SList_PopForward(SLNode** phead);
//尾删
void SList_PopBack(SLNode** phead);
//打印列表
void print_list(SLNode* phead );
//创建节点
SLNode* CarteNewnote(Data_Type X);
//查找
SLNode* SListFind(SLNode* phead, Data_Type X);
//指定位置添加
void SListInsert(SLNode** phead, SLNode* pos, Data_Type X);
//指定位置删除
void SListErase(SLNode** phead, SLNode* pos);