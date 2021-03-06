# Block Diagram
![alt text](https://github.com/sridharankv/M2_Project/blob/main/2_Design/Diagrams/Block%20Diagram.jpg)

# Behavioral diagram

## High level behavioral diagram
![alt text](https://github.com/sridharankv/M2_Project/blob/main/2_Design/Diagrams/High%20level%20behavioral%20diagram.jpeg)

## Low level behavioral diagram

![alt text](https://github.com/sridharankv/M2_Project/blob/main/2_Design/Diagrams/Low%20level%20behavioral%20diagram.jpeg)

# Structural diagram

## High level UML use case diagram

![alt text](https://github.com/sridharankv/M2_Project/blob/main/2_Design/Diagrams/High%20level%20UML%20use%20case.png)

# Components Used

### Keypad

It is customizable in size ( rows and columns ) and key labels. By default it is an standard 12 keys; 4 rows, 3 Columns.

![alt text](https://github.com/sridharankv/M2_Project/blob/main/2_Design/Diagrams/Keypad.png)
### Atmega 328

### Package: 28-pin-PDIP

* 1: Reset
* 2: PD0 RXD0 PCINT16
* 3: PD1 TXD0 PCINT17
* 4: PD2 INT0 PCINT18
* 5: PD3 INT1 OC2B PCINT19
* 6: PD4 T0 XCK0 PCINT20
* 7: Vcc
* 8: Gnd
* 9: PB6 TOSC1 XTAL1 PCINT6
* 10: PB7 TOSC2 XTAL2 PCINT7
* 11: PD5 T1 OC0B PCINT21
* 12: PD6 AIN0 OC0A PCINT22
* 13: PD7 AIN1 PCINT23
* 14: PB0 ICP1 CLKO PCINT0
* 15: PB1 OC1A PCINT1
* 16: PB2 !SS OC1B PCINT2
* 17: PB3 MOSI OC2A PCINT3
* 18: PB4 MISO PCINT4
* 19: PB5 USCK PCINT5
* 20: AVCC
* 21: AREF
* 22: Gnd
* 23: PC0 ADC0 PCINT8
* 24: PC1 ADC1 PCINT9
* 25: PC2 ADC2 PCINT10
* 26: PC3 ADC3 PCINT11
* 27: PC4 ADC4 SDA PCINT12
* 28: PC5 ADC5 SCL PCINT13

### Summary:

* The high-performance Microchip picoPower 8-bit AVR RISC-based microcontroller
* 32 KB ISP flash memory with read-while-write capabilities,
* 1024 B EEPROM,
* 2 KB SRAM,
* 23 general purpose I/O lines,
* 32 general purpose working registers,
* 2 x 8-bit, 1 x 16-bit timer/counters with compare modes,
* 6-channel PWM,
* 1 comparators,
* internal and external interrupts,
* 1 serial programmable USART,
* 1 byte-oriented 2-wire serial interface,
* 1 SPI serial port,
* 6-channel 10-bit A/D converter,
* programmable watchdog timer with internal oscillator,
* 5 software selectable power saving modes.
* The device operates between 1.8-5.5 volts.
![alt text](https://github.com/sridharankv/M2_Project/blob/main/2_Design/Diagrams/Atmega%20328.png)
### Stepper motor

Step by step Motor.

* Configurable number of steps per revolution.
* Configurable coil resistance.
For simplicity and speed, Motor Coils are modelled as resistors.

![alt text](https://github.com/sridharankv/M2_Project/blob/main/2_Design/Diagrams/Stepper%20motor.png)

### Speaker

Connection to default audio output in you machine.

If no default audio device is found, you will se an "X" in the symbol.

![alt text](https://github.com/sridharankv/M2_Project/blob/main/2_Design/Diagrams/Speaker.png)

### Display

HD44780 LCD:

5x8 dot-matrix liquid crystal display based on Hitachi HD44780 LCD controller.

Configurable in characters rows and columns.

![alt text](https://github.com/sridharankv/M2_Project/blob/main/2_Design/Diagrams/Display.png)