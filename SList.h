#pragma once
#include<stdio.h>
#include <stdlib.h> 
typedef int  Data_Type;
typedef struct SList
{
	Data_Type data;//����
	struct SList* next;//��һ�����ݵ�ָ��
}SLNode;
//ͷ��
void SList_PushForward(SLNode** phead, Data_Type X);
//β��
void SList_PushBack(SLNode** phead, Data_Type X);
//ͷɾ
void SList_PopForward(SLNode** phead);
//βɾ
void SList_PopBack(SLNode** phead);
//��ӡ�б�
void print_list(SLNode* phead );
//�����ڵ�
SLNode* CarteNewnote(Data_Type X);
//����
SLNode* SListFind(SLNode* phead, Data_Type X);
//ָ��λ�����
void SListInsert(SLNode** phead, SLNode* pos, Data_Type X);
//ָ��λ��ɾ��
void SListErase(SLNode** phead, SLNode* pos);