#include <gtest/gtest.h>
#include "temp_utils.h"

TEST(test_temperature, BasicAssertion){
    ASSERT_NEAR(celsius_to_fahrenheit(0.0), 32.0, 0.01);

    ASSERT_NEAR(celsius_to_fahrenheit(100.0), 212.0, 0.01);

    ASSERT_NEAR(fahrenheit_to_celsius(-25.6), -32, 0.01);

    ASSERT_NEAR(fahrenheit_to_celsius(212.0), 100.0, 0.01);

}