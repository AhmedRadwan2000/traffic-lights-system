/*
 * TIMER_TEST.c
 *
 * Created: 9/17/2022 3:13:53 PM
 *  Author: Ahmed Redwan
 */ 

/*
#include "TIMER_TEST.h"

void toggle(void) {
	u8 static tog = 0;
	if (tog == 0) {
		SetPinValue(DIO_PORTA, DIO_PIN1, HIGH);
		tog = 1;
		} else if (tog == 1) {
		SetPinValue(DIO_PORTA, DIO_PIN1, LOW);
		tog = 0;
	}
}

int main(void) {

	SetPinDirection(DIO_PORTA, DIO_PIN0, OUTPUT);
	SetPinDirection(DIO_PORTA, DIO_PIN1, OUTPUT);


	TIMER0_Init();
	TIMER0_Execute(toggle, 500000);  // 1000000 for 1 second



	while(1) {
		SetPinValue(DIO_PORTA, DIO_PIN0, HIGH);
		_delay_ms(1000);
		SetPinValue(DIO_PORTA, DIO_PIN0, LOW);
		_delay_ms(1000);
	}




	return 0;
}
*/