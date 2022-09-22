/*
 * BUTTON.h
 *
 * Created: 9/21/2022 3:45:34 PM
 *  Author: Ahmed Redwan
 */ 
#ifndef BUTTON_H
#define BUTTON_H


#include "../../MCAL/DIO/DIO_INTERFACE.h"

void BUTTON_Init(u8 Port, u8 Pin);
u8	 BUTTON_Read(u8 Port, u8 Pin);





#endif