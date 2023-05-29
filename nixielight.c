#include <REGX52.H>//51头文件
#include <INTRINS.H>
#include "Delay.h"
#define uchar unsigned char//宏定义
#define uint unsigned int
sbit WE = P2^7;	//定义引脚
sbit DU = P2^6;	

//void delay(uint z)  //延时函数
//{
//	unsigned int x,y;
//	for(x = z;x>0;x--)
//		for(y=144;y>0;y--);
//}


uchar code WEI [] = //位数组
{
0xfe,0xfd,0xfb,0xf7,
0xef,0xdf,0xbf,0x7f
};

uchar code DUAN [] =//段数组
{
0x3f,0x06,0x5b,0x4f,
0x66,0x6d,0x7d,0x07,
0x7f,0x6f,0x77,0x7c,
0x39,0x5e,0x79,0x71
};

										
void nixie(unsigned char a,b)//数码管函数
{
	
	    P0 = 0xff; //在进行位选择时候，先关闭所有显示，防止打开位选时，P0口还保持原来的数据 （消影）
		WE = 1;  //打开位锁存器
		P0=  WEI[a-1];//指定哪个数码管	
		WE = 0;  //关闭位锁存器
	    DU = 1;  //打开段锁存器
		P0 = DUAN[b];//显示那个数字 
		Delay(1); //延时
	
}
