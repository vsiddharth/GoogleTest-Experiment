#include "gtest/gtest.h"
#include "CTCI/Chapter-1/Q5.h"

TEST(Chapter1, Q5a)
{
    string s = "aaabbccccccd";
    string r = RLE(s);

    ASSERT_LE(r, s);
}

TEST(Chapter1, Q5b)
{
string s = "abcd";
string r = RLE(s);

ASSERT_EQ(r, s);
}
