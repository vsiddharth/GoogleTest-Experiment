#include "gtest/gtest.h"
#include "CTCI/Chapter-1/Q2.h"

TEST(Chapter1, Q2)
{
    string s = "SIDDHARTH";
    string t(s);

    string_reverse(s);
    string_reverse(s);

    ASSERT_EQ(s, t);
}