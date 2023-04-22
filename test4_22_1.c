#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/// ////////结构体和匿名结构体/////////////////////////////////////////////
//struct book
//{
//	char name[10];
//	int price[10];
//	int ID[10];
//}b4,bk5,b6;//全局变量
//int main()
//{
//	//局部变量
//	struct book b1;
//	struct book b2;
//	struct book b3;
//
//	return 0;
//}
//struct//匿名结构体只能用一次
//{
//	char name [10];
//	int price[10];
//	int ID[10];
//}s;
///////////////////结构体自引用/////////////////////////////////
//结构体成员不能含有我自己
//////////////////结构体嵌套/////////////////////////////////////
struct k
{
	int a;
	char b;
}s;
struct B
{
	char b;
	struct k s;
	int a;
};
int main()
{

	struct B l = { 'p',{1,4},6};
	printf("%d %c  ", l.a,l.b);
	return 0;
}