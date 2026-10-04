/*
Assignment 58 - Question 2

Write a program which accept matrix and one number from user and return frequency of that number.

Input:
Number: 9

3 2 5 9
4 3 2 2
8 4 1 9
3 9 7 5

Output:
3
*/

#include <stdio.h>

int Frequency(int Arr[][4], int iRow, int iCol, int iNo)
{
    int i = 0;
    int j = 0;
    int iCount = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(Arr[i][j] == iNo)
            {
                iCount++;
            }
        }
    }

    return iCount;
}

int main()
{
    int Arr[4][4];
    int i = 0;
    int j = 0;
    int iNo = 0;
    int iRet = 0;

    printf("Enter matrix elements:\n");

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    printf("Enter number: ");
    scanf("%d", &iNo);

    iRet = Frequency(Arr, 4, 4, iNo);

    printf("Frequency: %d\n", iRet);

    return 0;
}