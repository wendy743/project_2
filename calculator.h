// calculator.c
#include <stdio.h>
#include "calculator.h"

// Addition of  two numbers and return the result
float add(float a, float b) {
    return a + b;//james
}

// Subtraction
float subtract(float a, float b) {
    return a - b;//james
}

// Multiplication of two values
float multiply(float a, float b) {
    return a * b;//yvtte
}

// Divisition of a by b, but checks for zero to avoid crash
float divide(float a, float b, int* error_flag) {
    if (b == 0) {
        *error_flag = 1;  // marks an error that has happened either due touser iput
        return 0.0;       //wendy//mich
    }
    *error_flag = 0;      // everything okay//.../james
    return a / b;
}