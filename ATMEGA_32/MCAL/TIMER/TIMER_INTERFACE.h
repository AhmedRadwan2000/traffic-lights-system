#ifndef TIMER_INTERFACE_H
#define TIMER_INTERFACE_H
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "TIMER_CONFIG.h"
#include "TIMER_PRIVATE.h"


void TIMER0_Init();
void TIMER0_Execute(void (*event) (void), u32 time);
void TIMER0_Restart();


#endif
