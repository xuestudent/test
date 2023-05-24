#include <REGX52.H>//头文件
#include <INTRINS.H>
void Delay1ms(unsigned int xms)		//延时程序
{
	
	while(xms)//延时输入的时间
	{
	unsigned char data i, j;

	_nop_();
	i = 2;
	j = 199;
	do
	{
		while (--j);
	} while (--i);
	xms--;
}
	
}



void main()
{
	while(1)
{
	P1_0=0;
	Delay1ms(500);
	P1_1=0;
	Delay1ms(500);
	P1_2=0;
	Delay1ms(500);
	P1_3=0;
	Delay1ms(500);
	P1_4=0;
	Delay1ms(500);
	P1_5=0;
	Delay1ms(500);
	P1_6=0;
	Delay1ms(500);
	P1_7=0;
	Delay1ms(500);
}

	
	
	
}
//void main()
//{
//	
//	
//	while(1)
//	{
//	P1=0xFE; //1111 1110
//	Delay1ms(500);
//	P1=0xFD; //1111 1101
//	Delay1ms(500);
//	P1=0xFB; //1111 1011
//	Delay1ms(500);
//	P1=0xF7; //1111 0111
//	Delay1ms(500);
//	P1=0xEF; //1110 1111
//	Delay1ms(500);
//	P1=0xDF; //1101 1111
//	Delay1ms(500);
//	P1=0xBF; //1011 1111
//	Delay1ms(500);
//	P1=0x7F; //0111 1111
//	Delay1ms(500);
//	}
//}