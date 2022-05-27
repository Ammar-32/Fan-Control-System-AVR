 /******************************************************************************
 *
 * Module: PWM
 *
 * File Name: pwm.h
 *
 * Description: Header file for the AVR PWM driver
 *
 * Author: Ammar Moataz
 *
 *******************************************************************************/
#ifndef PWM_H_
#define PWM_H_

#include "std_types.h"

/*******************************************************************************
 *                              Functions Prototypes                           *
 *******************************************************************************/
void PWM_Timer0_Start(uint8 duty_cycle);

#endif
