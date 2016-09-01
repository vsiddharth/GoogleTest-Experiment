#include "gtest/gtest.h"
#include "CTCI/Chapter-1/Q8.h"

TEST(Chapter1, Q8a)
{
string s = "waterbottle";
string t = "erbottlewat";

bool state = isStringRotation(s, t);
ASSERT_EQ(state, true);
}

TEST(Chapter1, Q8b)
{
string s = "waterbottle";
string t = "erbotelewat";

bool state = isStringRotation(s, t);
ASSERT_EQ(state, false);
}
