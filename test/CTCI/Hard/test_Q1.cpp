#include "gtest/gtest.h"
#include "CTCI/Hard/Q1.h"

TEST(Hard, Q1a)
{
	int a = 0, b = 0;
	int r = add(a, b);
	ASSERT_EQ(0, r);
}

TEST(Hard, Q1b)
{
	int a = 1, b = 1;
	int r = add(a, b);
	ASSERT_EQ(2, r);
}
