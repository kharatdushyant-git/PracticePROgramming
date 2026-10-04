/*
Assignment 59 - Question 2

Write a program which accept matrix and reverse the contents of each row.

Input:
3 2 5 9
4 3 2 2
8 4 1 9
3 9 7 5

Output:
9 5 2 3
2 2 3 4
9 1 4 8
5 7 9 3
*/

#include <stdio.h>

void ReverseRow(int Arr[][4], int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iTemp = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol / 2; j++)
        {
            iTemp = Arr[i][j];
            Arr[i][j] = Arr[i][iCol - j - 1];
            Arr[i][iCol - j - 1] = iTemp;
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

    ReverseRow(Arr, 4, 4);

    printf("Matrix after reversing each row:\n");

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