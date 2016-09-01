/*
 * Q7:
 */

#include "Q7.h"

void setMatrixRCZero(vector<vector<int>> & matrix, int row, int column)
{
    vector<int> vr(row, 0);
    vector<int> vc(column, 0);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (matrix[i][j] == 0) {
                vr[i] = 1;
                vc[j] = 1;
            }
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (vr[i] || vc[j]) {
                matrix[i][j] = 0;
            }
        }
    }
}