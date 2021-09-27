#include "device.h"
#include "pwm.h"


void M4_Pwm_Init(void)
{
	
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
	
	TIM_OCInitTypeDef TIM_OCStruct;
	//OCMode1 : high로 시작 , OCMode2 : low로 시작
	TIM_OCStruct.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OCStruct.TIM_OutputState = TIM_OutputState_Enable;//fix
	TIM_OCStruct.TIM_OCPolarity = TIM_OCPolarity_High;//fix
	
	//duty
	TIM_OCStruct.TIM_Pulse = 16383;
	TIM_OC1Init(TIM3, &TIM_OCStruct);
	
	TIM_OCStruct.TIM_Pulse = 32767;
	TIM_OC2Init(TIM3, &TIM_OCStruct);
	
	TIM_OCStruct.TIM_Pulse = 49151;
	TIM_OC3Init(TIM3, &TIM_OCStruct);
	
	//TIM_OCStruct.TIM_Pulse = 65535;
	//TIM_OC4Init(TIM3, &TIM_OCStruct);
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