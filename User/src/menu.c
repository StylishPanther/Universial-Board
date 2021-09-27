#include "device.h"
#include "menu.h"


void PrintMenu(void)
{
	TxPrintf("\n\n");
	TxPrintf("========   STM32F407VGT6 Monitor V1.0   ========\n");	
	TxPrintf("========   by Lee Jin Ho Maze 23rd   =======\n");	
	TxPrintf("=====  https://blog.naver.com/zazz0907  ======\n\n");
}

void System_Information(void)
{
	RCC_ClocksTypeDef rcc_clocks;

	RCC_GetClocksFreq(&rcc_clocks);
	TxPrintf("SYSCLK_Frequency : %d\n", rcc_clocks.SYSCLK_Frequency / 1000000);
	TxPrintf("HCLK_Frequency : %d\n", rcc_clocks.HCLK_Frequency / 1000000);
	TxPrintf("PCLK2(APB2)_Frequency : %d\n", rcc_clocks.PCLK2_Frequency / 1000000);	
	TxPrintf("PCLK1(APB1)_Frequency : %d\n", rcc_clocks.PCLK1_Frequency / 1000000);

}
