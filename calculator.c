// calculator.c
#include <stdio.h>
#include "calculator.h"

//adds two numbers
float add(float a, float b) {
    return a + b;
}

//yvtte subtracts two numbers
float subtract(float a, float b) {
    return a - b;
}

// Wendy
 * Multiplies two numbers.
 */
float multiply(float a, float b) {
    return a * b;
}

//mich //Yvtte
 * Divides the first number by the second.
 * Sets error_flag if division by zero is attempted.
 */
float divide(float a, float b, int* error_flag) {
    if (b == 0) {
        *error_flag = 1;
        return 0.0;
    }
    *error_flag = 0;// James
    return a / b;
}
