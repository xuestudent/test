#ifndef _ADC_H
#define _ADC_H




u16 ADC1_GetRegular_Channel_Data(u8 chx);
void ADC_Regular_Channel(void);
void Tim3_CH1_PWM(u16 psc,u16 arr,u16 ccr);
	
#endif
