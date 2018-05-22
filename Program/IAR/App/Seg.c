/**
  *******************************  STM8L151K4  *********************************
  * @文件名     ： Seg.c
  * @作者       ： 佘晓凯
  * @库版本     ： V1.6.1
  * @文件版本   ： V1.0.0
  * @日期       ： 2018年05月11日
  * @摘要       ： 数码管
  ******************************************************************************/
/*----------------------------------------------------------------------------
  更新日志:
  2018-05-11 V1.0.0:初始版本
  ----------------------------------------------------------------------------*/
/* 包含的头文件 --------------------------------------------------------------*/
#include "Seg.h"
/* 全局变量 ------------------------------------------------------------------*/
u8 Seg_Data[4]={0,1,2,3};
const u8 seg_duan[10]={0xAF,0x21,0x9D,0xB5,0x33,};


/************************************************
函数名称 ： Seg_Init
功    能 ： 数码管模块初始化
作    者 ： 佘晓凯
摘    要 ： 
*************************************************/	
void Seg_Init(void)
{
  	inline void Seg_Tim2_Init(void);
	inline void Seg_Gpio_Init(void);
  	Seg_Gpio_Init();//数码管GPIO初始化
	Seg_Tim2_Init();//定时器初始化
  	
	
	
}

/************************************************
函数名称 ： Seg_Gpio_Init
功    能 ： GPIO初始化
作    者 ： 佘晓凯
摘    要 ： PB口为数码管段选
			PD[4:7]为数码管位选
*************************************************/	
void Seg_Gpio_Init(void)
{
  	GPIO_Init(GPIOB,GPIO_Pin_All,GPIO_Mode_Out_PP_Low_Slow);
	//PB口设置为推挽输出，2M，初始低
	GPIO_Init(GPIOD,GPIO_Pin_HNib,GPIO_Mode_Out_OD_HiZ_Slow);
	//PD[4:7]口设置为开漏输出，2M，初始高阻
}


/************************************************
函数名称 ： Seg_Tim2_Init
功    能 ： 动态数码管时基初始化
作    者 ： 佘晓凯
摘    要 ： 主频1M，4分频，计625个数，400HZ
*************************************************/	
void Seg_Tim2_Init(void)//定时器初始化
{
  	TIM2_TimeBaseInit(TIM2_Prescaler_4,TIM2_CounterMode_Up,625-1);
	//4分频，向上计数，计625个数
	TIM2_UpdateRequestConfig(TIM2_UpdateSource_Regular);
	//软件更新无效
	TIM2_ITConfig(TIM2_IT_Update,ENABLE);
	//更新中断使能
	ITC_SetSoftwarePriority(TIM2_UPD_OVF_TRG_BRK_IRQn,ITC_PriorityLevel_1);
	//优先级1
	TIM2_Cmd(ENABLE);
	//开始计数；
}


/************************************************
函数名称 ： Seg_Tim_Base
功    能 ： TIM2溢出中断
作    者 ： 佘晓凯
摘    要 ： 21号中断，400HZ
*************************************************/	
#pragma vector = TIM2_OVR_UIF_vector
__interrupt void Seg_Tim_Base( void )
{
  	static u8 seg_wei=0;//数码管当前位
	
  	TIM2_ClearFlag(TIM2_FLAG_Update);//清标志位
	
	if(seg_wei==3)//位选循环
		seg_wei=0;
	else
	  	seg_wei++;
	
	GPIO_SetBits(GPIOD,GPIO_Pin_HNib);//位选关闭
	GPIO_Write(GPIOB,seg_duan[Seg_Data[seg_wei]]);//设置段选
	switch(seg_wei)//打开位选
	{
		case 3:GPIO_ResetBits(GPIOD,GPIO_Pin_4);break;
	  	case 1:GPIO_ResetBits(GPIOD,GPIO_Pin_5);break;
		case 2:GPIO_ResetBits(GPIOD,GPIO_Pin_6);break;
		case 0:GPIO_ResetBits(GPIOD,GPIO_Pin_7);break;
	}

}
	
