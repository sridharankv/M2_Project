#include "doorLock.h"
#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>

extern void lock(void);

int ro1(void);
int ro2(void);
int ro3(void);

int ro1(){
    PORTD =0x00;
        PORTD= 0x01;
    if(keypad_pin == 0x01)
    {
        
       _delay_ms(500);
       LCD_String("1");
       _delay_ms(10);
       pass[count]=1;
       count++;
       _delay_ms(10);
       
       
    }
    else if(keypad_pin==0x02)
    {
         _delay_ms(500);
       LCD_String("4");
        _delay_ms(10);
       pass[count]=4;
       count++;
       _delay_ms(10);
    }
    else if(keypad_pin==0x04)
    {
        _delay_ms(500);
       LCD_String("7");
        _delay_ms(10);
       pass[count]=7;
       count++;
       _delay_ms(10);
    }
    else if (keypad_pin==0x08)
    {
         _delay_ms(500);
       LCD_String("*");
       LCD_Clear();
       return 1;
        
    }
    else
        {
            PORTB &=0xfe;
            PORTB &=0xfd;
            PORTB &=0xfb;
            PORTB &=0xf7;
        }
        return 0;
}

int ro2()
{
    PORTD =0x00;
    PORTD= 0x02;
   if(PINC == 0x01)
    {
        
       _delay_ms(500);
       LCD_String("2");
        _delay_ms(10);
       pass[count]=2;
       count++;
       _delay_ms(10);
       
    }
    else if(keypad_pin==0x02)
    {
         _delay_ms(500);
       LCD_String("5");
        _delay_ms(10);
       pass[count]=5;
       count++;
       _delay_ms(10);
    }
    else if(keypad_pin==0x04)
    {
        _delay_ms(500);
       LCD_String("8");
        _delay_ms(10);
       pass[count]=8;
       count++;
       _delay_ms(10);
    }
    else if (keypad_pin==0x08)
    {
         _delay_ms(500);
       LCD_String("0");
        _delay_ms(10);
       pass[count]=0;
       count++;
       _delay_ms(10);
    }
    else
        {
            PORTB &=0xfe;
            PORTB &=0xfd;
            PORTB &=0xfb;
            PORTB &=0xf7;
        }
        return 0;
}

int ro3()
{
    PORTD =0x00;
    PORTD= 0x04;
    if(PINC == 0x01)
    {
        
       _delay_ms(500);
       LCD_String("3");
        _delay_ms(10);
       pass[count]=3;
       count++;
       _delay_ms(10);
       
    }
    else if(keypad_pin==0x02)
    {
         _delay_ms(500);
       LCD_String("6");
        _delay_ms(10);
       pass[count]=6;
       count++;
       _delay_ms(10);
    }
    else if(keypad_pin==0x04)
    {
        _delay_ms(500);
       LCD_String("9");
        _delay_ms(10);
       pass[count]=9;
       count++;
       _delay_ms(10);
    }
    else if (keypad_pin==0x08)
    {
         _delay_ms(500);
       LCD_String("#");
       lock();
       LCD_Clear();
       
    }
    else
        {
            PORTB &=0xfe;
            PORTB &=0xfd;
            PORTB &=0xfb;
            PORTB &=0xf7;
        }
        return 0;
}