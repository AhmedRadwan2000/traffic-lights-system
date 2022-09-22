#ifndef EXTI_PRIVATE_H
#define EXTI_PRIVATE_H
#include "../../LIB/STD_TYPES.h"

#define SREG  		*((u8 *) 0x5F)
#define GICR  		*((u8 *) 0x5B)
#define GIFR 		*((u8 *) 0x5A)
#define MCUCR 		*((u8 *) 0x55)
#define MCUCSR  	*((u8 *) 0x54)


#define ENABLE  	1
#define DISABLE 	0

#define EXTI0_LOW_LEVEL  	0
#define EXTI0_ANY_CHANGE    1
#define EXTI0_FALLING_EDGE  2
#define EXTI0_RISING_EDGE   3


#define EXTI1_LOW_LEVEL  	0
#define EXTI1_ANY_CHANGE    1
#define EXTI1_FALLING_EDGE  2
#define EXTI1_RISING_EDGE   3


#define EXTI2_FALLING_EDGE  0
#define EXTI2_RISING_EDGE   1


#endif
