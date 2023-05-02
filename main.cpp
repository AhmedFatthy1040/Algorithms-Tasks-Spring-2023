#include <iostream>
#include <cmath>
using namespace std;

const int MAX = 1e5;

int diagonalDifferenceNonRecursive(int arr[][MAX], int n);
void diagonalDifferenceRecursive(int arr[][MAX], int n, int& RightDiagonal, int& LeftDiagonal, int row, int col);

int main() {
    int n, RightDiagonal = 0, LeftDiagonal = 0;
    cin >> n;
    int arr[MAX][MAX];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    /* Solution in Recursive Algorithm */
     diagonalDifferenceRecursive(arr, n, RightDiagonal, LeftDiagonal, 0, 0);
     cout << abs(RightDiagonal - LeftDiagonal);

    /* Solution in Non-Recursive Algorithm */
    // cout << diagonalDifferenceNonRecursive(arr, n);

    return 0;
}

int diagonalDifferenceNonRecursive(int arr[][MAX], int n) {
    int RightDiagonal = 0, LeftDiagonal = 0;
    for (int i = 0; i < n; i++) {
        RightDiagonal += arr[i][i];
        LeftDiagonal += arr[i][n - i - 1];
    }
    return abs(RightDiagonal - LeftDiagonal);
}

void diagonalDifferenceRecursive(int arr[][MAX], int n, int& RightDiagonal, int& LeftDiagonal, int row, int col) {
    if (row == n) {
        return;
    }
    RightDiagonal += arr[row][col];
    LeftDiagonal += arr[row][n - col - 1];
    diagonalDifferenceRecursive(arr, n, RightDiagonal, LeftDiagonal, row + 1, col + 1);
}