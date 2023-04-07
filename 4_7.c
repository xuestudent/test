#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



void test(char* str)
{

}
int add(int x, int y)
{
	return x + y;
}
int main()
{
	const char* pc = "helloworld";
	printf("%c\n", *pc);
	printf("%s\n", pc);
	int a[5] = { 1,2,3,4,5 };
	int b[] = { 2,3,4,5,6 };
	int c[] = { 3,4,5,6,7 };
	int* arr[3] = { a,b,c };//放的是首元素地址
	int i = 0;
	for (i=0;i<3;i++)
	{
		int j = 0;
		for (j=0;j<5;j++)
		{
			//printf("%d",*(arr[i] + j));
			printf("%d", arr[i][j]);//模拟出二维数组  和上面相等
		}
		printf("\n");
	}

	printf("%p\n", &add);
	printf("%p\n", add);
	int (*pf)(int, int) = &add;

	void (*pt)(char*) = &test;
	//int ret = (*pf)(3, 5);
	int ret = pf(3, 5);
	printf("%d\n", ret);
	(*(void(*)())0)();
	//1.void(*)()-函数指针类型
	//2.(void(*)())0-对0进行强制类型转换，被解释为一个函数地址
	//3.*(void(*)())0-对0地址进行了解引用操作
	//4.(*(void(*)())0)()-调用0地址处的函数
	void(*signal(int, void(*)(int)))(int);
	//1.signal和()先结合说明

	return 0;
}