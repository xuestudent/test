#include <REGX52.H>
#include "delay.h"

//获取按键值
unsigned char key()
{
	unsigned char keynumber;
	
	if(P3_4==0)
	{Delay(20);
	while(P3_4==0)
	{Delay(20);keynumber=1;}
	}
		if(P3_5==0)
	{Delay(20);
	while(P3_5==0)
	{Delay(20);keynumber=2;}
	}
		if(P3_6==0)
	{Delay(20);
	while(P3_6==0)
	{Delay(20);keynumber=3;}
	}
		if(P3_7==0)
	{Delay(20);
	while(P3_7==0)
	{Delay(20);keynumber=4;}
	}
	return keynumber;
}