# Makefile for the simple calculator

CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = calculator

all: $(TARGET)

$(TARGET): main.o calculator.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o calculator.o

main.o: main.c calculator.h
	$(CC) $(CFLAGS) -c main.c

calculator.o: calculator.c calculator.h
	$(CC) $(CFLAGS) -c calculator.c

clean:
	rm -f *.o $(TARGET)
