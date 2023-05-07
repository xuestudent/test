#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//写文件/////////////////////////////////////
//struct S
//{
//	char arr[10];
//	int i;
//	float a;
//
//};
//int main()
//{
//	struct S s={"abcd",10,5.5f };
//	FILE* pf = fopen("test.dat","w");
//	if (pf==NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fprintf(pf,"%s %d %f",s.arr,s.i,s.a);//(哪个文件，%d%c，写什么东西)
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//读文件
//struct S
//{
//	char arr[10];
//	int i;
//	float a;
//
//};
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fscanf(pf, "%s %d %f",&s.arr,&(s.i),&(s.a));//(哪个文件，%d%c，写什么东西)
//
//	printf("%s %d %f",s.arr,s.i,s.a);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//二进制写文件
//struct S
//{
//	char arr[10];
//	int i;
//	float a;
//
//};
//int main()
//{
//	struct S s = { "abcd",10,5.5f };//字符串以二进制和以文本的形式写进去是一样的
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fwrite(&s,sizeof(struct S),1,pf);
//
//	
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//二进制读文件
struct S
{
	char arr[10];
	int i;
	float a;

};
int main()
{
	struct S s = { 0 };//字符串以二进制和以文本的形式写进去是一样的
	FILE* pf = fopen("test.dat", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	fread(&s, sizeof(struct S), 1, pf);
	printf("%s %d %f", s.arr, s.i, s.a);

	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}