/*
 * traffic.c
 *
 * Created: 7/11/2023 2:17:58 PM
 *  Author: mohamed issam
 */ 

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "CLCD_interface.h"
#include "LED_interface.h"
#include "LED_config.h"

#define  F_CPU 8000000UL
#include <util/delay.h>

#include <avr/io.h>

int main(void)
{
	LED_vInit(LED_PORT,LED_GRE);
	LED_vInit(LED_PORT,LED_YEW);
	LED_vInit(LED_PORT,LED_RED);
	CLCD_vInit();
	CLCD_vGoToXY(0,0);
	CLCD_vSendString("REMAINING");
	CLCD_vGoToXY(0,13);
	CLCD_vSendString("sec");
	
	u8 Local_countertime=0;
	
    while(1)
    {
		 LED_vTurnOn(LED_PORT,LED_GRE);
		for (Local_countertime=9;Local_countertime>0;Local_countertime--)
		{
			CLCD_vGoToXY(0,10);
			CLCD_vWriteNumber(Local_countertime);
			_delay_ms(1000);
		}
		LED_vTurnOff(LED_PORT,LED_GRE);
		
		LED_vTurnOn(LED_PORT,LED_YEW);
		for (Local_countertime=3;Local_countertime>0;Local_countertime--)
		{
			CLCD_vGoToXY(0,10);
			CLCD_vWriteNumber(Local_countertime);
			_delay_ms(1000);
		}
		LED_vTurnOff(LED_PORT,LED_YEW);
		
		LED_vTurnOn(LED_PORT,LED_RED);
		for (Local_countertime=9;Local_countertime>0;Local_countertime--)
		{
			CLCD_vGoToXY(0,10);
			CLCD_vWriteNumber(Local_countertime);
			_delay_ms(1000);
		}
		LED_vTurnOff(LED_PORT,LED_RED);
       
    }
}