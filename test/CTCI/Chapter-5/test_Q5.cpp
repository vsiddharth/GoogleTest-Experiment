#include "gtest/gtest.h"
#include "CTCI/Chapter-5/Q5.h"

TEST(BitManipulation, Q5)
{
	int a = 5, b = 15;
	int nbsw = numBitSwap(a, b);
	EXPECT_EQ(nbsw, 2);
}
