#Main application file name
MAIN_APP = doorLock
#Main hex file path in windows format
MAIN_HEX_PATH = C:\Users\kambl\Documents\github\M2_EmbSys\project\3_IMPLEMENTATION\$(MAIN_APP).hex

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


# Compiler and other Section
CC = avr-gcc
OBJCOPY = avr-objcopy.exe

#Options for avr-gcc
CFLAGS = -g -Os -o

#Linking options for avr-gcc
LFLAGS = -Os -mmcu=atmega328 -o

#Options for HEX file generation
HFLAGS = -j .text -j .data -O ihex


# Sources files needed for building the application 
SRC = SRC/$(MAIN_APP).c SRC/keypad.c SRC/lcd.c
# The headers files needed for building the application
INCLUDE =-Iheader\

TEST_SRC =Unity_Test/test_project.c\
Unity_Test/doorLock.c\
Unity_Test/keypad.c\
Unity_Test/lcd.c\
Unity_Test/unity.c

# commands Section
Burn : Build
	$(AVRDUDE) $(DUDEFLAGS)

Build : $(MAIN_APP).elf
	$(OBJCOPY) $(HFLAGS) $< $(MAIN_APP).hex
	
$(MAIN_APP).elf: $(MAIN_APP).o
	$(CC) $(SRC) $(INCLUDE) $(LFLAGS) $@
	
$(MAIN_APP).o:$(SRC)
	$(CC) $^ $(INCLUDE) $(CFLAGS) $@

build_test : 
	gcc $(TEST_SRC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm	
run_test : build_test
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

staticcheck : 
	cppcheck --enable=all -iunity .

dynamic_analysis : build_test
	valgrind ./$(call FixPath,$(PROJ_NAME).$(EXEC))