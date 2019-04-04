#include <stdlib.h>
#include "../mcc_generated_files/mcc.h"
#include "../puenteh.h"
#include "../mcc_generated_files/epwm1.h"
#include "../mcc_generated_files/epwm2.h"
void motorA(uint8_t status){
    switch (status){
        case ALTO:
            ph1a_SetLow();
            ph1b_SetLow();
        case ADELANTE:
            ph1a_SetHigh();
            ph1b_SetLow();
        case ATRAS:
            ph1a_SetLow();
            ph1b_SetHigh();
        
    }
    
}

void setPWMMotor1(uint16_t dutycycle){
     EPWM1_LoadDutyValue(dutycycle);
}
void setPWMMotor2(uint16_t dutycycle){
     EPWM2_LoadDutyValue(dutycycle);
}


void motorB(uint8_t status){
    switch (status){
        case ALTO:
            ph2a_SetLow();
            ph2b_SetLow();
            break;
        case ADELANTE:
            ph2a_SetHigh();
            ph2b_SetLow();
            break;
        case ATRAS:
            ph2a_SetLow();
            ph2b_SetHigh();
            break;
      
    }
    
}
