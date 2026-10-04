/*
Assignment 58 - Question 1

Write a program which accept matrix from user and return addition of diagonal elements.

Input:
3 2 5 9
4 3 2 2
8 4 1 5
3 9 7 5

Output:
12
*/

#include <stdio.h>

int AddDiagonal(int Arr[][4], int iRow, int iCol)
{
    int i = 0;
    int iSum = 0;

    for(i = 0; i < iRow && i < iCol; i++)
    {
        iSum = iSum + Arr[i][i];
    }

    return iSum;
}

int main()
{
    int Arr[4][4];
    int i = 0;
    int j = 0;
    int iRet = 0;

    printf("Enter matrix elements:\n");

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    iRet = AddDiagonal(Arr, 4, 4);

    printf("Addition of diagonal elements: %d\n", iRet);

    return 0;
}