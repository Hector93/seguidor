/* 
 * File:   puenteh.h
 * Author: cmre
 *
 * Created on March 26, 2019, 2:41 PM
 */

#ifndef PUENTEH_H
#define	PUENTEH_H

#ifdef	__cplusplus
extern "C" {
#endif

#define ALTO 0
#define ADELANTE 1
#define ATRAS 2

void motorA(uint8_t status);
void motorB(uint8_t status);
void inicializarMotores();
void setPWMMotor1(uint16_t dutycycle);
void setPWMMotor2(uint16_t dutycycle);
#ifdef	__cplusplus

#endif

#endif	/* PUENTEH_H */

