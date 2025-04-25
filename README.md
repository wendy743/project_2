# 🧮 Simple Calculator (C Project)//wendy group members
 @wendy
 @mich omolo
 @yvtte

This is a basic calculator program written in C for a structured programming lab assignment. It lets you perform simple arithmetic operations like addition, subtraction, multiplication, and division from the command line.

---

## 📁 Project Structure

//yvtte

---

## ⚙️ How to Compile

To build the program, just use the terminal and type:

```bash
make
//mich
make rebuild
make clean
//how to use 
./calculator
 our error handling features when tested on a terminal
 jamesgitau@jamesgitaus-MacBook-Pro project_2 % ls
README.md	calculator.c	calculator.h	main.c		makefile
jamesgitau@jamesgitaus-MacBook-Pro project_2 % make

gcc -Wall -g -c main.c -o main.o
gcc -Wall -g -c calculator.c -o calculator.o
gcc -Wall -g -o calculator main.o calculator.o
jamesgitau@jamesgitaus-MacBook-Pro project_2 % ./calculator

== Simple Calculator ==
Choose an operation:
1. Add
2. Subtract
3. Multiply
4. Divide
Enter your choice: 1
Enter the first number: 6
Enter the second number: 8
Result: 14.00
jamesgitau@jamesgitaus-MacBook-Pro project_2 % ./calculator
== Simple Calculator ==
Choose an operation:
1. Add
2. Subtract
3. Multiply
4. Divide
Enter your choice: 4
Enter the first number: 5
Enter the second number: 0
You can't divide by zero!
jamesgitau@jamesgitaus-MacBook-Pro project_2 % 
 group members
 @wendy
 @mich omolo
 @yvtte