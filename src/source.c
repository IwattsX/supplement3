// source.c
#include <stdbool.h>
#include "temp_utils.h"
#include "number_utils.h"

/**
 * @brief converts from fahrenheit to celsius
 * 
 * @param fahrenheit temperature in fahrenheit
 * @return double degrees in celsius
 */
double fahrenheit_to_celsius(const double fahrenheit){
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}

/**
 * @brief converts from celsius to fahrenheit
 * 
 * @param celsius temperature in celsius
 * @return double degrees in fahrenheit
 */
double celsius_to_fahrenheit(const double celsius){
    return (9.0 / 5.0) * celsius + 32;
}

/**
 * @brief Determines if a number is_even
 * 
 * @param num 
 * @return true if num is even 
 * @return false if the num is odd
 */
bool is_even(int num){
    return !(num & 1);
}

