/*
 * LED_program.c
 *
 * Created: 7/11/2023 2:19:56 PM
 *  Author: mohamed issam
 */ 

#include "DIO_interface.h"
#include "LED_interface.h"
#include "LED_config.h"
#include "STD_TYPES.h"


void LED_vInit(u8 port, u8 pin)
{
	DIO_u8SetPinDirection(port,pin,1);
}

void LED_vTurnOn(u8 port, u8 pin)
{
	 DIO_u8SetPinValue(port,pin,1);
}

void LED_vTurnOff(u8 port, u8 pin)
{
	DIO_u8SetPinValue(port,pin,0);
}