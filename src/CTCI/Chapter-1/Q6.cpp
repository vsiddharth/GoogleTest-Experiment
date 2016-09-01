/*
 * Q6:
 */
#include "Q6.h"

void rotate(vector<vector<int>> & a, int n)
{
    for (int i = 0; i < n/2; i++) {
        for (int j = 0; j < n-1-i; j++) {
            int tmp         = a[i][j];
            a[i][j]         = a[n-1-j][i];
            a[n-1-j][i]     = a[n-1-i][n-1-j];
            a[n-1-i][n-1-j] = a[j][n-1-i];
            a[j][n-1-i]     = tmp;
        }
    }
}
