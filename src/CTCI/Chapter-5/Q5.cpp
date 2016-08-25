int getNumberOnBits(int n)
{
	int count = 0;
	while (n) {
		n &= n-1;
		++count;
	}
	return count;
}

int numBitSwap(int a, int b)
{
	return getNumberOnBits(a ^ b);
}
