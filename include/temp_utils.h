/**
 * @file temp_utils.h
 * @author Isaac Watts (Isaac.s.watts@gmail.com)
 * @brief contains function declarations of fahrenheit_to_celsius and celsius_to_fahrenheit
 * @version 0.1
 * @date 2024-11-22
 * 
 * 
 */
#ifndef TEMP_UTILS
#define TEMP_UTILS

#ifdef __cplusplus
extern "C" {
#endif

double fahrenheit_to_celsius(const double fahrenheit);

double celsius_to_fahrenheit(const double celsius);

#ifdef __cplusplus
}
#endif

# endif //temp_utils.h