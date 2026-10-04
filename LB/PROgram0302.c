/*
Assignment 58 - Question 5

Write a program which accept matrix and swap the contents of consecutive rows.

Input:
3 2 5 9
4 3 2 2
8 4 1 9
3 9 7 5

Output:
4 3 2 2
3 2 5 9
3 9 7 5
8 4 1 9
*/

#include <stdio.h>

void SwapRows(int Arr[][4], int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iTemp = 0;

    for(i = 0; i < iRow - 1; i = i + 2)
    {
        for(j = 0; j < iCol; j++)
        {
            iTemp = Arr[i][j];
            Arr[i][j] = Arr[i + 1][j];
            Arr[i + 1][j] = iTemp;
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

    SwapRows(Arr, 4, 4);

    printf("Matrix after swapping consecutive rows:\n");

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