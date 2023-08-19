#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"
//��ʼ��
//void SList_init(SLNode* L1)
//{
//	SLNode* phead = NULL;//ͷָ��
//	//L1->data = 0;
//	//L1->next = NULL;
//}
//ͷ��
void SList_PushForward(SLNode** pphead, Data_Type X)
{
	SLNode* new= CarteNewnote(X);//����һ���ڵ�

	new->next = *pphead;
	*pphead = new;

}

//β��
	void SList_PushBack(SLNode** pphead, Data_Type X)
	{
		SLNode* new = CarteNewnote(X);
		if (*pphead == NULL)//�ж��Ƿ��нڵ�
		{
			*pphead = new;
		}
		else
		{
			SLNode* cur = *pphead;
			while (cur->next != NULL)//�����һ���ڵ�
			{
				cur = cur->next;
			}
			cur->next = new;//�ҵ���ֵ
		}
	}



//ͷɾ
void SList_PopForward(SLNode** pphead)
{
	if (*pphead == NULL)//�ж��Ƿ��нڵ�
	{
		printf("û�нڵ�");
	}
	else
	{
			SLNode* next = (*pphead)->next;
			free(*pphead);
			*pphead = next;
	}
}
//βɾ
void SList_PopBack(SLNode** pphead)
{
	if (*pphead == NULL)//�ж��Ƿ��нڵ�
	{
		printf("û�нڵ�");
	}
	else if ((*pphead)->next==NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLNode* cur = NULL;
		SLNode* tail = *pphead;
		while (tail->next != NULL)
		{
			cur = tail;
			tail = tail->next;
	    }
		free(tail);
		cur->next = NULL;
	}

}
//��ӡ�б�
void print_list(SLNode* phead )
{
	SLNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}

}
SLNode* CarteNewnote(Data_Type X)
{
	SLNode* newnote = (SLNode*)malloc(sizeof(SLNode));
	if (newnote==NULL)
	{
		printf("�޷���̬�����ڴ棡\n");
		exit(-1);
	}
	else
	{
		newnote->data = X;
		newnote->next = NULL;
		return newnote;
	}
}
SLNode* SListFind(SLNode* phead, Data_Type X)
{
	SLNode* cur = phead;
	while (cur)
	{
		if (cur->data == X)
		{
			return cur;
		}
		cur = cur->next;
	}
	return 0;
}
void SListInsert(SLNode** phead, SLNode* pos, Data_Type X)
{
	if (pos == *phead)
	{
		SList_PushForward(phead, X);
	}
	else
	{
	SLNode* new = CarteNewnote(X);
	SLNode* cur = *phead;
	while (cur->next != pos)
	{
		cur = cur->next;
	}
	new->next = pos;
	cur->next = new;
	}

}
void SListErase(SLNode** phead, SLNode* pos)
{
	if (pos == *phead)
	{
		SList_PopForward(phead);
	}
	else
	{
	SLNode* cur = *phead;
	while (cur->next != pos)
	{
		cur = cur->next;
	}
	cur->next=pos->next;
	free(pos);
	}

}