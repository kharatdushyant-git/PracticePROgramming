/*
Assignment 59 - Question 5

Write a program which accept matrix and check whether the matrix is Sparse matrix or not.

Sparse matrix is a matrix with the majority of its elements equal to zero.

Input:
1 0 3 0
0 6 0 0
0 0 1 0
9 0 0 9

Output:
True
*/

#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkSparse(int Arr[][4], int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iZeroCount = 0;
    int iTotal = iRow * iCol;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(Arr[i][j] == 0)
            {
                iZeroCount++;
            }
        }
    }

    if(iZeroCount > iTotal / 2)
    {
        return TRUE;
    }

    return FALSE;
}

int main()
{
    int Arr[4][4];
    int i = 0;
    int j = 0;
    BOOL bRet = FALSE;

    printf("Enter matrix elements:\n");

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    bRet = ChkSparse(Arr, 4, 4);

    if(bRet == TRUE)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}