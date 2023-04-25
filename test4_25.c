#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/////联合体(共用体)//////////////////////////////////////////////////////////////////////////////
//空间要保证是最大对齐数的倍数
//联合体的存储
union un
{
	char a;
	int b;
};



union un2
{
	char a[5];
	int b;
};
check_sts()
{
	union ch 
	{
		char a;
		int b;
	};
	union ch c;
	c.b = 1;
	return c.a;


}
int main()
{

	union un u;
	union un2 u2;
	printf("%d\n", sizeof(u));
	printf("%d\n", sizeof(u2));


	if (check_sts()==1)
	{
		printf("小端");
	}
	else
	{
		printf("大段");
	}
	return 0;
}