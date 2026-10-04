/*
Assignment 59 - Question 4

Write a program which accept matrix and check whether the matrix is identity matrix or not.

Identity matrix is a square matrix with 1's along the diagonal from upper left to lower right and 0's in all other positions.

Input:
1 0 0 0
0 1 0 0
0 0 1 0
0 0 0 1

Output:
True
*/

#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkIdentity(int Arr[][4], int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    if(iRow != iCol)
    {
        return FALSE;
    }

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i == j)
            {
                if(Arr[i][j] != 1)
                {
                    return FALSE;
                }
            }
            else
            {
                if(Arr[i][j] != 0)
                {
                    return FALSE;
                }
            }
        }
    }

    return TRUE;
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

    bRet = ChkIdentity(Arr, 4, 4);

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