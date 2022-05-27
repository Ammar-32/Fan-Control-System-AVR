 /******************************************************************************
 *
 * Module: Temperature Sensor
 *
 * File Name: lm35_sensor.c
 *
 * Description: Source file for the LM35 Temperature Sensor driver
 *
 * Author: Ammar Moataz
 *
 *******************************************************************************/

#include "lm35_sensor.h"
#include "common_macros.h" /* To use the macros like SET_BIT */
#include "adc.h"

/*
 * Description :
 * Function responsible for calculate the temperature from the ADC digital value.
 */
uint8 LM35_getTemperature(void){
	uint8 temperature;
	// Read the channel which sensor is connected to
	uint16 adcValue = ADC_readChannel(LM35_SENSOR_CHANNEL);
	// Calculate the temperature using the following formula
	temperature = (uint8)(((uint32)adcValue*SENSOR_MAX_TEMPERATURE*ADC_REF_VOLT_VALUE)/(ADC_MAXIMUM_VALUE*SENSOR_MAX_VOLTAGE));
	return temperature;
}
