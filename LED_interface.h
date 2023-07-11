/*
 * LED_interface.h
 *
 * Created: 7/11/2023 2:19:27 PM
 *  Author: mohamed issam
 */ 


#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

void LED_vInit(u8 port, u8 pin);

void LED_vTurnOn(u8 port, u8 pin);

void LED_vTurnOff(u8 port, u8 pin);



#endif /* LED_INTERFACE_H_ */