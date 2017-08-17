#include "delay.h"

void delay_us(int cnt)
{
    unsigned int i,j;
    for(i=0;i<cnt;i++)
        for(j=0;j<5200;j++);
}

void delay_ms(unsigned int ms)
{
    unsigned int i,j;

    for(i=0;i<ms;i++)
        for(j=0;j<20000;j++);
}
