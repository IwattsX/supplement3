// source.c
#include <stdbool.h>
#include "temp_utils.h"
#include "number_utils.h"

double fahrenheit_to_celsius(const double fahrenheit){
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}

double celsius_to_fahrenheit(const double celsius){
    return (9.0 / 5.0) * celsius + 32;
}

bool is_even(int num){
    return !(num & 1);
}

