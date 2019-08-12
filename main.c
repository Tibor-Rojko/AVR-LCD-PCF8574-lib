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
	
    lcdClear();
    lcdPrint("LCD Library Test");
    lcdSetCursor(2,6);
    lcdPrint("Working");	
    
    while (1) 
    {
	    //Do nothing...
    }
}
