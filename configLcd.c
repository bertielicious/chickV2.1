#include "config.h"
#include "assignData.h"
#include "clock.h"
void configLcd(void)
{
    lcd data;
    __delay_ms(110);    // wait for PSU to settle                   
    lcd data ={0,0x30};      // RS, D7, D6, D5, D4
    assignData(data);           // 8 bit function set               (1)
     __delay_ms(5);
     clock();
     
    lcd data ={0,0x30};    // RS,D7, D6, D5, D4
    assignData(data);           // 8 bit function set               (2)
     __delay_us(200);
     clock();
     
     lcd data ={0,0x30};    // RS,D7, D6, D5, D4                 (3)
    assignData(data);           // 8 bit function set 
     __delay_us(200);
    clock();
    
     lcd data ={0,0x20};    // RS,D7, D6, D5, D4
    assignData(data);           // 4 bit function set               (4)
     __delay_us(200);
     clock();
     
     lcd data ={0,0x20};    // RS, D7, D6, D5, D4
    assignData(data);           // two nibble 4 bit function set    (5a)
     __delay_ms(1);
     clock();
     
     lcd data ={0,0xc0};    // RS, D7, D6, D5, D4
    assignData(data);           // 4 bit function set               (5b)
     __delay_ms(1);
     clock();
     
     lcd data ={0,0xc0};    // RS, D7, D6, D5, D4
    assignData(data);           // display ON/OFF control            (6a)
     __delay_ms(5);
     clock();
     
     lcd data ={0,0x80};    // RS, D7, D6, D5, D4
    assignData(data);           // 4 bit function set               (6b)
     __delay_ms(5);
     clock();
     
     lcd data ={0,0x00};    // RS, D7, D6, D5, D4
    assignData(data);           // clear display                    (7a)
     __delay_ms(5);
     clock();
     
     lcd data ={0,0x10};    // RS, D7, D6, D5, D4
    assignData(data);           // 4 bit mode                       (7b)
     __delay_ms(5);
     clock();
     
     lcd data ={0,0x00};    // RS, D7, D6, D5, D4
    assignData(data);           // entry mode set                   (8a)
     __delay_ms(1);
    clock();
    
     lcd data ={0,0x60};    // RS, D7, D6, D5, D4
    assignData(data);           // 4 bit function set               (8b)
     __delay_ms(5);
     clock();
     
     lcd data ={0,0x00};    // RS, D7, D6, D5, D4
    assignData(data);           // 4 bit function set               (9a)
     __delay_ms(1);
    clock();
    
    lcd data ={0,0xc0};    // RS, D7, D6, D5, D4
    assignData(data);           // display ON/OFF control            (9b)
     __delay_ms(5);
     clock();
     
     
     
}
