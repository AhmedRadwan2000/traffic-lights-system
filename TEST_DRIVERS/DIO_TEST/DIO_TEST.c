/*
 * DIO_TEST.c
 *
 * Created: 9/17/2022 3:13:19 PM
 *  Author: Ahmed Redwan
 */ 

/*
#include "DIO_TEST.h"


void toggle(void) {
	u8 static tog = 0;
	if (tog == 0) {
		SetPinValue(DIO_PORTC, DIO_PIN0, HIGH);
		tog = 1;
		} else if (tog == 1) {
		SetPinValue(DIO_PORTC, DIO_PIN0, LOW);
		tog = 0;
	}
}


int main(void)
{
	SetPinDirection(DIO_PORTA, DIO_PIN0, OUTPUT);
	SetPinDirection(DIO_PORTC, DIO_PIN0, OUTPUT);
	SetPinDirection(DIO_PORTD, DIO_PIN0, INPUT);
	SetPinValue(DIO_PORTD, DIO_PIN0, HIGH);
	
	while(1)
	{
		SetPinValue(DIO_PORTA, DIO_PIN0, HIGH);
		_delay_ms(500);
		SetPinValue(DIO_PORTA, DIO_PIN0, LOW);
		_delay_ms(500);
		if (GetPinValue(DIO_PORTD, DIO_PIN0) == LOW)
		{
			toggle();
		}
	}
}
*/