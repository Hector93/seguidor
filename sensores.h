/* 
 * File:   sensores.h
 * Author: cmre
 *
 * Created on April 3, 2019, 3:55 PM
 */

#ifndef SENSORES_H
#define	SENSORES_H
#include <stdint.h>
#include "mcc_generated_files/adc.h"
#include "mcc_generated_files/device_config.h"
#include <stdio.h>
#define numSensores 9
#ifdef	__cplusplus
extern "C" {
#endif

void imprimeValoreSensores();
uint16_t getValorSensor(int numSensor);
uint16_t getValorADC(adc_channel_t c);

#ifdef	__cplusplus
}
#endif

#endif	/* SENSORES_H */

