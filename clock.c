#include "config.h"
void clock(void)
{
    EN = 1;
    __delay_ms(1);
    EN = 0;
}
