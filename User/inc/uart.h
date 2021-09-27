#ifndef __UART_H
#define __UART_H




extern void USART1_Init(void);
extern void UART4_Init(void);

extern void TxPrintf(const char *Form, ... );

void USART1_SendData(char Data);
void USART1_SendString(char *str);

static void UART4_SendData(char Data);
static void UART4_SendString(char *str);




#endif



