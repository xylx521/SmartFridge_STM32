#include "stm32f10x.h"           //Device header

int main(void)
{
	
////	RCC->APB2ENR = 0x00000010;	//时钟使能
////	GPIOC->CRH = 0x0030000;		//端口配置高寄存器
////	GPIOC->ODR = 0x00000000;	//端口输出数据寄存器
////	while(1)
////	{
////	}

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
	GPIO_InitTypeDef GPIO_InitStructure;
	
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	
	GPIO_Init(GPIOC,&GPIO_InitStructure);
//	GPIO_SetBits(GPIOC, GPIO_Pin_13);
	GPIO_ResetBits(GPIOC, GPIO_Pin_13);
	while(1)
	{
	}
}
