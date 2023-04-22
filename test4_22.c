#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include <assert.h> 
/////////memmove模拟实现/////////////////////////////////
//void* my_memmove(void*str,const void*sru,size_t mun)
//{
//	void* ret = str;
//	assert(str && sru);
//	if (str<sru)
//	{
//		
//		//从前往后拷贝
//		while (mun--)
//		{
//			*(char*)str = *(char*)sru;
//			str = (char*)str + 1;
//			sru = (char*)sru + 1;
//		}
//	}
//	else
//	{
//		//从后往前拷贝
//		while (mun--)
//		{
//			*((char*)str + mun) = *((char*)sru + mun);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	//memmove(arr+2,arr,20);//memmove库函数
//	my_memmove(arr + 2, arr, 20);//模拟memmove函数
//
//	return 0;
//}


/// ///////memcmp函数////////////////////////////////////////////

//int main()
//{
//	float arr[] = { 1.0,4.0,3.0 };
//	float arr2[] = { 1.0,3.0 };
//	int ret = memcmp(arr, arr2,8);//后面单位是字节 相同返回0，大于返回大于零的数，小于返回小于零的数
//	printf("%d", ret);
//	return 0;
//}
/////////////memset函数////////////////////////////////////////////

//int main()
//{
//	int arr[20] = { 0 };
//	memset(arr,1,20);//单位是20字节，每个字节存进去一个1
//
//
//
//	return 0;
//}
//
