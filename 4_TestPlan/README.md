# HIGH LEVEL TEST PLAN
| Test ID | Description | Exp.i/p |	Exp.o/p | Actual o/p | Type of Test |
| :------:|:-----------:|:-------:|:-------:| :---------:| :-----------:|
| H_01 | Keypad | * | show instructions | shows the instruction | Requirement |
| H_02 | Keypad | # | lock the door | lock the door | Requirement |
| H_03 | Password input from keypad | 1234 | Show welcome on display and unlock the doors | Show welcome on display and unlock the doors | Requirement |
| H_04 | Password input from keypad | 1111 | Show wrong password on display and do not unlock the door | Show wrong password on display and do not unlock the door | Requirement |

# LOW LEVEL TEST PLAN

## LCD/Keypad Configuration Test

| Test ID | Description | Exp.i/p |	Exp.o/p | Actual o/p | Type of Test |
| :------:|:-----------:|:-------:|:-------:| :---------:| :-----------:|
| L_01 | Keypad | 1 |  Display 1 on lcd | Display 1 on lcd | Requirement |
| L_02 | Keypad | 2 |  Display 2 on lcd | Display 2 on lcd | Requirement |
| L_03 | Keypad | 3 |  Display 3 on lcd | Display 3 on lcd | Requirement |
| L_01 | Keypad | 4 |  Display 4 on lcd | Display 4 on lcd | Requirement |
| L_01 | Keypad | 5 |  Display 5 on lcd | Display 5 on lcd | Requirement |
| L_01 | Keypad | 6 |  Display 6 on lcd | Display 6 on lcd | Requirement |
| L_01 | Keypad | 7 |  Display 7 on lcd | Display 7 on lcd | Requirement |
| L_01 | Keypad | 8 |  Display 8 on lcd | Display 8 on lcd | Requirement |
| L_01 | Keypad | 9 |  Display 9 on lcd | Display 9 on lcd | Requirement |
| L_01 | Keypad | 0 |  Display 0 on lcd | Display 0 on lcd | Requirement |
| L_01 | Keypad | * |  Display * on lcd | Display * on lcd | Requirement |
| L_01 | Keypad | # |  Display # on lcd | Display # on lcd | Requirement |

## Motor/Actuator Test

| Test ID | Description | Exp.i/p |	Exp.o/p | Actual o/p | Type of Test |
| :------:|:-----------:|:-------:|:-------:| :---------:| :-----------:|
| 01 | 	Check for right password | 1234 | Stepper motor rotates anticlockwise | Stepper motor rotates anticlockwise | Requirement |
| 02 | 	Check for wrong password | 1212 | Stepper motor shall not ratate | Stepper motor shall not ratate | Requirement |
| 03 | 	Check for right password | 1234 | Stepper motor rotates clockwise | Stepper motor rotates clockwise | Requirement |