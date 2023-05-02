# Algorithms-Tasks-Spring-2023
Given  a  square  matrix,  calculate  the  absolute  difference  between  the  sums  of  its diagonals.

## This is The Pseudo Code of The Recursive Algorithm

const MAX ← 100

procedure

DiagonalDifferenceRecursive(
arr: array[MAX][MAX],
n: integer,
RightDiagonal: integer,
LeftDiagonal: integer,
Row: integer,
Column: integer)

    if Row = n then
        return
    end if
    
    RightDiagonal ← RightDiagonal + arr[Row][Column]
    LeftDiagonal ← LeftDiagonal + arr[Row][n - Column - 1]
    DiagonalDifferenceRecursive(arr, n, RightDiagonal, LeftDiagonal, Row + 1, Column + 1)
    
end procedure

procedure main

    declare n, RightDiagonal, LeftDiagonal: integer
    read n
    declare arr: array[MAX][MAX]
    
    for i from 0 to n - 1 DO
        for j from 0 to n - 1 DO
            read arr[i][j]
        end for
    end for
    
    RightDiagonal ← 0
    LeftDiagonal ← 0
    DiagonalDifferenceRecursive(arr, n, RightDiagonal, LeftDiagonal, 0, 0)
    print abs(RightDiagonal - LeftDiagonal)
    
end procedure
