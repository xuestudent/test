#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int isprime(int a)
{
	for (int i = 2;i < a; i++)
	{
		for (int j = 2; j < a;j++)
		{
			if (j*i==a)
			{
				return 0;
			}
		}
	}
	return 1;
}
int main()
{
	int a = 0;
	scanf("%d",&a);
	int ret=isprime(a);
	if (ret == 1)
	{
		printf("ÊÇ");
	}
	else printf("²»ÊÇ");
	
	return 0;
}