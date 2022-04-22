#ifndef DOOR_LOCK_H
#define DOOR_LOCK_H


#ifndef __AVR_ATmega328__
#define __AVR_ATmega328__
#endif
#define F_CPU 8000000UL
#include "doorLock.h"
#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>



#define LCD_Dir DDRB   /* Define LCD data port direction */
#define LCD_Port PORTB /* Define LCD data port */
#define RS PB0         /* Define Register Select pin */
#define EN PB1         /* Define Enable signal pin */


#define step_PB0 0x04
#define step_PC2 0x16

#define BLUE   step_PB0
#define RED    step_PC2

#define DELAY  300 

/**
 * @brief Performs all the LCD commands
 * @param cmnd
 */
void LCD_Command(unsigned char cmnd); /*LCD Commands initialisation*/

/**
 * @brief Prints Character on the LCD
 * @param data
 */
void LCD_Char(unsigned char data); /*Prints character on screen*/

/**
 * @brief Initialises LCD Screen
 */
void LCD_Init(void); /* LCD Initialize function */

/**
 * @brief Prints string on the LCD Screen
 * @param str
 */
void LCD_String(char *str); /* Send string to LCD function */

/**
 * @brief Displas string by selecting exact rows and columns
 * @param row
 * @param pos
 * @param str
 */
void LCD_String_xy(char row, char pos, char *str); /* Send string to LCD with xy position */

/**
 * @brief Clears LCD Screen
 */
void LCD_Clear(); /*Initialisation of Clearing LCD*/

/**
 * @brief Detect the Kepad button we press
 * @return char
 */

int ro1(void);
int ro2(void);
int ro3(void); 
void unlock(void);
void lock(void);
int pass[4];
int count;
#define keypad_ddr DDRC
#define keypad_prt PORTC
#define keypad_pin PINC





#endif