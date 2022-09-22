#ifndef EXTI_INTERFACE_H
#define EXTI_INTERFACE_H
#include "../../LIB/STD_TYPES.h" 
#include "../../LIB/BIT_MATH.h"
#include "EXTI_PRIVATE.h"
#include "EXTI_CONFIG.h"

void EXTI_Init();
void EXTI0(u8 Key, u8 SenseControl, void (*EXTI0_ISR) (void));
void EXTI1(u8 Key, u8 SenseControl, void (*EXTI1_ISR) (void));
void EXTI2(u8 Key, u8 SenseControl, void (*EXTI2_ISR) (void));



#endif
