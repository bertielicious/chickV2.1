#include "config.h"
#include <stdio.h>
void assignData(lcd s)
{
    PORTCbits.RC4 = s.RS;
    PORTBbits.RB5 = s.fourBitdata >> 3 ;
    PORTBbits.RB6 = s.fourBitdata>> 2;
    PORTCbits.RC7 = s.fourBitdata>> 1 ;
    PORTCbits.RC6 = s.fourBitdata>> 0 ; 
}
