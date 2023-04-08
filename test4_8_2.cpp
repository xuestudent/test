#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>


void print(int arr[], int se)
{
	int n = 0;
	for (n = 0; n < se; n++)
	{
		printf("%d ", arr[n]);
	}
	printf("\n");
}

int cmp_int(const void* e1, const void* e2)//void*无类型指针
{
	return*(int*)e2 - *(int*)e1;//改变e1和e2，可改为降序
}

void test1()//整形排序
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int size = sizeof arr / sizeof arr[0];
	qsort(arr, size, sizeof(arr[0]), cmp_int);
	print(arr, size);
}


void bobble_sort(void* base,int sz,int width,int (*cmp)(const void*e1 ,const void*e2))//模拟qsort
{
	 
}
int main()
{
	test1();

	bobble_sort();


	return 0;
}