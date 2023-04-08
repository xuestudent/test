#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//void test(char* str)
//{
//
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	const char* pc = "helloworld";
//	printf("%c\n", *pc);
//	printf("%s\n", pc);
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//	int* arr[3] = { a,b,c };//放的是首元素地址
//	int i = 0;
//	for (i=0;i<3;i++)
//	{
//		int j = 0;
//		for (j=0;j<5;j++)
//		{
//			//printf("%d",*(arr[i] + j));
//			printf("%d", arr[i][j]);//模拟出二维数组  和上面相等
//		}
//		printf("\n");
//	}
//
//	printf("%p\n", &add);
//	printf("%p\n", add);
//	int (*pf)(int, int) = &add;
//
//	void (*pt)(char*) = &test;
//	//int ret = (*pf)(3, 5);
//	int ret = pf(3, 5);
//	printf("%d\n", ret);
//	(*(void(*)())0)();
//	//1.void(*)()-函数指针类型
//	//2.(void(*)())0-对0进行强制类型转换，被解释为一个函数地址
//	//3.*(void(*)())0-对0地址进行了解引用操作
//	//4.(*(void(*)())0)()-调用0地址处的函数
//	void(*signal(int, void(*)(int)))(int);
//	//1.signal和()先结合说明signal是函数名
//	//2.signal函数的第一个参数是int类型第二个参数是函数指针
//	//该函数指针指向一个参数为int，返回类型是void的函数
//	//3.signal函数返回类型也是一个函数指针
//	//该函数指针指向一个参数为int，返回类型是void的函数
//	//signal是一个函数的声明
//	typedef void(*pfun_t)(int);
//	pfun_t signal(int, pfun_t);
//	return 0;
//} 
//int main()//函数指针数组-存放函数指针的数组
//{
//	int (*pf1)(int ,int)= add;
//	int (*pf2)(int, int) = sub;
//	int (*pfarr[2])(int, int) = {add,sub};//函数指针数组
//	return 0;
//}
int add(int x, int y)
{
	return x + y;
}


int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}


int div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("**************************\n");
	printf("***  1.add      2.sub  ***\n");
	printf("***  3.mul      4.div  ***\n");
	printf("**********0.exit**********\n");
	printf("**************************\n");
	printf("**************************\n");
	printf("**************************\n");

}
	int CALC(int(*pf)(int,int))
   {
		int x = 0;
		int y = 0;
		printf("请输入数字->");
		scanf("%d %d", &x, &y);
		return (*pf)(x,y);

   }

int main()
{
	//计算器—计算整形加 减 乘 除
	int intput = 0;
//	do
//	{
//		menu();
//
//		//转移表
//		int (*pfarr[5])(int, int) = { NULL,add,sub,mul,div};//函数指针数组
//		int x = 0;
//		int y = 0;
//		
//		printf("请输入->");
//		scanf("%d", &intput);
//		if (intput>0&& intput<=4)
//		{
//		printf("请输入数字->\n");
//		scanf("%d %d", &x, &y);
//		int ret = (pfarr[intput])(x, y);
//		printf("%d\n", ret);
//		}
//		else if (intput == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//		
//	} while (intput);



	do
	{
		menu();
		int ret = 0;
		printf("请输入->");
		scanf("%d", &intput);
		switch (intput)
		{
		case 1:
			ret = CALC(add);
			printf("%d\n", ret);
			break;
		case 2:
			ret = CALC(sub);
			printf("%d\n", ret);
			break;
		case 3:
			ret = CALC(mul);
			printf("%d\n", ret);
			break;
		case 4:
			ret = CALC(div);
			printf("%d\n", ret);
			break;
		case 0:
			printf("退出游戏\n");
		default:
			printf("选择错误重新选择\n");
		}

	} while (intput);





	return 0;
}

