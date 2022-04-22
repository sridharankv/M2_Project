# Requirements 

## INTRODUCTION

Many times, we forgot to carry the key of our home. Or sometimes we come out of our home and door latch closes by mistake. In these cases, it is really difficult to get inside the house. This project is designed to solve this purpose. Main concept behind this project is of a door-latch opening using a password entered through keypad. As well as turning on the Buzzer when password is entered wrong. Today people are facing more problems about security in all over world, nowadays security is the most essential issue everywhere in the world so security of everything gains higher and higher importance in recent years. The main component in the circuit is 8051 microcontrollers. Here, 4*4 keypad is used to enter the password. The entered password is compared with the predefined password. If it is correct password, the system opens the door by rotating door motor and displays the status of door on LCD. If the password is wrong then door remains closed and displays ―password is wrong on LCD. It can be used at organizations to ensure authorized access to highly secured places. With a slight modification by replacing the motor driver with a relay driver, this circuit can be used to control the switching of loads through code. This circuit can be also modified by using EEPROM chip interfaced to the microcontroller and store the entered password in the chip. Such an automatic lock system consists of electronic control assembly which controls the output load through a password. This output load can be a motor or a lamp or any other mechanical/electrical load.

## Block diagram

![alt text](https://github.com/sridharankv/M2_Project/blob/main/2_Design/Diagrams/Block%20Diagram.jpg)


## Identifying features

* Screen guides how to enter the password.
* secure
* easy to use
* No crashing happens so that work can be done without any breaks.

## State of art/ Research

we need door lock system for securty purposes

## Requirnments for this project are
### hardware requirnments
* microcontroller
*  stepper motor
*  keypad
*  buzzer
*  lcd display
*  motor driver controller
*  power source, etc

## High Level Requirements

| ID | Decription | Category | Status |
| :-: |:---------:|:--------:|:------:|
| HLR1 | System shall control Door locks by pressing a number on Keypad | Technical | Implemented |
| HLR2 | There shall be a LCD to display the numbers we press | Technical | Implemented |
| HLR3 | A password shall be provided for our system | Technical | Implemented |

## Low Level Requirements

| ID | Description | HLR ID | Status (Implemented/Future) |
|:-:|:-----------:|:------:|:----------------------------:|
| LLR1.1 | According to the values of Keypad door locks shall be controlled | HLR1 | IMPLEMENTED |
| LLR1.2 | There shall be a sound output for the door lock | HLR1 | IMPLEMENTED |
| LLR2.1 | Entered value on keypad shall be displayed on LCD Screen | HLR2 | IMPLEMENTED |
| LLR2.2 | Whether the door is locked or not shall be displayed on screen | HLR2 | IMPLEMENTED |
| LLR3.1 | Device shall open the door lock when the Password is matched | HLR3 | IMPLEMENTED |
| LLR3.2 | Device shall ask to Re-Enter the Password again if entered one is wrong | HLR3 | IMPLEMENTED |
