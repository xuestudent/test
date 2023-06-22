#include "stm32f10x.h"                  // Device header


void PWM_Init(void)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2,ENABLE);//APB1外部时钟控制有Tim2
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);//开启APB2引脚外设

	
	/*RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE);引脚重映射
	GPIO_PinRemapConfig(GPIO_PartialRemap1_TIM2,ENABLE);引脚重映射配置  PA0-PA15
	GPIO_PinRemapConfig(GPIO_Remap_SWJ_JTAGDisable,ENABLE);pa15原本是调试端口需要用PinRemapConfig更改一下*/
	
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP ;//设置引脚模式   使用 复用推挽 片上外设可以控制引脚
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;//设置引脚
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;//设置频率
	GPIO_Init(GPIOA, &GPIO_InitStructure);//初始化

	
	TIM_InternalClockConfig(TIM2);//内部时钟频率
	
	TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStructure;//创建时基单元结构体
	TIM_TimeBaseInitStructure.TIM_ClockDivision=TIM_CKD_DIV1;//一分频   时钟分频
	TIM_TimeBaseInitStructure.TIM_CounterMode=TIM_CounterMode_Up ;//计数器模式   向上计数
	TIM_TimeBaseInitStructure.TIM_Period=100-1;//ARR自动重装器    一赫兹等于1毫秒 10000等于一秒
	TIM_TimeBaseInitStructure.TIM_Prescaler=720-1;//psc预分频器的值    两个值是0-65535
	TIM_TimeBaseInitStructure.TIM_RepetitionCounter=0;//重复计数器的值，高级计数器才有
	TIM_TimeBaseInit(TIM2,&TIM_TimeBaseInitStructure);//初始化时基单元
	
	TIM_OCInitTypeDef  TIM_OCInitstructure;//输出比较结构体
	TIM_OCStructInit(&TIM_OCInitstructure);//给结构体赋初始值
	TIM_OCInitstructure.TIM_OCMode=TIM_OCMode_PWM1;//输出比较模式选择
	TIM_OCInitstructure.TIM_OCPolarity=TIM_OCPolarity_High;//设置输出比较的极性 选择高电平
  TIM_OCInitstructure.TIM_OutputState=TIM_OutputState_Enable;//设置输出使能  使能
	TIM_OCInitstructure.TIM_Pulse=0;//设置CCR
	
	TIM_OC1Init(TIM2,&TIM_OCInitstructure);//初始化输出比较
	
	TIM_Cmd(TIM2,ENABLE);//启动定时器
	
	
}
	void PWM_setCompare(uint16_t Compare)
	{
		
		TIM_SetCompare1(TIM2,Compare);
		
	}
	

