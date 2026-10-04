/*
Assignment 58 - Question 3

Write a program which accept matrix and return largest number from both the diagonals.

Input:
3 2 5 9
4 3 2 2
8 4 1 9
3 9 7 5

Output:
9
*/

#include <stdio.h>

int MaxDiagonal(int Arr[][4], int iRow, int iCol)
{
    int i = 0;
    int iMax = Arr[0][0];

    for(i = 0; i < iRow && i < iCol; i++)
    {
        if(Arr[i][i] > iMax)
        {
            iMax = Arr[i][i];
        }

        if(Arr[i][iCol - i - 1] > iMax)
        {
            iMax = Arr[i][iCol - i - 1];
        }
    }

    return iMax;
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

    iRet = MaxDiagonal(Arr, 4, 4);

    printf("Largest number from both diagonals: %d\n", iRet);

    return 0;
}