#include "DIO_INTERFACE.h"


void SetPinDirection(u8 Port, u8 Pin, u8 Direction) {
	
	switch(Port) {
		
		case DIO_PORTA: 
		if(Direction == INPUT) {
			CLR_BIT(DDRA_REG, Pin);
		} else if(Direction == OUTPUT) {
			SET_BIT(DDRA_REG, Pin);
		}
		break;
		
		case DIO_PORTB: 
		if(Direction == INPUT) {
			CLR_BIT(DDRB_REG, Pin);
		} else if(Direction == OUTPUT) {
			SET_BIT(DDRB_REG, Pin);
		}
		break;
		
		case DIO_PORTC: 
		if(Direction == INPUT) {
			CLR_BIT(DDRC_REG, Pin);
		} else if(Direction == OUTPUT) {
			SET_BIT(DDRC_REG, Pin);
		}
		break;
		
		case DIO_PORTD: 
		if(Direction == INPUT) {
			CLR_BIT(DDRD_REG, Pin);
		} else if(Direction == OUTPUT) {
			SET_BIT(DDRD_REG, Pin);
		}
		break;
		
	}
	
}

void SetPinValue(u8 Port, u8 Pin, u8 Value) {
	
	switch(Port) {
		
		case DIO_PORTA: 
		if(Value == LOW) {
			CLR_BIT(PORTA_REG, Pin);
		} else if(Value == HIGH) {
			SET_BIT(PORTA_REG, Pin);
		}
		break;
		
		case DIO_PORTB: 
		if(Value == LOW) {
			CLR_BIT(PORTB_REG, Pin);
		} else if(Value == HIGH) {
			SET_BIT(PORTB_REG, Pin);
		}
		break;
		
		case DIO_PORTC: 
		if(Value == LOW) {
			CLR_BIT(PORTC_REG, Pin);
		} else if(Value == HIGH) {
			SET_BIT(PORTC_REG, Pin);
		}
		break;
		
		case DIO_PORTD: 
		if(Value == LOW) {
			CLR_BIT(PORTD_REG, Pin);
		} else if(Value == HIGH) {
			SET_BIT(PORTD_REG, Pin);
		}
		break;
		
	}
	
}

void SetPortDirection(u8 Port, u8 Direction) {
	
	switch(Port) {
		
		case DIO_PORTA:
		DDRA_REG = Direction;
		break;
		
		case DIO_PORTB:
		DDRB_REG = Direction;
		break;
		
		case DIO_PORTC:
		DDRC_REG = Direction;
		break;
		
		case DIO_PORTD:
		DDRD_REG = Direction;
		break;
	}
	
}

void SetPortValue(u8 Port, u8 Value) {
	
	switch(Port) {
		
		case DIO_PORTA:
		PORTA_REG = Value;
		break;
		
		case DIO_PORTB:
		PORTB_REG = Value;
		break;
		
		case DIO_PORTC:
		PORTC_REG = Value;
		break;
		
		case DIO_PORTD:
		PORTD_REG = Value;
		break;	
		
	}

}

u8 GetPinValue(u8 Port, u8 Pin) {
	
	switch(Port) {
		case DIO_PORTA:
		return GET_BIT(PINA_REG, Pin);
		break;
		
		case DIO_PORTB:
		return GET_BIT(PINB_REG, Pin);
		break;
		
		case DIO_PORTC:
		return GET_BIT(PINC_REG, Pin);
		break;
		
		case DIO_PORTD:
		return GET_BIT(PIND_REG, Pin);
		break;
	}
	
}
