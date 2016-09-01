#include "gtest/gtest.h"
#include "CTCI/Chapter-1/Q3.h"

TEST(Chapter1, Q3a)
{
    string s = "RACECAR";
    bool state = areStringPermutations(s, s);
    ASSERT_EQ(state, true);
}

TEST(Chapter1, Q3b)
{
    string s = "RACECAR";
    string t = "RACECARS";

    bool state = areStringPermutations(s, t);
    ASSERT_EQ(state, false);
}

TEST(Chapter1, Q3c)
{
string s = "RACECAR";
string t = "RACECAS";

bool state = areStringPermutations(s, t);
ASSERT_EQ(state, false);
}
