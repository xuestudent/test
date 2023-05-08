#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//字符与格式化数据相互转换////////////////////////////////////////////////////////////
//struct m
//{
//	int a;
//	char arr[10];
//	float b;
//};
//
//int main()
//{
//	struct m a = { 5,"abcde",5.5f };
//	struct m temp = { 0 };
//
//	char buff[100] = { 0 };
//	sprintf(buff,"%d %s %f",a.a,a.arr,a.b);
//	printf("%s\n",buff);
//
//	sscanf(buff, "%d %s %f",&(temp.a),temp.arr,&(temp.b));
//	printf("%d %s %f", temp.a,temp.arr,temp.b);
//	return 0;
//}
///fseek函数运用/////////////////////////////////////////////////////
//int main()
//{
//	FILE* pf = fopen("test.txt","r");
//	if (pf==NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读取文件
//	int ret =fgetc(pf);
//	printf("%c", ret);
//	//调整位置
//	//fseek(pf,-1,SEEK_CUR);//从上次开始的位置进行修改
//	//fseek(pf, 2,SEEK_SET);//从开始进行修改
//	/*fseek(pf, 2, SEEK_END); */
//	ret = fgetc(pf);
//	printf("%c", ret);
//	ret = fgetc(pf);
//	printf("%c", ret);
//
//}


///把test1.txt一拷贝到text2.txt


//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt","r");
//	if (pf==NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	FILE* pf2 = fopen("test2.txt", "w");
//	if (pf == NULL)
//	{
//		fclose(pf);
//		pf == NULL;
//		perror("fopen");
//		return 1;
//	}
//	int ch = 0;
//	while ((ch=fgetc(pf))!=EOF)
//	{
//		fputc(ch,pf2);
//	}
//
//	fclose(pf);
//	pf = NULL;
//	fclose(pf2);
//	pf2 = NULL;
//
//	return 0;
//}