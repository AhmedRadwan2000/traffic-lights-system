#include "EXTI_INTERFACE.h"

void (*EXTI0_GLOBAL_ISR) (void) = 0;
void (*EXTI1_GLOBAL_ISR) (void) = 0;
void (*EXTI2_GLOBAL_ISR) (void) = 0;

void EXTI_Init() {
	
	// Enable Global Interrupt
	SET_BIT(SREG, 7);
	
	// Clear Interrupt Flags
	CLR_BIT(GIFR, 5);
	CLR_BIT(GIFR, 6);
	CLR_BIT(GIFR, 7);
	
	// Disable All the External Interrupt
	CLR_BIT(GICR, 5);
	CLR_BIT(GICR, 6);
	CLR_BIT(GICR, 7);
	
	
}



void EXTI0(u8 Key, u8 SenseControl, void (*EXTI0_ISR) (void)) {
	
	
	if (Key == ENABLE) {
		
		SET_BIT(GICR, 6);
	
	} else if (Key == DISABLE) {
	
		CLR_BIT(GICR, 6);
	
	}
	
	switch (SenseControl) {
	
		case EXTI0_LOW_LEVEL:
			CLR_BIT(MCUCR, 0);
			CLR_BIT(MCUCR, 1);
			break;
			
		case EXTI0_ANY_CHANGE:
			SET_BIT(MCUCR, 0);
			CLR_BIT(MCUCR, 1);
			break;
			
		case EXTI0_FALLING_EDGE:
			CLR_BIT(MCUCR, 0);
			SET_BIT(MCUCR, 1);
			break;
			
		case EXTI0_RISING_EDGE:
			SET_BIT(MCUCR, 0);
			SET_BIT(MCUCR, 1);
			break;
	
	
	}
	
	EXTI0_GLOBAL_ISR = EXTI0_ISR;
	
	
}



void EXTI1(u8 Key, u8 SenseControl, void (*EXTI1_ISR) (void)) {
	
	
		if (Key == ENABLE) {
			
			SET_BIT(GICR, 7);
		
		} else if (Key == DISABLE) {
		
			CLR_BIT(GICR, 7);
		
		}
		
		switch (SenseControl) {
		
			case EXTI1_LOW_LEVEL:
				CLR_BIT(MCUCR, 2);
				CLR_BIT(MCUCR, 3);
				break;
				
			case EXTI1_ANY_CHANGE:
				SET_BIT(MCUCR, 2);
				CLR_BIT(MCUCR, 3);
				break;
				
			case EXTI1_FALLING_EDGE:
				CLR_BIT(MCUCR, 2);
				SET_BIT(MCUCR, 3);
				break;
				
			case EXTI1_RISING_EDGE:
				SET_BIT(MCUCR, 2);
				SET_BIT(MCUCR, 3);
				break;
		
		
		}
		
		EXTI1_GLOBAL_ISR = EXTI1_ISR;
	
	
}



void EXTI2(u8 Key, u8 SenseControl, void (*EXTI2_ISR) (void)) {
	
	
		if (Key == ENABLE) {
			
			SET_BIT(GICR, 5);
		
		} else if (Key == DISABLE) {
			
			CLR_BIT(GICR, 5);
			
		}
		
		switch (SenseControl) {
		
			case EXTI2_FALLING_EDGE:
				CLR_BIT(MCUCSR, 6);
				break;
				
			case EXTI2_RISING_EDGE:
				SET_BIT(MCUCSR, 6);
				break;
	
	
	}
	
	
	EXTI2_GLOBAL_ISR = EXTI2_ISR;
	
	
}


void __vector_1(void) __attribute__((signal, used));
void __vector_1(void) {
	EXTI0_GLOBAL_ISR();
}


void __vector_2(void) __attribute__((signal, used));
void __vector_2(void) {
	EXTI1_GLOBAL_ISR();
}


void __vector_3(void) __attribute__((signal, used));
void __vector_3(void) {
	EXTI2_GLOBAL_ISR();
}
