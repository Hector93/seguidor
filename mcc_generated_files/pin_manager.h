/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.76
        Device            :  PIC16F1938
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.00
        MPLAB 	          :  MPLAB X 5.10	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set AN0 aliases
#define AN0_TRIS                 TRISAbits.TRISA0
#define AN0_LAT                  LATAbits.LATA0
#define AN0_PORT                 PORTAbits.RA0
#define AN0_ANS                  ANSELAbits.ANSA0
#define AN0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define AN0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define AN0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define AN0_GetValue()           PORTAbits.RA0
#define AN0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define AN0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define AN0_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define AN0_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set AN1 aliases
#define AN1_TRIS                 TRISAbits.TRISA1
#define AN1_LAT                  LATAbits.LATA1
#define AN1_PORT                 PORTAbits.RA1
#define AN1_ANS                  ANSELAbits.ANSA1
#define AN1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define AN1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define AN1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define AN1_GetValue()           PORTAbits.RA1
#define AN1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define AN1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define AN1_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define AN1_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set AN2 aliases
#define AN2_TRIS                 TRISAbits.TRISA2
#define AN2_LAT                  LATAbits.LATA2
#define AN2_PORT                 PORTAbits.RA2
#define AN2_ANS                  ANSELAbits.ANSA2
#define AN2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define AN2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define AN2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define AN2_GetValue()           PORTAbits.RA2
#define AN2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define AN2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define AN2_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define AN2_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set AN3 aliases
#define AN3_TRIS                 TRISAbits.TRISA3
#define AN3_LAT                  LATAbits.LATA3
#define AN3_PORT                 PORTAbits.RA3
#define AN3_ANS                  ANSELAbits.ANSA3
#define AN3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define AN3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define AN3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define AN3_GetValue()           PORTAbits.RA3
#define AN3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define AN3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define AN3_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define AN3_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set AN4 aliases
#define AN4_TRIS                 TRISAbits.TRISA5
#define AN4_LAT                  LATAbits.LATA5
#define AN4_PORT                 PORTAbits.RA5
#define AN4_ANS                  ANSELAbits.ANSA5
#define AN4_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define AN4_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define AN4_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define AN4_GetValue()           PORTAbits.RA5
#define AN4_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define AN4_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define AN4_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define AN4_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set AN12 aliases
#define AN12_TRIS                 TRISBbits.TRISB0
#define AN12_LAT                  LATBbits.LATB0
#define AN12_PORT                 PORTBbits.RB0
#define AN12_WPU                  WPUBbits.WPUB0
#define AN12_ANS                  ANSELBbits.ANSB0
#define AN12_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define AN12_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define AN12_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define AN12_GetValue()           PORTBbits.RB0
#define AN12_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define AN12_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define AN12_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define AN12_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define AN12_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define AN12_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set AN10 aliases
#define AN10_TRIS                 TRISBbits.TRISB1
#define AN10_LAT                  LATBbits.LATB1
#define AN10_PORT                 PORTBbits.RB1
#define AN10_WPU                  WPUBbits.WPUB1
#define AN10_ANS                  ANSELBbits.ANSB1
#define AN10_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define AN10_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define AN10_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define AN10_GetValue()           PORTBbits.RB1
#define AN10_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define AN10_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define AN10_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define AN10_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define AN10_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define AN10_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set AN8 aliases
#define AN8_TRIS                 TRISBbits.TRISB2
#define AN8_LAT                  LATBbits.LATB2
#define AN8_PORT                 PORTBbits.RB2
#define AN8_WPU                  WPUBbits.WPUB2
#define AN8_ANS                  ANSELBbits.ANSB2
#define AN8_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define AN8_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define AN8_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define AN8_GetValue()           PORTBbits.RB2
#define AN8_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define AN8_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define AN8_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define AN8_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define AN8_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define AN8_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()              PORTCbits.RC1
#define RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)

// get/set RC2 procedures
#define RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RC2_GetValue()              PORTCbits.RC2
#define RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)

// get/set ph2a aliases
#define ph2a_TRIS                 TRISCbits.TRISC3
#define ph2a_LAT                  LATCbits.LATC3
#define ph2a_PORT                 PORTCbits.RC3
#define ph2a_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define ph2a_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define ph2a_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define ph2a_GetValue()           PORTCbits.RC3
#define ph2a_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define ph2a_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)

// get/set ph1a aliases
#define ph1a_TRIS                 TRISCbits.TRISC4
#define ph1a_LAT                  LATCbits.LATC4
#define ph1a_PORT                 PORTCbits.RC4
#define ph1a_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define ph1a_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define ph1a_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define ph1a_GetValue()           PORTCbits.RC4
#define ph1a_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define ph1a_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)

// get/set ph1b aliases
#define ph1b_TRIS                 TRISCbits.TRISC5
#define ph1b_LAT                  LATCbits.LATC5
#define ph1b_PORT                 PORTCbits.RC5
#define ph1b_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define ph1b_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define ph1b_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define ph1b_GetValue()           PORTCbits.RC5
#define ph1b_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define ph1b_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)

// get/set ph2b aliases
#define ph2b_TRIS                 TRISCbits.TRISC7
#define ph2b_LAT                  LATCbits.LATC7
#define ph2b_PORT                 PORTCbits.RC7
#define ph2b_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define ph2b_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define ph2b_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define ph2b_GetValue()           PORTCbits.RC7
#define ph2b_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define ph2b_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/