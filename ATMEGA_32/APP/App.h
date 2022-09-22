/*
 * App.h
 *
 * Created: 9/17/2022 2:55:30 PM
 *  Author: Ahmed Redwan
 */ 
#ifndef APP_H
#define APP_H

#include "../MCAL/DIO/DIO_INTERFACE.h"
#include "../MCAL/EXTI/EXTI_INTERFACE.h"
#include "../MCAL/TIMER/TIMER_INTERFACE.h"
#include "../HAL/LED/LED.h"
#include "../HAL/BUTTON/BUTTON.h"
#define F_CPU 8000000UL
#include <util/delay.h>

int App_Start(void);


#endif