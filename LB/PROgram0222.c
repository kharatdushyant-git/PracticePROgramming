/*

Assignment 42

Question 2:
Write a recursive program which accept number from user and return largest digit.

Input:
87983

Output:
9

*/

#include <stdio.h>

int Max(int iNo)
{
    int iDigit = 0;
    int iMax = 0;

    if(iNo == 0)
    {
        return 0;
    }

    iDigit = iNo % 10;

    iMax = Max(iNo / 10);

    if(iDigit > iMax)
    {
        return iDigit;
    }

    return iMax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Max(iValue);

    printf("%d", iRet);

    return 0;
}