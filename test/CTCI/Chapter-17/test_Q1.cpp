#include "gtest/gtest.h"
#include "CTCI/Chapter-17/Q1.h"

TEST(Chapter17, Q1)
{
	int n = 171;
	int m = 19;
	swap(n, m);
	EXPECT_EQ(19, n);
	EXPECT_EQ(171, m);
}
