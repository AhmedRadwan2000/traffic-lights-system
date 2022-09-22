/*
 * BUTTON.c
 *
 * Created: 9/21/2022 3:45:19 PM
 *  Author: Ahmed Redwan
 */ 
#include "BUTTON.h"



void BUTTON_Init(u8 Port, u8 Pin) {
	
	SetPinDirection(Port, Pin, INPUT);
	
	// Enable pull up resistor
	SetPinValue(Port, Pin, HIGH);
}


u8	 BUTTON_Read(u8 Port, u8 Pin) {
	
	return GetPinValue(Port, Pin);
}