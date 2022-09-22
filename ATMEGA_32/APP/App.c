/*
 * main.c
 *
 *  Created on: Aug 21, 2022
 *      Author: Ahmed Redwan
 */
#include "App.h"

void normalMode();
void pedestrianMode();
void switchMode();
void turnInc();

u8 turn = 1;
u8 state = 1;
u8 mode = 1; // 1 -> Normal Mode,	0 -> Pedestrian Mode

int App_Start(void) {

	LED_Init(DIO_PORTA, DIO_PIN0); // Green Led in PortA
	LED_Init(DIO_PORTA, DIO_PIN1); // Yellow Led in PortA
	LED_Init(DIO_PORTA, DIO_PIN2); // Red Led in PortA

	LED_Init(DIO_PORTB, DIO_PIN0); // Green Led in PortB
	LED_Init(DIO_PORTB, DIO_PIN1); // Yellow Led in PortB
	LED_Init(DIO_PORTB, DIO_PIN2); // Red Led in PortB

	BUTTON_Init(DIO_PORTD, DIO_PIN2);

	SetPortDirection(DIO_PORTC, 0b11111111);

	// Enable Timer0
	TIMER0_Init();
	TIMER0_Execute(turnInc, 5000000); // 1000000 for 1 second.

	// Enable External Interrupt
	EXTI_Init();
	EXTI0(ENABLE, EXTI0_FALLING_EDGE, switchMode);

	while (1) {
		if (mode) {
			normalMode();

		} else {
			pedestrianMode();
		}
	}

	return 0;
}

void normalMode() {

	if(turn == 1) {
		state = 1;
		LED_On(DIO_PORTA, DIO_PIN0);
		LED_Off(DIO_PORTA, DIO_PIN1);
		LED_Off(DIO_PORTA, DIO_PIN2);
		
		LED_Off(DIO_PORTB, DIO_PIN0);
		LED_Off(DIO_PORTB, DIO_PIN1);
		LED_On(DIO_PORTB, DIO_PIN2);
	} else if(turn == 2) {
		state = 2;
		LED_On(DIO_PORTA, DIO_PIN0);
		LED_On(DIO_PORTA, DIO_PIN1);
		LED_Off(DIO_PORTA, DIO_PIN2);
		
		LED_Off(DIO_PORTB, DIO_PIN0);
		LED_On(DIO_PORTB, DIO_PIN1);
		LED_On(DIO_PORTB, DIO_PIN2);
		// blink
		while (turn == 2) {
			_delay_ms(500);
			LED_Off(DIO_PORTA, DIO_PIN1);
			LED_Off(DIO_PORTB, DIO_PIN1);
			_delay_ms(500);
			LED_On(DIO_PORTA, DIO_PIN1);
			LED_On(DIO_PORTB, DIO_PIN1);
		}
	} else if(turn == 3) {
		state = 3;
		LED_Off(DIO_PORTA, DIO_PIN0);
		LED_Off(DIO_PORTA, DIO_PIN1);
		LED_On(DIO_PORTA, DIO_PIN2);
		
		LED_On(DIO_PORTB, DIO_PIN0);
		LED_Off(DIO_PORTB, DIO_PIN1);
		LED_Off(DIO_PORTB, DIO_PIN2);
	} else if(turn == 4) {
		state = 4;
		LED_Off(DIO_PORTA, DIO_PIN0);
		LED_On(DIO_PORTA, DIO_PIN1);
		LED_On(DIO_PORTA, DIO_PIN2);
		
		LED_On(DIO_PORTB, DIO_PIN0);
		LED_On(DIO_PORTB, DIO_PIN1);
		LED_Off(DIO_PORTB, DIO_PIN2);
		// blink
		while (turn == 4) {
			_delay_ms(500);
			LED_Off(DIO_PORTA, DIO_PIN1);
			LED_Off(DIO_PORTB, DIO_PIN1);
			_delay_ms(500);
			LED_On(DIO_PORTA, DIO_PIN1);
			LED_On(DIO_PORTB, DIO_PIN1);
		}
	}
}

void pedestrianMode() {

	if (state == 1) {

		if (turn == 1) {

			LED_On(DIO_PORTA, DIO_PIN0);
			LED_On(DIO_PORTA, DIO_PIN1);
			LED_Off(DIO_PORTA, DIO_PIN2);
		
			LED_Off(DIO_PORTB, DIO_PIN0);
			LED_On(DIO_PORTB, DIO_PIN1);
			LED_On(DIO_PORTB, DIO_PIN2);

			// blink
			while (turn == 1) {
				_delay_ms(500);
				LED_Off(DIO_PORTA, DIO_PIN1);
				LED_Off(DIO_PORTB, DIO_PIN1);
				_delay_ms(500);
				LED_On(DIO_PORTA, DIO_PIN1);
				LED_On(DIO_PORTB, DIO_PIN1);
			}
		} else if (turn == 2) {

			LED_Off(DIO_PORTA, DIO_PIN0);
			LED_Off(DIO_PORTA, DIO_PIN1);
			LED_On(DIO_PORTA, DIO_PIN2);
		
			LED_On(DIO_PORTB, DIO_PIN0);
			LED_Off(DIO_PORTB, DIO_PIN1);
			LED_Off(DIO_PORTB, DIO_PIN2);
		} else if (turn == 3) {

			LED_Off(DIO_PORTA, DIO_PIN0);
			LED_On(DIO_PORTA, DIO_PIN1);
			LED_On(DIO_PORTA, DIO_PIN2);
		
			LED_On(DIO_PORTB, DIO_PIN0);
			LED_On(DIO_PORTB, DIO_PIN1);
			LED_Off(DIO_PORTB, DIO_PIN2);
			// blink
			while (turn == 3) {
				_delay_ms(500);
				LED_Off(DIO_PORTA, DIO_PIN1);
				LED_Off(DIO_PORTB, DIO_PIN1);
				_delay_ms(500);
				LED_On(DIO_PORTA, DIO_PIN1);
				LED_On(DIO_PORTB, DIO_PIN1);
			}
			mode = 1;
			turn = 1;

		}
		
	} else if (state == 4) {

		if (turn == 1) {

			LED_Off(DIO_PORTA, DIO_PIN0);
			LED_Off(DIO_PORTA, DIO_PIN1);
			LED_On(DIO_PORTA, DIO_PIN2);
			
			LED_On(DIO_PORTB, DIO_PIN0);
			LED_Off(DIO_PORTB, DIO_PIN1);
			LED_Off(DIO_PORTB, DIO_PIN2);
		} else if (turn == 2) {

			LED_Off(DIO_PORTA, DIO_PIN0);
			LED_On(DIO_PORTA, DIO_PIN1);
			LED_On(DIO_PORTA, DIO_PIN2);
			
			LED_On(DIO_PORTB, DIO_PIN0);
			LED_On(DIO_PORTB, DIO_PIN1);
			LED_Off(DIO_PORTB, DIO_PIN2);
			// blink
			while (turn == 2) {
				_delay_ms(500);
				LED_Off(DIO_PORTA, DIO_PIN1);
				LED_Off(DIO_PORTB, DIO_PIN1);
				_delay_ms(500);
				LED_On(DIO_PORTA, DIO_PIN1);
				LED_On(DIO_PORTB, DIO_PIN1);
			}
			mode = 1;
			turn = 1;
		}
	}
}

void switchMode() {
	if (mode) {
		if (state == 1 || state == 4) {
			TIMER0_Restart();
			mode = 0;
			turn = 1;
		}
	}
}

void turnInc() {
	turn = turn + 1;
	if (turn == 5)
		turn = 1;
}
