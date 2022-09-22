/*
 * LED.c
 *
 * Created: 9/21/2022 3:46:37 PM
 *  Author: Ahmed Redwan
 */ 
#include "LED.h"


void LED_Init(u8 Port, u8 Pin) {
	
	SetPinDirection(Port, Pin, OUTPUT);
}


void LED_On(u8 Port, u8 Pin) {
	
	SetPinValue(Port, Pin, HIGH);
}


void LED_Off(u8 Port, u8 Pin) {
	
	SetPinValue(Port, Pin, LOW);
}
