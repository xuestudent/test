#include "stm32f10x.h"                  // Device header


uint8_t RData;
void serial_init(void)
{
	//打开时钟
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1,ENABLE);//打开串口时钟
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);//打开引脚时钟
	//配置引脚
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	
	
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;//上拉输入
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);	
	

	
	USART_InitTypeDef USART_Init_structure;
	USART_Init_structure.USART_BaudRate=9600;//波特率
	USART_Init_structure.USART_HardwareFlowControl=USART_HardwareFlowControl_None;//不适用流控
	USART_Init_structure.USART_Mode=USART_Mode_Tx | USART_Mode_Rx;//模式
	USART_Init_structure.USART_Parity=USART_Parity_No;//校验位
	USART_Init_structure.USART_StopBits=USART_StopBits_1;//停止位
	USART_Init_structure.USART_WordLength=USART_WordLength_8b;//数据位
  USART_Init(USART1,&USART_Init_structure);
	
	USART_ITConfig(USART1,USART_IT_RXNE,ENABLE);
	
	
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	
	NVIC_InitTypeDef NVIC_Init_structure;
	NVIC_Init_structure.NVIC_IRQChannel=USART1_IRQn;
	NVIC_Init_structure.NVIC_IRQChannelCmd=ENABLE;
	NVIC_Init_structure.NVIC_IRQChannelPreemptionPriority=1;//抢占优先级
	NVIC_Init_structure.NVIC_IRQChannelSubPriority=1;//响应优先级
	NVIC_Init(&NVIC_Init_structure);
	
	
	USART_Cmd(USART1,ENABLE);
}
void Serial_Send_Byte(uint8_t Byte)
{
	USART_SendData(USART1,Byte);
  while(USART_GetFlagStatus(USART1,USART_FLAG_TXE)==RESET);//等他标志位置set
	
}
 
void USART1_IRQHandler(void)//串口中断
{
	 if(USART_GetFlagStatus(USART1,USART_FLAG_RXNE) == SET )
		{
   
			RData=USART_ReceiveData(USART1);
			USART_ClearITPendingBit(USART1,USART_FLAG_RXNE);
		}
	
}
