#include "gtest/gtest.h"
#include "CTCI/Chapter-5/Q6.h"

TEST(BitManipulation, Q6a)
{
	int n = 0;
	int res = swapEvenOddBits(n);
	EXPECT_EQ(res, 0);
}

TEST(BitManipulation, Q6b)
{
	int n = 1;
	int res = swapEvenOddBits(n);
	EXPECT_GT(res, 0);
}
