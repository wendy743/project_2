#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

//will display a user interaction prompts to choose from
//error handling for calculations and to handle user input

int main() {
    int choice;
    float num1, num2, result;
    int error_flag = 0;

    // Show options to the user
    printf("==Simple Calculator ==\n");
    printf("Choose an operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice: ");

    // Check if user input is valid
    if (scanf("%d", &choice) != 1) {
        printf("Oops! Invalid input. Please enter a number.\n");
        return 1;
    }

    if (choice < 1 || choice > 4) {
        printf("Invalid choice! Pick a number from 1 to 4.\n");
        return 1;
    }

    // Get numbers from the user
    printf("Enter the first number: ");
    if (scanf("%f", &num1) != 1) {
        printf("Invalid input for first number.\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%f", &num2) != 1) {
        printf("Invalid input for second number.\n");
        return 1;
    }

    // Perform the selected operation
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
                printf("You can't divide by zero!\n");
                return 1;
            }
            break;
        default:
            // Should never happen because of earlier checks
            printf("Something went wrong.\n");
            return 1;
    }

    // Show the result
    printf("Result: %.2f\n", result);

    return 0;
}
