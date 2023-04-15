#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>  

int my_strcmp(const char*str1, const char* str2)
{
	assert (str1&&str2);
	while (*str1==*str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str2++;
		str1++;
	}
	if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main()
{

	char arr[20] = "abcdef";
	char arr2[10] = "abcdef";
	int ret=my_strcmp(arr,arr2);
	if (ret > 0)
	{
		printf("arr>arr2");
	}
	else if(ret==0)
	{
		printf("arr=arr2");
	}
	else
	{
		printf("arr<arr2");
	}
	return 0;
}