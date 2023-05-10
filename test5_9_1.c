#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//直接从库文件找
#include"test.h"//先从本地找，找不到再到库文件找
//宏定义的副作用
//这样就会用副作用出现不可预测的后果
//#define MAX(a,b) ((a)>(b)?(a):(b))
//#define MALLOC(num,type)    (type*)malloc(num*sizeof(type))
//int main()
//{
//	int x = 5;
//	int y = 8;
//	int z = MAX(x++, y++);
//	printf("%d %d %d ", x, y, z);
//	MALLOC(10,int);
//}
//宏定义的撤销
//#define M 100
//int main()
//{
//	int a = M;
//	printf("%d\n", M);
//#undef M
//	printf("%d\n", a);//撤销之后不能打印
//
//	return 0;
//}
#define TEST
#define HEHE
int main()
{

//如果TEST定义执行下面编译///////////////////////////////////
#ifdef TEST
	printf("test1\n");
#endif 


#if defined(TEST)
	printf("test2\n");
#endif

//如果HEHE不定义下面参与编译	////////////////////////
#ifndef HEHE
	printf("hehe1\n");
#endif

#if ! defined(HEHE)
	printf("hehe2\n");


#endif



	return 0;
}