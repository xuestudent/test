#define _CRT_SECURE_NO_WARNINGS 1
#include"sqlist.h"
int main()
{
	SqList L1;
	SqList_init(&L1);
	SqList_PushForward(&L1, 1);
	SqList_PushForward(&L1,1);
	SqList_PushForward(&L1, 1);
	SqList_PushForward(&L1, 1);
	SqList_PushForward(&L1, 1);
	SqList_PushForward(&L1, 1);
	SqList_PushBack(&L1, 2);
	SqList_PushBack(&L1, 2);
	SqList_PushBack(&L1, 2);
	SqList_PushBack(&L1, 2);
	SqList_PushBack(&L1, 2);
	SqList_PushBack(&L1, 2);
	SqList_PopForward(&L1);
	SqList_PopForward(&L1);
	SqList_PopForward(&L1);
	SqList_PopBack(&L1);
	SqList_PopBack(&L1);
	printf("%d", L1.capacity);
	/*print_list(&L1);*/
	return 0;
}