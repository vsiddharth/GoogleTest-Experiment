int swapEvenOddBits(int n)
{
	return ((n & 0Xaaaaaaaaaaaaaaaa) >> 1) | ((n & 0X5555555555555555) << 1);
}
