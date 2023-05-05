#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//文件////////////////////////////////////////////////////////
int main()
{
	//打开文件
	FILE*pf=fopen("test.dat","r");
	if (pf==NULL)
	{
		perror("fopen");
		return 1;
	}

	char arr[10] = { 0 };
	////读文件
	//int ret=fgetc(pf);
	//printf("%c\n", ret);
	//ret = fgetc(pf);
	//printf("%c\n", ret); 
	//ret = fgetc(pf);
	//printf("%c\n", ret);
	//fputs("abcdefg\n", pf);//写文件
	//fputs("33333333\n", pf);
	fgets(arr,4,pf);
	printf("%s\n", arr);//只能读三个因为有个/0
	fgets(arr, 4, pf);
	printf("%s\n", arr);
	



	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}