#include "sensores.h"

void imprimeValoreSensores(){
// lee el valor actuala de los sensores e imprime su valor  
    int i = 0;
    for(i = 1; i < numSensores + 1;i++ ){
          
        printf("S%d : %d \r\n",i,getValorSensor(i));
    }
}
uint16_t getValorADC(adc_channel_t c){
    //ADC_SelectChannel(c);   
    //ADC_StartConversion();
    //while(ADC_IsConversionDone());
    return ADC_GetConversion(c);
    //return ADC_GetConversionResult();
}
// recive el numero de  sensor del sensor al cual queremos leer
uint16_t getValorSensor(int numSensor){
    uint16_t valor = 0;
    switch(numSensor){
        case 1:
            valor = getValorADC(AN0);
        break;
        case 2:
            valor = getValorADC(AN1);
        break;
        case 3:
            valor = getValorADC(AN2);
        break;
        case 4:
            valor = getValorADC(AN3);
        break;
        case 5:
            valor = getValorADC(AN4);
        break;
        case 6:
            valor = getValorADC(AN8);
        break;
        case 7:
            valor = getValorADC(AN10);
        break;
        case 8:
            valor = getValorADC(AN10);
        break;
    }
    return valor;
}