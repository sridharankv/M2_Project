#include "doorLock.h"
#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>
#include <string.h>

void LCD_String(char *str);
void LCD_Init(void);
extern int ro1(void);
extern int ro2(void);
extern int ro3(void);
void unlock(void);
void lock(void);
int main()
{
    
    A1:
    DDRB=0x00;
    DDRC=0x00;
    DDRD=0x00;
    PORTB=0x00;
    PORTC=0x00;
    PORTD=0x00;
    
    int a=0;
    count = 0;
    int password[] = {1, 2, 3, 4};

    
    LCD_Clear();
    LCD_Init();
    int flag = 0;
    LCD_String("H");
    _delay_ms(200);
    LCD_String("e");
    _delay_ms(200);
    LCD_String("l");
    _delay_ms(200);
    LCD_String("l");
    _delay_ms(200);
    LCD_String("o");
    _delay_ms(200);
    LCD_String(".");
    _delay_ms(200);
    LCD_String(".");
    _delay_ms(200);
    LCD_String(".");
    _delay_ms(1000);
A2:
    LCD_Clear();
    LCD_String("E");
    _delay_ms(200);
    LCD_String("n");
    _delay_ms(200);
    LCD_String("t");
    _delay_ms(200);
    LCD_String("e");
    _delay_ms(200);
    LCD_String("r");
    _delay_ms(200);
    LCD_String(" ");
    _delay_ms(200);
    LCD_String("P");
    _delay_ms(200);
    LCD_String("a");
    _delay_ms(200);
    LCD_String("s");
    _delay_ms(200);
    LCD_String("s");
    _delay_ms(200);
    LCD_String("w");
    _delay_ms(200);
    LCD_String("o");
    _delay_ms(200);
    LCD_String("r");
    _delay_ms(200);
    LCD_String("d");
    _delay_ms(600);
    LCD_Clear();
    LCD_String("t");
    _delay_ms(200);
    LCD_String("o");
    _delay_ms(200);
    LCD_String(" ");
    _delay_ms(200);
    LCD_String("u");
    _delay_ms(200);
    LCD_String("n");
    _delay_ms(200);
    LCD_String("l");
    _delay_ms(200);
    LCD_String("o");
    _delay_ms(200);
    LCD_String("c");
    _delay_ms(200);
    LCD_String("k");
    _delay_ms(600);
    
     LCD_Clear();
    LCD_String("O");
    _delay_ms(200);
    LCD_String("R");
    _delay_ms(600);
     LCD_Clear();
    LCD_String("p");
    _delay_ms(200);
    LCD_String("r");
    _delay_ms(200);
    LCD_String("e");
    _delay_ms(200);
    LCD_String("s");
    _delay_ms(200);
    LCD_String("s");
    _delay_ms(200);
    LCD_String(" ");
    _delay_ms(200);
    LCD_String("#");
    _delay_ms(200);
    LCD_String(" ");
    _delay_ms(200);
    LCD_String("t");
    _delay_ms(200);
    LCD_String("o");
    _delay_ms(200);
    LCD_String(" ");
    _delay_ms(200);
    LCD_String("l");
    _delay_ms(200);
    LCD_String("o");
    _delay_ms(200);
    LCD_String("c");
    _delay_ms(200);
    LCD_String("k");
    _delay_ms(1000);
    LCD_Clear();

    DDRC = 0x00;
    DDRD = 0xff;
    
    while (1)
    {
            a=ro1();
            _delay_ms(10);
            if(a==1)
            goto A1;
            ro2();
            _delay_ms(10);
            ro3();
            _delay_ms(10);
        if (count == 4)
        {
            
            if (memcmp(pass, password, sizeof(pass)) == 0)
            {
                LCD_Clear();
                LCD_String("WELCOME");
                unlock();

                count = 0;
                _delay_ms(3000);
                LCD_Clear();
                LCD_String("press # to lock the door");
                goto A1;
            }
            else
            {
                LCD_Clear();
                LCD_String("wrong password");
                PORTB = 0x08;
                _delay_ms(400);
                PORTB = 0x00;
                _delay_ms(400);
                PORTB = 0x08;
                _delay_ms(400);
                PORTB = 0x00; 
                count = 0;
                _delay_ms(3000);
                goto A2;
            }
        }
        
    }
}

void lock(){
    DDRB |= 0x04;    
    PORTB &= 0xf3;
    PORTB = BLUE; 
    _delay_ms(DELAY);
    PORTB &= 0xfb;
    _delay_ms(DELAY);
}
void unlock(){
    
    DDRC |= 0x10;     
    PORTC &= 0xef;
    PORTC = RED;    
    PORTB = 0x08;
    _delay_ms(1000);
    PORTB = 0x00; 
    PORTC &= 0xEF;  
    _delay_ms(DELAY); 

}