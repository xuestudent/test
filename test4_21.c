#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<errno.h> 
#include <string.h>
//#include <ctype.h>
////打开文件///////////////////////////////////////////////
//int main()
//{    //打开失败会返回空指针
//	FILE* pf = fopen("test.txt", "r");//打开文件 “r”只读的形式  fopen会返回FILE型的指针
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));//获取指向错误消息字符串的指针
//		perror("fopen");//打印错误信息
//		return 1;
//	}
//
//	fclose(pf);//关闭指针
//	pf = NULL;
//	return 0;
//}

///////////判断是否是数字字符，字符大小写///////////////////////////////////
//int main()
//{
//	char ch = '*';
//	char ch2 = 'a';
//	int ret = isdigit(ch);
//	int ret2 = islower(ch2);
//	printf("%d\n", ret);
//	printf("%d\n", ret2);
//
//
//	return 0;
//}

//////////大写转小写/////////////////////////////////////////////////////
//int main()
//{
//	char arr[20] = "0";
//	int i = 0;
//	scanf("%s",arr);
//	while (arr[i]!='\0')//如果结束进入循环
//	{
//		if (isupper(arr[i]))//判断是大写
//		{
//			arr[i] = tolower(arr[i]);//是大写就转换成小写
//		}
//		printf("%c ", arr[i]);//打印
//		i++;//不然是死循环
//	}
//	return 0;
//}
//////////内存操作函数模拟函数///////////////////////////////////////////////////



//void my_memcpy(void*str,void*stu,size_t mun)
//{
//	while (mun--)
//	{
//		*(char*)str = *(char*)stu;
//		str = (char*)str + 1;
//		stu = (char*)stu + 1;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[10] = { 0 };
//
//	//memcpy(arr2,arr,20);//内存拷贝
//	my_memcpy(arr2,arr,20);//模拟函数
//
//	int i = 0;
//	for (i=0;i<10;i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}