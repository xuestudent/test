#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


typedef int SqDataTtype ;

typedef struct list
{
	SqDataTtype *a;//����
	int sz;//������
	int capacity;//���ڵĴ洢��

}SqList;
//��ʼ��
void SqList_init(SqList *L1);
//ͷ��
void SqList_PushForward(SqList* L1 , SqDataTtype X );
//β��
void SqList_PushBack(SqList* L1 , SqDataTtype X );
//ͷɾ
void SqList_PopForward(SqList* L1  );
//βɾ
void SqList_PopBack(SqList* L1 );
//����ڴ�
void Memory_check(SqList* L1);
//��ӡ�б�
void print_list(SqList* L1);
