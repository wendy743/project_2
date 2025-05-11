#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"// wendy//james

// Function to display the menu
void displayMenu() {
    printf("== Simple Calculator ==\n");
    printf("Choose an operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice: ");
}

// Main function that handles user interaction and error checking
int main() {
    int choice;
    float num1, num2, result;
    int error_flag = 0;

    // Display menu
    displayMenu();

    // Get user input for the operation choice
    if (scanf("%d", &choice) != 1) {
        printf("Oops! Invalid input. Please enter a number.\n");
        return 1;
    }

    // Validate choice
    if (choice < 1 || choice > 4) {
        printf("Invalid choice! Pick a number from 1 to 4.\n");
        return 1;
    }

    // Get user input for the two numbers
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

    // Perform the chosen operation
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
            // Should never reach here due to previous validation
            printf("Something went wrong.\n");
            return 1;
    }

    // Output the result of the operation
    printf("Result: %.2f\n", result);

    return 0;
}
// error handling done by wendy //james/mich//yvette