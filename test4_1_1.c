#include<stdio.h>
//int main()
//{
//
//	int a = 10;//a占四个字节的空间
//	int *pa=&a;//取四个字节的第一个字节的地址
//	*pa = 20;//就可以通过指针地址访问a
//	printf("%d\n",sizeof a);//指针在32位是4个字节  在64位是8个字节
//	return 0;
//}
//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//	printf("%d\n", sizeof pa);
//	printf("%d\n", sizeof pc);
//	printf("%d\n", sizeof pf);//变量大小一样的
//
//	return 0;
//}

//指针意义
//1.指针类型决定了：指针解引用的权限有多大
//2.指针类型决定了;指针走一步，能走多远（步长）
  int main()
{

	//int arr[] = { 0 };
	//int* p = arr;
	//char* pc = arr;//都能存放地址
	//printf("%p\n", p);
	//printf("%p\n", p+1);

	//printf("%p\n", pc);
	//printf("%p\n", pc+1);

	////int a = 0x11223344;//int是32个bite位一个数占四个bite位两个数就是一个字节

	////int* pa = &a;
	////*pa = 0;//改变了4个字节

	////char *pc=&a;
	////*pc = 0;//改变了1个字节
	//////访问权限发生了变化

	  int arr[10] = { 0 };
	  int* p = &arr;
	  int i = 0;
	  for (i = 0; i < 10; i++)
	  {
		  *(p + i) = 1;//访问数组的下标 

	  }
	
	return 0;
}