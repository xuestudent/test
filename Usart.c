#include <REGX52.H>

void UART_Init()
{
	SCON=0x40;
	PCON &= 0x7F;
	
	TMOD &= 0x0F;			//设置定时器模式
	TMOD |= 0x20;			//设置定时器模式
  TL1 = 0xFA;			//设置定时初始值
	TH1 = 0xFA;			//设置定时重载值
	ET1 = 0;			//禁止定时器中断
	TR1 = 1;			//定时器1开始计时
}


void USART_SendByte(unsigned char Byte)//USART发送字符
{
	SBUF=Byte;//把数据写到SBUF寄存器
	while(TI==0);//直到发送控制器标志位置1（TI为1表示有数据）
	TI=0;//TI标志位，置1之后软件置0
}