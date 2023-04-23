#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/////////////////数据结构字节///////////////////////////////////
struct b
{
	char a;
	int c;
	char b;
};
int main()
{

	printf("%d", sizeof(struct b));


	return 0;
}