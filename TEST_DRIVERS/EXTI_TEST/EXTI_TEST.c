/*
 * main.c
 *
 * Created: 9/17/2022 3:10:30 PM
 *  Author: Ahmed Redwan
 */ 


/*
#include "EXTI_TEST.h"

void EXTI_ISR(void) {
	SetPinValue(DIO_PORTC, DIO_PIN0, HIGH);
	_delay_ms(500);
	SetPinValue(DIO_PORTC, DIO_PIN1, HIGH);
	_delay_ms(500);
	SetPinValue(DIO_PORTC, DIO_PIN2, HIGH);
	_delay_ms(500);
	SetPinValue(DIO_PORTC, DIO_PIN3, HIGH);
	_delay_ms(500);
	SetPinValue(DIO_PORTC, DIO_PIN4, HIGH);
	_delay_ms(500);
	SetPinValue(DIO_PORTC, DIO_PIN0, LOW);
	_delay_ms(500);
	SetPinValue(DIO_PORTC, DIO_PIN1, LOW);
	_delay_ms(500);
	SetPinValue(DIO_PORTC, DIO_PIN2, LOW);
	_delay_ms(500);
	SetPinValue(DIO_PORTC, DIO_PIN3, LOW);
	_delay_ms(500);
	SetPinValue(DIO_PORTC, DIO_PIN4, LOW);
}


int main(void) {

	SetPortDirection(DIO_PORTA, 0b00011111);
	SetPortDirection(DIO_PORTC, 0b00011111);
	SetPinDirection(DIO_PORTD, DIO_PIN2, INPUT);
	SetPinValue(DIO_PORTD, DIO_PIN2, HIGH);
	EXTI_Init();
	EXTI0(ENABLE, EXTI0_FALLING_EDGE, EXTI_ISR);
	while(1) {
		SetPinValue(DIO_PORTA, DIO_PIN0, HIGH);
		_delay_ms(1000);
		SetPinValue(DIO_PORTA, DIO_PIN1, HIGH);
		_delay_ms(1000);
		SetPinValue(DIO_PORTA, DIO_PIN2, HIGH);
		_delay_ms(1000);
		SetPinValue(DIO_PORTA, DIO_PIN3, HIGH);
		_delay_ms(1000);
		SetPinValue(DIO_PORTA, DIO_PIN4, HIGH);
		_delay_ms(1000);
		SetPinValue(DIO_PORTA, DIO_PIN0, LOW);
		_delay_ms(1000);
		SetPinValue(DIO_PORTA, DIO_PIN1, LOW);
		_delay_ms(1000);
		SetPinValue(DIO_PORTA, DIO_PIN2, LOW);
		_delay_ms(1000);
		SetPinValue(DIO_PORTA, DIO_PIN3, LOW);
		_delay_ms(1000);
		SetPinValue(DIO_PORTA, DIO_PIN4, LOW);
		_delay_ms(1000);
	}

}
*/