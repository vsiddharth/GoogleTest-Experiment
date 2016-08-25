#include "gtest/gtest.h"
#include "CTCI/Chapter-5/Q1.h"

TEST(BitManipulation, Q1)
{
	int N = 1<<10;
	int M = 19;
	int i = 2;
	int j = 6;
	int res = insertBitRange(N, M, i, j);
	ASSERT_GT(res, 0);
}
