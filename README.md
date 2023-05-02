# Algorithms-Tasks-Spring-2023
### Task ID : 10 Task Name : Diagonal Difference
#### Description : Given  a  square  matrix,  calculate  the  absolute  difference  between  the  sums  of  its diagonals.

## The Pseudo Code of The Recursive Algorithm

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
    
    for i from 0 to n - 1 do
        for j from 0 to n - 1 do
            read arr[i][j]
        end for
    end for
    
    RightDiagonal ← 0
    LeftDiagonal ← 0
    DiagonalDifferenceRecursive(arr, n, RightDiagonal, LeftDiagonal, 0, 0)
    print abs(RightDiagonal - LeftDiagonal)
    
end procedure

#### Output
![Recursive](https://user-images.githubusercontent.com/91102592/235751392-190caf80-6cff-4ab2-aaef-319facd40bc8.png)

## The Pseudo Code of The Non-Recursive Algorithm

const MAX ← 100

procedure main

    declare n, RightDiagonal, LeftDiagonal: integer
    read n
    declare arr: array[MAX][MAX]
    for i from 0 to n - 1 do
        for j from 0 to n - 1 do
            read arr[i][j]
        end for
    end for

    for i from 0 to n - 1 do
        RightDiagonal ← RightDiagonal + arr[i][i]
        LeftDiagonal ← LeftDiagonal + arr[i][n - i - 1]
    end for

    print abs(RightDiagonal - LeftDiagonal)
end procedure

#### Output
![Non-Recursive](https://user-images.githubusercontent.com/91102592/235751355-b313823a-8a09-4280-9d9b-fd2edc958fa4.png)
