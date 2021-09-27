#include "device.h"
#include "uart.h"



void M4_USART_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	USART_InitTypeDef USART_InitStructure;
	  
	  //USART2 is connected to APB1 Periph Clock Bus and we enabled it.
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_UART4, ENABLE);
	  
	  //GPIOA is connected to AHB1 Periph Clock Bus and we enabled it.
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);

    GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_AF; //This is important. We will this pin except of INPUT, OUTPUT and ANALOG so we set as Alternate Function
	GPIO_InitStructure.GPIO_Pin   = GPIO_Pin_10 | GPIO_Pin_11;   //Communicate on PA2 and PA3
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;//We set the pin as Push Pull
	GPIO_InitStructure.GPIO_PuPd  = GPIO_PuPd_UP; //And Pull Up. Keep it always on HIGH
	GPIO_InitStructure.GPIO_Speed	= GPIO_Speed_50MHz; //And pin frequency
	GPIO_Init(GPIOC, &GPIO_InitStructure);
	
	//When we set a pin as Alternate Function, we need to specify what function do we use for, here we specified it as USART 2
	GPIO_PinAFConfig(GPIOC, GPIO_PinSource10, GPIO_AF_UART4);
	GPIO_PinAFConfig(GPIOC, GPIO_PinSource11, GPIO_AF_UART4);
	
	
	USART_InitStructure.USART_BaudRate 	              = 115200; //Set the baudrate. Hw many datas will be sent in a second.
	USART_InitStructure.USART_HardwareFlowControl     = USART_HardwareFlowControl_None;  //Do not check the data transmitted 
	USART_InitStructure.USART_Mode                    = USART_Mode_Tx | USART_Mode_Rx;//Data tansmission modes
	USART_InitStructure.USART_Parity                  = USART_Parity_No; // USART parity settings
	USART_InitStructure.USART_StopBits                = USART_StopBits_1; //Set the stop bits
	USART_InitStructure.USART_WordLength              = USART_WordLength_8b;  //we will send the 8bit data
	USART_Init(UART4, &USART_InitStructure);   //and started the this configuration
	
	USART_Cmd(UART4, ENABLE); //USART is activated and ready to use

	TxPrintf("M4 Uart Initialized!!\n");
}

void USART1_Init(void)
{
	USART_InitTypeDef* usart;
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1,ENABLE);
	
	USART_StructInit(usart);
	
	USART_Init(USART1, usart);

	USART_Cmd(USART1,ENABLE);
	
}


void UART4_Init(void)
{
	USART_InitTypeDef* uart;

	RCC_APB1PeriphClockCmd(RCC_APB1Periph_UART4,ENABLE);	
	
	USART_Init(UART4, uart);

	USART_Cmd(UART4,ENABLE);
}



void USART1_SendData(char Data)
{
  /* Transmit Data */ 
	while(!IS_USART_FLAG(USART_FLAG_TXE));
	USART1->DR = (Data & (uint16_t)0x01FF);
	
}

void USART1_SendString(char *str)
{
	while(*str)
	{
		if(*str=='\n')
		{
			USART1_SendData('\r');
		}
		
		USART1_SendData(*str++);
	}
}


void TxPrintf(const char *Form, ... )
{
    static char Buff[128];
    va_list ArgPtr;
    va_start(ArgPtr,Form);	 
    vsprintf(Buff, Form, ArgPtr);
    va_end(ArgPtr);
    UART4_SendString(Buff);
}

static void UART4_SendData(const char Data)
{
  /* Transmit Data */ 
	while(!USART_GetFlagStatus(UART4, USART_FLAG_TXE ));
	UART4->DR = (Data & (unsigned short)0x01FF);
	
}

static void UART4_SendString(char *str) // ???? ???? ??
{
    while(*str)
		{
			if(*str=='\n')
			{
				UART4_SendData('\r');
			}
		
			UART4_SendData(*str++);
		}
}

