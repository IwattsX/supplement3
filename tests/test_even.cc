#include <gtest/gtest.h>
#include "number_utils.h"

TEST(test_even_nums, BasicAssertion){
    ASSERT_EQ(is_even(1), false);

    ASSERT_EQ(is_even(2), true);

    ASSERT_EQ(is_even(100), true);

    ASSERT_EQ(is_even(2003), false);

}