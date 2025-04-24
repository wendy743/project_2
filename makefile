# Makefile for the simple calculator project

# Compiler and flags
CC = gcc
CFLAGS = -Wall -g

# Files
SRC = main.c calculator.c
OBJ = $(SRC:.c=.o)
EXEC = calculator

# Default rule
all: $(EXEC)

# Links object files to create the executable-main purpose of a makefile
$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJ)

# Compile each .c file to .o just like running gcc file.c -o file in a terminal

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# wipes every the executables to be specific
clean:
	rm -f *.o $(EXEC)

# rebuilds everything from scratch
rebuild: clean all
