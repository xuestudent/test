#include<stdio.h>
//int main()
//{
//	////野指针  这里的p就是野指针
//	//int* p;//未初始化的指针是随机值 局部变量默认位为随机值
//	//*p = 20;//非法访问内存
//	//2.越界访问
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)//会循环11次就越界     错误代码
//	{
//		*p = i;
//		p++;
//	}
//
//
//	return 0;
//}


//test()
//{
//	int a = 10;//被销毁了，被释放
//	return &a;
//}
//int main()
//{
//
//	int *p=test();
//	*p = 20;
//	return 0;
//}
//int main()
//{
//	//指针初始化用null空指针
//	//c语言是不会保证数据越界的
//	int* P = NULL;
//	return 0;
//}
//指针运算
//1.指针+整数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//
//}
//2.指针减指针等于两个指针之间元素的个数    必须类型相同
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//}
int my_strlen(char* str)
{
	char* start = str;
	while (*str!='\0')
	{
		str++;
	}
	return str - start;
}
int main()
{
	int len = my_strlen("abc");//传的是字符串首地址
	printf("%d\n", len);


	return 0;
}