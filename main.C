// main.c
#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

 // Displays the menu and handles user interaction.
  //Includes basic error handling for input and calculation.
 //james //yvtte
int main() {
    int choice;
    float num1, num2, result;
    int error_flag = 0;

    printf("==== Simple Calculator ====\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice (1-4): ");
//Yvette
    if (scanf("%d", &choice) != 1 || choice < 1 || choice > 4) {
        printf("Invalid input! Please enter a number between 1 and 4.\n");
        return 1;
    }

    printf("Enter two numbers: ");
    if (scanf("%f %f", &num1, &num2) != 2) {
        printf("Invalid input! Please enter valid numbers.\n");
        return 1;
    }
// Wendy
    switch (choice) {
        case 1:
            result = add(num1, num2);
            break;
        case 2:
            result = subtract(num1, num2);
            break;
        case 3:
            result = multiply(num1, num2);
            break;
        case 4:
            result = divide(num1, num2, &error_flag);
            if (error_flag) {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            break;
    }

    printf("Result: %.2f\n", result);
    return 0;
}
