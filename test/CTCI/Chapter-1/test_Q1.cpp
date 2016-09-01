#include "gtest/gtest.h"
#include "CTCI/Chapter-1/Q1.h"

TEST(Chapter1, Q1a)
{
    string s = "AMEY";
    bool state = isStringUnique(s);
    //cout << std::boolalpha << state << endl;
    ASSERT_EQ(state, true);
}

TEST(Chapter1, Q1b)
{
    string s = "AMEYA";
    bool state = isStringUnique(s);
    ASSERT_EQ(state, false);
}
