#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>



/// ///////////////////动态内存
//int main()
//{
//	//开辟动态内存
//	int*p=(int*)malloc(10*sizeof(int));
//	//判断内存是否用完
//	if (p == NULL)
//	{
//		perror("main");
//	}
//	//使用内存
//	int i = 0;
//	for (i=0;i<10;i++)
//	{
//		*(p + i) = i;
//		
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", p[i]);
//	}
//	//回收内存
//	free(p);
//	p = NULL;
//	return 0; 
//}

//////////////////////calloc函数///////////////////////////////
//int main()//用calloc的初始化值是0，malloc却是随机值，两者参数不一样
//{
//	//开辟动态内存
//	int*p=(int*)calloc(10,sizeof(int));
//	//判断内存是否用完
//	if (p == NULL)
//	{
//		perror("main");
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//    {
//	printf("%d  ", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//////////////////////////////////////realloc函数/////////////////////////////////
int main()//用calloc的初始化值是0，malloc却是随机值，两者参数不一样
{
	//开辟动态内存
	//int* ptr = (int*)realloc(NULL, 10 * sizeof(int))和calloc实现的是一样的
	int* p = (int*)calloc(10, sizeof(int));
	//判断内存是否用完
	if (p == NULL)
	{
		perror("main");
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 5;
	}

	//不够再增加
	int*ptr =(int*)realloc(p,20*sizeof(int));//有可能后面的空间够用有可能不够用，
	//有可能找不到合适的空间来调整就返回NULL
	if (ptr!=NULL)//判断是否是空指针
	{
		p = ptr;
	}
	free(p);
	p = NULL;
	return 0;
}