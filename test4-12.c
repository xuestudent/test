#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int my_strlen(char*str)
{
	int count = 0;
	while (*str != '\0')
	{
		str++;//地址加加向后移动
		count++;
	}
	return count;
}
//void my_strcopy(char*str,char*sou)
//{
//	while (*(++str)=*(++sou))
//	{
//
//	}
//}
int main()
{
	char arr[5] = "abnj";
	char arr2[10] = { 0 };
	int ret=my_strlen(arr);
	printf("%d\n",ret);


	return 0;
}