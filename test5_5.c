#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h> 
struct a
{
	int n;
	int arr[0];//柔性数组
};

struct b
{
	int n;
	int*arr;//结构体中的指针
};


//柔性数组///////////////////////////////////////////////////////////////////
//int main()
//{
//
//	struct a c;
//	printf("%d ", sizeof(c));//柔性数组计算结构体大小是不算
//	struct a* cp = (struct a*)malloc(sizeof(c) + 10 * sizeof(int));
//	cp->n = 10;
//	int i = 0;
//	for (i = 0; i < 100; i++)//使用
//	{
//		cp->arr[i] = i;
//	}
//
//	free(cp);//释放
//	cp = NULL;
//
//
//	return 0;
//}
int main()
{
	struct b d;
	struct b*ptr=(struct b*)malloc(sizeof(struct b));
	ptr->n = 10;
	ptr->arr = (struct b*)malloc(10 * sizeof(int));
	if (ptr->arr==NULL)
	{
		return 1;
	}
	int i = 0;
	for (i=0;i<10;i++)
	{
		ptr->arr[i] = i;
	} 
	free(ptr->arr);
	ptr->arr = NULL;
	
	free(ptr);
	ptr = NULL;
/*申请两块内存空间就需要释放两次。
	用柔性数组可以避免忘记释放，
	还有利于提高空间利用率避免产生内存碎片*/

	return 0;
}