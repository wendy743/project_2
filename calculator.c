// calculator.c
#include <stdio.h>
#include "calculator.h"

// Addition of  two numbers and return the result
float add(float a, float b) {
    return a + b;
}

// Subtraction
float subtract(float a, float b) {
    return a - b;
}

// Multiplication of two values
float multiply(float a, float b) {
    return a * b;
}

// Division of a by b, but checks for zero to avoid crash
float divide(float a, float b, int* error_flag) {
    if (b == 0) {
        *error_flag = 1;  // marks an error that has happened either due to

        return 0.0;       // safe fallback value
    }
    *error_flag = 0;      //  shows is everything okay
    return a / b;
}
