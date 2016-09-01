#include "gtest/gtest.h"
#include "CTCI/Chapter-1/Q6.h"

void display_square_matrix(vector<vector<int>> & matrix, int n)
{
    cout << "Matrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void build_square_matrix(vector<vector<int>> & matrix, int n)
{
    matrix.resize(n);

    for (int i = 0; i < n; i++) {
        matrix[i].resize(n);
    }
}

void setup_square_matrix(vector<vector<int>> & matrix, int n)
{
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = ++k;
        }
    }
}

int square_matrix_sum(vector<vector<int>> & matrix, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}


TEST(Chapter1, Q6)
{

int m = 3, n = 3;
vector<vector<int>> matrix;

build_square_matrix(matrix, n);
setup_square_matrix(matrix, n);

int original_sum = square_matrix_sum(matrix, n);

//display_square_matrix(matrix, n);

rotate(matrix, n);

//display_square_matrix(matrix, n);

int current_sum = square_matrix_sum(matrix, n);

ASSERT_EQ(original_sum, current_sum);

}