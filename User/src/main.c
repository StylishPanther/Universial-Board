/**
  ******************************************************************************
  * @file    Project/STM32F4xx_StdPeriph_Templates/main.c 
  * @author  MCD Application Team
  * @version V1.8.0
  * @date    04-November-2016
  * @brief   Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2016 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/

#define _MAIN_
#include "device.h"


/** @addtogroup Template_Project
  * @{
  */ 

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
static __IO uint32_t uwTimingDelay;
RCC_ClocksTypeDef RCC_Clocks;

/* Private function prototypes -----------------------------------------------*/
static void Delay(__IO uint32_t nTime);

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */


void System_Init(void)
{
	M4_Gpio_Init();
	M4_Usart_Init();
	M4_Rcc_Init();
	//M4_Timer_Init();
	M4_Pwm_Init();

}

void Variable_Init(void)
{
	
}
int main(void)
{
  
  /* Infinite loop */
  //M4_Gpio_Init();
  System_Init();
  Variable_Init();
  volatile int i = 0;
  volatile int time = 0;

  PrintMenu();
  System_Information();
  while (1)
  {
		
		//Test
		#if 1
		GPIO_WriteBit(GPIOA,GPIO_Pin_11 | GPIO_Pin_12 ,Bit_SET);
		GPIO_WriteBit(GPIOD,GPIO_Pin_2 | GPIO_Pin_3  ,Bit_SET);
		
		for(i = 0; i < 10000000; i++) time++;
		time = 0;
		
		GPIO_WriteBit(GPIOA,GPIO_Pin_11 | GPIO_Pin_12 ,Bit_RESET);
		GPIO_WriteBit(GPIOD,GPIO_Pin_2 | GPIO_Pin_3  ,Bit_RESET);
		for(i = 0;  i < 10000000; i++) time++;
		time = 0;
		
		#endif
		//GPIO_WriteBit(GPIOA,GPIO_Pin_11 | GPIO_Pin_12 ,Bit_SET);
		
		

		//UART4_SendString("Hello, World!!\r\n");
		
		//UART4_SendData('C');
		//UART4_SendData('');
		for(i = 0; i < 1000000; i++) time++;
		time = 0;
		

  }
}

/**
  * @brief  Inserts a delay time.
  * @param  nTime: specifies the delay time length, in milliseconds.
  * @retval None
  */
void Delay(__IO uint32_t nTime)
{ 
  uwTimingDelay = nTime;
	
  while(uwTimingDelay != 0); 
}

/**
  * @brief  Decrements the TimingDelay variable.
  * @param  None
  * @retval None
  */
void TimingDelay_Decrement(void)
{
  if (uwTimingDelay != 0x00)
  { 
    uwTimingDelay--;
  }
}

#ifdef  USE_FULL_ASSERT

/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t* file, uint32_t line)
{ 
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {
  }
}
#endif

/**
  * @}
  */


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
