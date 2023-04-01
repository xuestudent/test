#include<stdio.h>//指针与结构体
//int main()//指针加指针无意义
//{
//
//	int arr[10] = { 0 };
//	//printf("%p\n", arr);//数组名是首元素地址
//	//printf("%p\n", &arr[0]);
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%p<==>%p\n", &arr[i], p + i);
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量，一级指针
//	//ppa就是二级指针变量
//	int** ppa = &pa;//pa是变量，&pa取出pa在内存中的起始地址
//	int* * * pppa = &ppa;//三级指针
//	return 0;
//}
int main()
{

	int  arr[10];//int类型的数组
	char ch[5];//char类型的数组
	int* parr[5];//整形指针的数组
	char* pch[5];//字符指针的数组
	return 0;

}