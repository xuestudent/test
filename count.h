#ifndef  __COUNT_H__
#define  __COUNT_H__

void Exti_init(void);
void EXTI15_10_IRQHandler(void);
uint16_t Get_count(void);
#endif
