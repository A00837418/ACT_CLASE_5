#include <gtest/gtest.h>
#include "mult.h"

TEST(MultTest, HandlesPositiveInput)
{
    double result = multiply(3, 4);
    EXPECT_EQ(result, 12);
}

