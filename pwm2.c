#include <REGX52.H>
#include "Timer0.h"
#include "key.h"
#include "nixielight.h"

sbit LED=P2^0;


unsigned char KeyNum,Speed;
unsigned char counter,compare;
void main()
{
	Timer0_Init();
    while(1)
      {
					KeyNum=key();
		if(KeyNum==1)
		{
			Speed++;
			Speed%=4;//1-4
			if(Speed==0){compare=5;}	//设置比较值，改变PWM占空比
			if(Speed==1){compare=10;}
			if(Speed==2){compare=20;}
			if(Speed==3){compare=30;}
		}
			
	
    }
			nixie(1,Speed);
}


void Timer0_Routine()  interrupt 1//中断之后直接跳到该程序
{

	TL0 = 0x18;				//设置定时初始值
	TH0 = 0xFC;	
  counter++;
	counter%=100;	//Counter加到100清零
	if(counter<compare)//占空比
	{
		LED=1;
	}
	else
	{
		LED=0;
	}
}

