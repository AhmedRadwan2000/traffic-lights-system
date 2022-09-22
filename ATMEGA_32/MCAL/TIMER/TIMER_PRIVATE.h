#ifndef TIMER_PRIVATE_H
#define TIMER_PRIVATE_H

#include "../../LIB/STD_TYPES.h"

#define SREG_REG	 *((u8 *) 0x5f)
#define TIMSK_REG    *((u8 *) 0x59)
#define TIFR_REG     *((u8 *) 0x58)
#define TCCR0_REG    *((u8 *) 0x53)
#define TCNT0_REG    *((u8 *) 0x52)
#define OCR0_REG     *((u8 *) 0x5c)



#endif
