#include "TIMER_INTERFACE.h"


void (*TIMER_OVF) (void) = 0;
u16 noOfTimes = 0;
u16 counter = 0;

void TIMER0_Init() {
	
	// Select Normal Mode
	CLR_BIT(TCCR0_REG, 3);
	CLR_BIT(TCCR0_REG, 6);
	
	
	// Enable Global Interrupt
	SET_BIT(SREG_REG, 7);
	
	
	// Enable OverFlow Interrupt
	SET_BIT(TIMSK_REG, 0);
	
	// Select Prescaller -> Divide By 8
	CLR_BIT(TCCR0_REG, 0);
	SET_BIT(TCCR0_REG, 1);
	CLR_BIT(TCCR0_REG, 2);
	
}


void TIMER0_Execute(void (*event) (void), u32 time) {

	// Calculating No. of Overflow
	if (time > 256) {

		if (time % 256 > 0) {
			u16 temp = time % 256;
			time = time - temp;
			noOfTimes = (time / 256) + 1;
			TCNT0_REG = 256 - temp;
		} else if (time % 256 == 0) {
			noOfTimes = (time / 256);
		}

	} else if (time == 256) {
		noOfTimes = 1;
	} else if (time < 256) {
		TCNT0_REG = 256 - time;
		noOfTimes = 1;
	}


	
	TIMER_OVF = event;
}


void TIMER0_Restart() {
	TCNT0_REG = 0x00;
	counter = 0;
}


void __vector_11(void) __attribute__((signal, used));
void __vector_11(void) {

	counter = counter + 1;
	if (counter == noOfTimes) {
		
		counter = 0;
		if (TIMER_OVF != 0) {
			TIMER_OVF();
		}
	}
}
