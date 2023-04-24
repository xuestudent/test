#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/// ////////
//对齐数的修改 结构体传参  位段  枚举和define的区别
struct s1
{

	char c1;
	int i;
	char c2;

};
struct s3
{
	int arr[100000];


};


struct A
{
	int a : 3;
	int b : 4;
	int c : 5;
	int d : 4;
};

enum color
{
	red,//0
	blue,//1
	green//2
};
/////////可以修改默认对齐数////////////////////////////////////////
#pragma pack(1)
struct s2
{

	char c1;
	int i;
	char c2;

};
#pragma pack()


void print1(struct s3* a)
{
	printf("%d\n",a->arr);
}
int main()
{
	
	printf("%d\n", sizeof(struct s1));
	printf("%d\n", sizeof(struct s2));
	


	struct s3 a={0,1,2};
	print1(&a);//尽量用结构体指针传参可以节省空间


	printf("%d\n", red);
	struct A c = { 0 };
	c.a = 10;
	c.b = 12;
	c.c = 3;
	c.d = 4;
	return 0;
}