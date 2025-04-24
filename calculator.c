// calculator.c
#include <stdio.h>
#include "calculator.h"

/**
 * Adds two numbers.
 */
float add(float a, float b) {
    return a + b;
}

/**
 * Subtracts the second number from the first.
 */
float subtract(float a, float b) {
    return a - b;
}

/**
 * Multiplies two numbers.
 */
float multiply(float a, float b) {
    return a * b;
}

/**
 * Divides the first number by the second.
 * Sets error_flag if division by zero is attempted.
 */
float divide(float a, float b, int* error_flag) {
    if (b == 0) {
        *error_flag = 1;
        return 0.0;
    }
    *error_flag = 0;
    return a / b;
}
