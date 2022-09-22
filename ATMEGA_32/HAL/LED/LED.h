/*
 * LED.h
 *
 * Created: 9/21/2022 3:46:47 PM
 *  Author: Ahmed Redwan
 */ 
#ifndef LED_H
#define LED_H

#include "../../MCAL/DIO/DIO_INTERFACE.h"

void LED_Init(u8 Port, u8 Pin);
void LED_On(u8 Port, u8 Pin);
void LED_Off(u8 Port, u8 Pin);
void LED_Toggle(u8 Port, u8 Pin);



#endif