#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"
void test1()
{	
	SLNode* phead = NULL;
	SList_PushForward(&phead, 3);
	SList_PushForward(&phead, 2);
	SList_PushForward(&phead, 1);
	/*SList_PushForward(&phead,1);*/
	/*SList_PopForward(&phead);*/
	/*SList_PushForward(&phead, 1);
	SList_PushForward(&phead, 2);
	SList_PushForward(&phead, 3);*/
	SLNode* pos=SListFind(phead,3);
	if (pos)
	{
	SListInsert(&phead,pos,6 );
	}


	SLNode* ret = SListFind(phead, 2);
	if (ret)
	{
		SListErase(&phead, ret);
	}
	print_list(phead);
}
int main()
{

	test1();
	return 0;
}