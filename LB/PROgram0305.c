/*
Assignment 59 - Question 3

Write a program which accept matrix and reverse the contents of each column.

Input:
3 2 5 9
4 3 2 2
8 4 1 9
3 9 7 5

Output:
3 9 7 5
8 4 1 9
4 3 2 2
3 2 5 9
*/

#include <stdio.h>

void ReverseCol(int Arr[][4], int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iTemp = 0;

    for(j = 0; j < iCol; j++)
    {
        for(i = 0; i < iRow / 2; i++)
        {
            iTemp = Arr[i][j];
            Arr[i][j] = Arr[iRow - i - 1][j];
            Arr[iRow - i - 1][j] = iTemp;
        }
    }
}

int main()
{
    int Arr[4][4];
    int i = 0;
    int j = 0;

    printf("Enter matrix elements:\n");

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    ReverseCol(Arr, 4, 4);

    printf("Matrix after reversing each column:\n");

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d\t", Arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}