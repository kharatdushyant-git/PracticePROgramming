/*
Assignment 58 - Question 4

Write a program which accept matrix and display addition of elements from each column.

Input:
3 2 5 9
4 3 2 2
8 4 1 9
3 9 7 5

Output:
18 18 15 25
*/

#include <stdio.h>

int AddColumn(int Arr[][4], int iRow, int iCol)
{
    int i = 0;
    int iSum = 0;

    for(i = 0; i < iRow; i++)
    {
        iSum = iSum + Arr[i][iCol];
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

    printf("Addition of each column: ");

    for(j = 0; j < 4; j++)
    {
        iRet = AddColumn(Arr, 4, j);
        printf("%d ", iRet);
    }

    printf("\n");

    return 0;
}