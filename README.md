# Algorithms-Tasks-Spring-2023
### Task ID : 10 Task Name : Diagonal Difference
#### Description : Given  a  square  matrix,  calculate  the  absolute  difference  between  the  sums  of  its diagonals.

### Documentation File : [DocumentationAlgorithmTask.pdf](https://github.com/AhmedFatthy1040/Algorithms-Tasks-Spring-2023/files/11397829/DocumentationAlgorithmTask.pdf)


For example, the square matrix  is shown below:

1 2 3

4 5 6

9 8 9  

The left-to-right diagonal = 1+5+9  =15.
The  right  to left diagonal =3+5+9  =  17.
Their absolute difference is|15-17| = 2.
### Input Format
The first line contains a single integer, n, the number of rows and columns in the square matrix arr.
Each of the next n lines describes a row, arr[i], and consists of n space-separated integers arr[i][j].
### Constraints
-100 < arr[i][j] < 100
### Output Format
Return the absolute difference between the sums of the matrix's two diagonals as a single integer.
### Sample Input
 3
 
 11 2 4
 
 4 5 6
 
 10 8 -12
### Sample Output : 15


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

### Analysis (Time Complexity is O(n) as it's Shown Below)
![Recursive](https://user-images.githubusercontent.com/91102592/235984957-5568e9a6-0297-4409-8574-53ca24b612a5.jpg)


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

### Analysis (Time Complexity is O(n*2) as it's Shown Below)
![Non-Recursive](https://user-images.githubusercontent.com/91102592/235987434-8a3aa06f-5ebc-4f2b-b192-c5f0455e590a.jpg)


#### Output
![Non-Recursive](https://user-images.githubusercontent.com/91102592/235751355-b313823a-8a09-4280-9d9b-fd2edc958fa4.png)

### Video in Arabic to Explain The Algorithms
https://user-images.githubusercontent.com/91102592/236212179-bac2e882-7559-434a-85cc-9b1e2242d5e8.mp4


