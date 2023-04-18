#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>			//模拟strstr函数
#include <string.h>
#include<assert.h>
char * my_strstr(const char *str1,const char *str2)
{
	assert(str1 && str2);//如果为空指针就会断言
	const char* s1 = NULL;
	const char* s2 = NULL;
	char* cp = str1;
	if (*str2=='\0')
	{
		return str1;
	}
	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (*s1 && *s2 && (*s1==*s2))//解引用进行对比然后不能为\0
		{
			s1++;//如果相同
			s2++;

		}
		if (*s2=='\0')//字符为零s2在s1中能找到返回cp地址就可以开始打印
		{
			return cp;
		}
		cp++;//都不满足cp往后走一位
	}

	return NULL;


}
int main()
{
	char arr[] = "abbbcdef";5
	char arr2[] = "bbc";
	char* ret=my_strstr(arr,arr2);
	if (ret==NULL)
	{
		printf("没有找到\n");
	}
	else
	{
		printf("%s",ret);
	}
	return 0;
}