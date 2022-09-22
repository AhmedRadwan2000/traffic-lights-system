#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H
#include "DIO_PRIVATE.h"
#include "DIO_CONFIG.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"

enum PORT
{
  DIO_PORTA = 1,
  DIO_PORTB = 2,
  DIO_PORTC = 3,
  DIO_PORTD = 4
};

enum DIRECTION
{
	INPUT = 0 ,
	OUTPUT = 1
};

enum PIN
{
  DIO_PIN0 = 0,
  DIO_PIN1 = 1,
  DIO_PIN2 = 2,
  DIO_PIN3 = 3,
  DIO_PIN4 = 4,
  DIO_PIN5 = 5,
  DIO_PIN6 = 6,
  DIO_PIN7 = 7	
};

enum VALUE
{
	LOW  = 0,
	HIGH = 1
};

void SetPinDirection(u8 Port, u8 Pin, u8 Direction);

void SetPinValue(u8 Port, u8 Pin, u8 value);

void SetPortDirection(u8 Port, u8 Direction);

void SetPortValue(u8 Port, u8 Value);

u8 GetPinValue(u8 Port, u8 Pin);


#endif
