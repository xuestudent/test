#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//×Ö·û³¤¶È  ×Ö·û¿½±´ ×Ö·û×·¼Ó
int my_strlen(char *arr)//×Ö·û´®³¤¶È
{
	int count = 0;
	while (*arr++!='\0')
	{
		count++;
	}
	return count;

}

 void my_strcpy(char*str,char*sou)//×Ö·û´®¿½±´
 {

	while (*str++ = *sou++)
	{
		
	}

}



void my_strcat(char*str,char*str2)//×Ö·û´®×·¼Ó
{
	while (*str)
	{
		str++;
	}
	while (*str++ = *str2++)
	{

	}

	
}
int main()
{
	char arr[30] = "hello ";
	char arr1[20] = {0};
	int ret = my_strlen(arr);
	printf("×Ö·û´®³¤¶ÈÎª%d\n", ret);
	my_strcpy(arr1,arr);
	printf("×Ö·û´®¿½±´%s\n",arr1);
	char arr3[10] = "world";
	my_strcat(arr,arr3);
	printf("×Ö·û´®×·¼Ó%s\n", arr);

	return 0;
}