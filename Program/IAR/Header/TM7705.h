#ifndef TM7705_H
#define TM7705_H



#include "Main.h"

#define DRDY GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_5)

void TM7705_Init(void);
void Send_Cmd(u8);
u16 Read_Data(void);

#endif