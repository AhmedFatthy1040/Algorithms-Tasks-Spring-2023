#include <iostream>
#include <cmath>
using namespace std;

const int MAX = 100;

int DiagonalDifferenceNonRecursive(int arr[][MAX], int n);
void DiagonalDifferenceRecursive(int arr[][MAX], int n, int& RightDiagonal, int& LeftDiagonal, int Row, int Column);

int main() {
    int n, RightDiagonal = 0, LeftDiagonal = 0;
    cin >> n;
    int arr[MAX][MAX];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    /* Solution in Recursive Algorithm */
     DiagonalDifferenceRecursive(arr, n, RightDiagonal, LeftDiagonal, 0, 0);
     cout << abs(RightDiagonal - LeftDiagonal);

    /* Solution in Non-Recursive Algorithm */
    // cout << DiagonalDifferenceNonRecursive(arr, n);

    return 0;
}

int DiagonalDifferenceNonRecursive(int arr[][MAX], int n) {
    int RightDiagonal = 0, LeftDiagonal = 0;
    for (int i = 0; i < n; i++) {
        RightDiagonal += arr[i][i];
        LeftDiagonal += arr[i][n - i - 1];
    }
    return abs(RightDiagonal - LeftDiagonal);
}

void DiagonalDifferenceRecursive(int arr[][MAX], int n, int& RightDiagonal, int& LeftDiagonal, int Row, int Column) {
    if (Row == n) {
        return;
    }
    RightDiagonal += arr[Row][Column];
    LeftDiagonal += arr[Row][n - Column - 1];
    DiagonalDifferenceRecursive(arr, n, RightDiagonal, LeftDiagonal, Row + 1, Column + 1);
}