#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
///// ///// //// /////动态内存常见错误/////////////////////////////////
//1.
void test()
{
	int* p = (int*)malloc(100);
	*p = 20;//需要判断是否是NULL
	free(p);
}
void test2()
{
	int i = 0;
	int* p = (int*)malloc(sizeof(int));
	if (p==NULL)
	{
		perror("test2");
	}
	for (i = 0; i <= 10; i++)
	{
		*(p + i) = i;//当i为10的时候会越界访问
	}
	free(p);
}
void test3()
{
	int i = 0;
	int* p = &i;
	free(p);//不能对非动态开辟内存进行释放

}
void test4()
{
	int* p = (int*)malloc(100);
	p++;
	free(p);//原始地址变化释放就会有错
}
void test5()
{
	int* p = (int*)malloc(100);
	//使用
	free(p);
	/// //////
	free(p);//对一块内存多次释放
}
void test6_1()
{
	int* p = (int*)malloc(sizeof(int));
	if (p == NULL)
	{
		perror("test2");
	}
}
void test6()
{
	test6_1();//内存泄露
}
int main()
{
	test();
	test2();
	test3();
	test4();
	test5();
	test6();
	return 0;
}