#include "stm32f10x.h"                  // Device header
#include "Delay.h"

uint16_t count;
void Exti_init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO,ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;//上拉输入
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_14;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &GPIO_InitStructure);
	
	
	//配置EXTI
	GPIO_EXTILineConfig(GPIO_PortSourceGPIOB,GPIO_PinSource14);//APB2总线的14引脚
	
	EXTI_InitTypeDef EXTI_Init_structure;
	EXTI_Init_structure.EXTI_Line=EXTI_Line14;//中断线
	EXTI_Init_structure.EXTI_LineCmd=ENABLE;//打开中断线
	EXTI_Init_structure.EXTI_Mode=EXTI_Mode_Interrupt;//一个是中断，一个是事件
	EXTI_Init_structure.EXTI_Trigger=EXTI_Trigger_Rising;//高电平触发
	EXTI_Init(&EXTI_Init_structure);
	
	//配置NVIC
	
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//中断分组  两位抢占两位响应
	
	NVIC_InitTypeDef NVIC_Init_structure;
	NVIC_Init_structure.NVIC_IRQChannel=EXTI15_10_IRQn;
	NVIC_Init_structure.NVIC_IRQChannelCmd=ENABLE;
	NVIC_Init_structure.NVIC_IRQChannelPreemptionPriority=1;//抢占优先级
	NVIC_Init_structure.NVIC_IRQChannelSubPriority=1;//响应优先级
	NVIC_Init(&NVIC_Init_structure);
	
}
uint16_t Get_count(void)
{
	return count;
}


void EXTI15_10_IRQHandler(void)//中断函数
{
	if(EXTI_GetITStatus(EXTI_Line14) == SET)//获取exti14的标志位是否为1
	{
		count++;
		EXTI_ClearITPendingBit(EXTI_Line14);//使用完之后清除标志位
	}
	
	
}
