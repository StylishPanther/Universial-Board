#include "device.h"
#include "pwm.h"


void M4_Pwm_Init(void)
{
	TIM3_PWM_Configuration();

	TxPrintf("M4 Pwm Initialized!!\n");
}
void TIM1_PWM_Configuration(void)
{
	
	TIM_OCInitTypeDef TIM_OCStruct;
	//OCMode1 : high로 시작 , OCMode2 : low로 시작
	TIM_OCStruct.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OCStruct.TIM_OutputState = TIM_OutputState_Enable;//fix
	TIM_OCStruct.TIM_OCPolarity = TIM_OCPolarity_High;//fix
	
	//duty
	TIM_OCStruct.TIM_Pulse = 16383;
	TIM_OC1Init(TIM1, &TIM_OCStruct);
	
	TIM_OCStruct.TIM_Pulse = 32767;
	TIM_OC2Init(TIM1, &TIM_OCStruct);
	
	TIM_OCStruct.TIM_Pulse = 49151;
	TIM_OC3Init(TIM1, &TIM_OCStruct);
	
	//TIM_OCStruct.TIM_Pulse = 65535;
	//TIM_OC4Init(TIM1, &TIM_OCStruct);
}
void TIM8_PWM_Configuration(void)
{
	
	TIM_OCInitTypeDef TIM_OCStruct;
	//OCMode1 : high로 시작 , OCMode2 : low로 시작
	TIM_OCStruct.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OCStruct.TIM_OutputState = TIM_OutputState_Enable;//fix
	TIM_OCStruct.TIM_OCPolarity = TIM_OCPolarity_High;//fix
	
	//duty
	TIM_OCStruct.TIM_Pulse = 16383;
	TIM_OC1Init(TIM8, &TIM_OCStruct);
	
	TIM_OCStruct.TIM_Pulse = 32767;
	TIM_OC2Init(TIM8, &TIM_OCStruct);
	
	TIM_OCStruct.TIM_Pulse = 49151;
	TIM_OC3Init(TIM8, &TIM_OCStruct);
	
	//TIM_OCStruct.TIM_Pulse = 65535;
	//TIM_OC4Init(TIM8, &TIM_OCStruct);
}
void TIM2_PWM_Configuration(void)
{
	
	TIM_OCInitTypeDef TIM_OCStruct;
	//OCMode1 : high로 시작 , OCMode2 : low로 시작
	TIM_OCStruct.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OCStruct.TIM_OutputState = TIM_OutputState_Enable;//fix
	TIM_OCStruct.TIM_OCPolarity = TIM_OCPolarity_High;//fix
	
	//duty
	TIM_OCStruct.TIM_Pulse = 20999999;
	TIM_OC1Init(TIM2, &TIM_OCStruct);
	
	TIM_OCStruct.TIM_Pulse = 41999999;
	TIM_OC2Init(TIM2, &TIM_OCStruct);
	
	TIM_OCStruct.TIM_Pulse = 62999999;
	TIM_OC3Init(TIM2, &TIM_OCStruct);
	
	//TIM_OCStruct.TIM_Pulse = 83999999;
	//TIM_OC4Init(TIM2, &TIM_OCStruct);
}
void TIM3_PWM_Configuration(void)
{	
	GPIO_InitTypeDef GPIO_InitStructure;
TIM_TimeBaseInitTypeDef TIM_TimeBaseStructure;
TIM_OCInitTypeDef TIM_OC1InitStructure;
TIM_OCInitTypeDef TIM_OC2InitStructure;
/* TIM3 IO configuration *************************************/
/* Enable GPIOC clock */
RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);
/* Connect TIM3 pin (PC6) to AF2 */
GPIO_PinAFConfig(GPIOB, GPIO_PinSource4, GPIO_AF_TIM3);
GPIO_PinAFConfig(GPIOB, GPIO_PinSource5, GPIO_AF_TIM3);
/* Configure TIM3 CH1 pin (PC6) as alternate function */

GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4 | GPIO_Pin_5;
GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP ;
GPIO_Init(GPIOB, &GPIO_InitStructure);

	
RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE);
/* Time base configuration */
TIM_TimeBaseStructure.TIM_Period = 1000 - 1;
TIM_TimeBaseStructure.TIM_Prescaler = 42 - 1;
TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1;
TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;
TIM_TimeBaseInit(TIM3, &TIM_TimeBaseStructure);
/* Configure CH1 in PWM1 Mode */
TIM_OC1InitStructure.TIM_OCMode = TIM_OCMode_PWM1;
TIM_OC1InitStructure.TIM_OutputState = TIM_OutputState_Enable;
TIM_OC1InitStructure.TIM_Pulse = 500;
TIM_OC1InitStructure.TIM_OCPolarity = TIM_OCPolarity_High;
TIM_OC1Init(TIM3, &TIM_OC1InitStructure);

TIM_OC1PreloadConfig(TIM3, TIM_OCPreload_Enable);

TIM_ARRPreloadConfig(TIM3, ENABLE);
/* Enable TIM3 counter */
TIM_Cmd(TIM3, ENABLE);
}
void TIM4_PWM_Configuration(void)
{
	
	TIM_OCInitTypeDef TIM_OCStruct;
	//OCMode1 : high로 시작 , OCMode2 : low로 시작
	TIM_OCStruct.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OCStruct.TIM_OutputState = TIM_OutputState_Enable;//fix
	TIM_OCStruct.TIM_OCPolarity = TIM_OCPolarity_High;//fix
	
	//duty
	TIM_OCStruct.TIM_Pulse = 16383;
	TIM_OC1Init(TIM4, &TIM_OCStruct);
	
	TIM_OCStruct.TIM_Pulse = 32767;
	TIM_OC2Init(TIM4, &TIM_OCStruct);
	
	TIM_OCStruct.TIM_Pulse = 49151;
	TIM_OC3Init(TIM4, &TIM_OCStruct);
	
	//TIM_OCStruct.TIM_Pulse = 65535;
	//TIM_OC4Init(TIM4, &TIM_OCStruct);
}
void TIM5_PWM_Configuration(void)
{
	
	TIM_OCInitTypeDef TIM_OCStruct;
	//OCMode1 : high로 시작 , OCMode2 : low로 시작
	TIM_OCStruct.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OCStruct.TIM_OutputState = TIM_OutputState_Enable;//fix
	TIM_OCStruct.TIM_OCPolarity = TIM_OCPolarity_High;//fix
	
	//duty
	TIM_OCStruct.TIM_Pulse = 20999999;
	TIM_OC1Init(TIM5, &TIM_OCStruct);
	
	TIM_OCStruct.TIM_Pulse = 41999999;
	TIM_OC2Init(TIM5, &TIM_OCStruct);
	
	TIM_OCStruct.TIM_Pulse = 62999999;
	TIM_OC3Init(TIM5, &TIM_OCStruct);
	
	//TIM_OCStruct.TIM_Pulse = 83999999;
	//TIM_OC4Init(TIM5, &TIM_OCStruct);
}
void TIM9_PWM_Configuration(void)
{
	
	TIM_OCInitTypeDef TIM_OCStruct;
	//OCMode1 : high로 시작 , OCMode2 : low로 시작
	TIM_OCStruct.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OCStruct.TIM_OutputState = TIM_OutputState_Enable;//fix
	TIM_OCStruct.TIM_OCPolarity = TIM_OCPolarity_High;//fix
	
	//duty
	TIM_OCStruct.TIM_Pulse = 16383;
	TIM_OC1Init(TIM9, &TIM_OCStruct);
	
	TIM_OCStruct.TIM_Pulse = 32767;
	TIM_OC2Init(TIM9, &TIM_OCStruct);
	
}
void TIM10_PWM_Configuration(void)
{
	
	TIM_OCInitTypeDef TIM_OCStruct;
	//OCMode1 : high로 시작 , OCMode2 : low로 시작
	TIM_OCStruct.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OCStruct.TIM_OutputState = TIM_OutputState_Enable;//fix
	TIM_OCStruct.TIM_OCPolarity = TIM_OCPolarity_High;//fix
	
	//duty
	TIM_OCStruct.TIM_Pulse = 16383;
	TIM_OC1Init(TIM10, &TIM_OCStruct);

}
void TIM11_PWM_Configuration(void)
{
	
	TIM_OCInitTypeDef TIM_OCStruct;
	//OCMode1 : high로 시작 , OCMode2 : low로 시작
	TIM_OCStruct.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OCStruct.TIM_OutputState = TIM_OutputState_Enable;//fix
	TIM_OCStruct.TIM_OCPolarity = TIM_OCPolarity_High;//fix
	
	//duty
	TIM_OCStruct.TIM_Pulse = 16383;
	TIM_OC1Init(TIM11, &TIM_OCStruct);

}
void TIM12_PWM_Configuration(void)
{
	
	TIM_OCInitTypeDef TIM_OCStruct;
	//OCMode1 : high로 시작 , OCMode2 : low로 시작
	TIM_OCStruct.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OCStruct.TIM_OutputState = TIM_OutputState_Enable;//fix
	TIM_OCStruct.TIM_OCPolarity = TIM_OCPolarity_High;//fix
	
	//duty
	TIM_OCStruct.TIM_Pulse = 16383;
	TIM_OC1Init(TIM12, &TIM_OCStruct);
	
	TIM_OCStruct.TIM_Pulse = 32767;
	TIM_OC2Init(TIM12, &TIM_OCStruct);
	

}
void TIM13_PWM_Configuration(void)
{
	
	TIM_OCInitTypeDef TIM_OCStruct;
	//OCMode1 : high로 시작 , OCMode2 : low로 시작
	TIM_OCStruct.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OCStruct.TIM_OutputState = TIM_OutputState_Enable;//fix
	TIM_OCStruct.TIM_OCPolarity = TIM_OCPolarity_High;//fix
	
	//duty
	TIM_OCStruct.TIM_Pulse = 16383;
	TIM_OC1Init(TIM13, &TIM_OCStruct);
	
}
void TIM14_PWM_Configuration(void)
{
	
	TIM_OCInitTypeDef TIM_OCStruct;
	//OCMode1 : high로 시작 , OCMode2 : low로 시작
	TIM_OCStruct.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OCStruct.TIM_OutputState = TIM_OutputState_Enable;//fix
	TIM_OCStruct.TIM_OCPolarity = TIM_OCPolarity_High;//fix
	
	//duty
	TIM_OCStruct.TIM_Pulse = 16383;
	TIM_OC1Init(TIM14, &TIM_OCStruct);
	

}