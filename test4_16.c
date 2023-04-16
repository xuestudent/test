#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>

int main()
{
	char arr[] = "abbbcdef";
	char arr2[] = "bbc";
	char* ret=strstr(arr,arr2);
	if (ret==NULL)
	{
		printf("ц╩спур╣╫\n");
	}
	else
	{
		printf("%s",ret);
	}
	return 0;
}