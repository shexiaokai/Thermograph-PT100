/**
  *******************************  STM8L151K4  *********************************
  * @文件名     ： TM7705.c
  * @作者       ： 佘晓凯
  * @库版本     ： V1.6.1
  * @文件版本   ： V1.0.0
  * @日期       ： 2018年05月12日
  * @摘要       ： 数码管
  ******************************************************************************/
/*----------------------------------------------------------------------------
  更新日志:
  2018-05-12 V1.0.0:初始版本
  ----------------------------------------------------------------------------*/
/* 包含的头文件 --------------------------------------------------------------*/
  
#include "TM7705.h"
	u16 a=0;
/* 全局变量 ------------------------------------------------------------------*/
void TM7705_Init(void)
{
  	
	//GPIO配置
  	//SCLK（PA2），DIN配置（PA3）
	GPIO_Init(GPIOA,GPIO_Pin_2|GPIO_Pin_3,GPIO_Mode_Out_PP_Low_Slow);
	//DOUT(PA4)，DRDY（PA5）配置
	GPIO_Init(GPIOA,GPIO_Pin_4|GPIO_Pin_5,GPIO_Mode_In_PU_No_IT);
	//RST配置
	GPIO_Init(GPIOD,GPIO_Pin_0,GPIO_Mode_Out_PP_Low_Slow);
	Delay(1000);
	GPIO_SetBits(GPIOD,GPIO_Pin_0);
	//复位
	
	Delay(1000);
	Send_Cmd(0x39);
	a=Read_Data();
	
	
}


//读取16位数据
u16 Read_Data(void)
{
  	u16 data=0;
  	u8 i=0;
  	//while(DRDY);
	for(i=0;i<16;i++)
	{
	  	data<<=1;
	  	GPIO_SetBits(GPIOA,GPIO_Pin_2);
		Delay(100);
		GPIO_ResetBits(GPIOA,GPIO_Pin_2);
		if(GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_4))
			data|=0x01;
		
	}
	return data;
}

void Send_Cmd(u8 cmd)
{
  	u8 i=0;
	
  	//while(DRDY);
	for(i=0;i<8;i++)
	{
		if(cmd&0x80)
			GPIO_SetBits(GPIOA,GPIO_Pin_3);
		else
		  	GPIO_ResetBits(GPIOA,GPIO_Pin_3);
		Delay(100);
		GPIO_SetBits(GPIOA,GPIO_Pin_2);
		Delay(100);
		GPIO_ResetBits(GPIOA,GPIO_Pin_2);
		cmd<<=1;
	}
}

