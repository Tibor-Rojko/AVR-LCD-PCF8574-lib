/*
 * LCDexample.c
 * Author : Tibor Rojko
 */ 

#include <avr/io.h>
#include "lcd.h"
#include <util/delay.h>

int main(void)
{
    lcdInit();
    while (1) 
    {
		lcdClear();
		lcdPrint("LCD Library Test");
		lcdSetCursor(2,6);
		lcdPrint("Working");
		_delay_ms(1000);
    }
}