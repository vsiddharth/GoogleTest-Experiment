/* Q1
 */

int insertBitRange(int N, int M, int i, int j)
{
	int mask = (~0 << (j+1)) | ((1 << i) - 1);
	return ((N & mask) | (M << i));
}
