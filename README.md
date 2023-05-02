# Algorithms-Tasks-Spring-2023
Given  a  square  matrix,  calculate  the  absolute  difference  between  the  sums  of  its diagonals.

## This is The Pseudo Code of The Recursive Algorithm
CONST MAX ← 100

PROCEDURE DiagonalDifferenceRecursive(arr: ARRAY[MAX][MAX], n: INTEGER, RightDiagonal: INTEGER, LeftDiagonal: INTEGER, Row: INTEGER, Column: INTEGER)
    IF Row = n THEN
        RETURN
    END IF
    RightDiagonal ← RightDiagonal + arr[Row][Column]
    LeftDiagonal ← LeftDiagonal + arr[Row][n - Column - 1]
    DiagonalDifferenceRecursive(arr, n, RightDiagonal, LeftDiagonal, Row + 1, Column + 1)
END PROCEDURE

PROCEDURE Main
    DECLARE n, RightDiagonal, LeftDiagonal: INTEGER
    READ n
    DECLARE arr: ARRAY[MAX][MAX]
    FOR i FROM 0 TO n - 1 DO
        FOR j FROM 0 TO n - 1 DO
            READ arr[i][j]
        END FOR
    END FOR

    RightDiagonal ← 0
    LeftDiagonal ← 0
    DiagonalDifferenceRecursive(arr, n, RightDiagonal, LeftDiagonal, 0, 0)
    PRINT ABS(RightDiagonal - LeftDiagonal)
END PROCEDURE
