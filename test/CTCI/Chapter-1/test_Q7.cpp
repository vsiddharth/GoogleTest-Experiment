#include "gtest/gtest.h"
#include "CTCI/Chapter-1/Q7.h"

void display(vector<vector<int>> & matrix, int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void build_matrix(vector<vector<int>> & matrix, int m, int n)
{
    matrix.resize(m);

    for (int i = 0; i < m; i++) {
        matrix[i].resize(n);
    }
}

void setup_matrix(vector<vector<int>> & matrix, int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = 1;
        }
    }
}

int matrix_sum(vector<vector<int>> & matrix, int m, int n)
{
    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

TEST(Chapter1, Q7)
{

int m = 3, n = 3;
vector<vector<int>> matrix;

build_matrix(matrix, m, n);
setup_matrix(matrix, m, n);

matrix[1][2] = 0;

int original_sum = matrix_sum(matrix, m, n);

//display(matrix, m, n);

setMatrixRCZero(matrix, m, n);

//display(matrix, m, n);

int current_sum = matrix_sum(matrix, m, n);

ASSERT_GT(original_sum, current_sum);

}