#include <REGX52.H>
#include "Delay.h"
#include "key.h"
#include "Timer0.h"
#include <INTRINS.H>



//void Timer0_Inite()//配置定时器零  可以软件配置
//{//16为计数器
////	TMOD=0X01;//0000 0001  配置TMOD寄存器
//	TMOD&=0xF0;//把tmod的低四位清零，高四位保持不变  按位与
//	TMOD|=0x01;//把tmod的最低位置一，高四位保持不变  按位或
//	TF0=0;//中断溢出标志位
//	TR0=1;//定时器T0使能
//	TH0=64535/256;//有两个寄存器8个为一位，所以存数需要分开    高八位
//	TL0=64535%256+1;//对目标置取余存到低八位  65536才会溢出
//	ET0=1;//配置中断的寄存器
//	EA=1;//配置中断的寄存器
//	PT0=0;//配置优先级寄存器
//}
//void Timer0_Init(void)		//1毫秒@12.000MHz
//{
//	TMOD &= 0xF0;			//设置定时器模式
//	TMOD |= 0x01;			//设置定时器模式
//	TL0 = 0x18;				//设置定时初始值
//	TH0 = 0xFC;				//设置定时初始值
//	TF0 = 0;				//清除TF0标志
//	TR0 = 1;				//定时器0开始计时

//	ET0=1;//配置中断的寄存器
//	EA=1;//配置中断的寄存器
//	PT0=0;//配置优先级寄存器
//}
unsigned char keynumber,ledmode;
void main()
{
	P1=0xFE;
	Timer0_Init();
	while(1)
	{
		keynumber=key();
		if(keynumber)
		{
			if(keynumber==1)
			{
				ledmode++;
				if(ledmode>=2)
				{
					ledmode=0;
				}
			}
		}
	}
}

unsigned int T0count;
            //常规
void Timer0_Routine()  interrupt 1//中断之后直接跳到该程序
{
	TL0 = 0x18;				//设置定时初始值
	TH0 = 0xFC;				
//	TH0=64535/256;//到时间之后赋初始值
//	TL0=64535%256;//到时间之后赋初始值
	T0count++;
	if(T0count>=500)//一秒之后亮灯，一秒之后灭灯
	{
		T0count=0;//
	 if(ledmode==0)
		 P1=_crol_(P1,1);
	 if(ledmode==1)
		 P1=_cror_(P1,1);
		
	}
	
	
}