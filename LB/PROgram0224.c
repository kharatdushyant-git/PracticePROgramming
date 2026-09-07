/*

Assignmnent 42

Question 4:
Write a recursive program which accept number from user and return smallest digit.

Input:
87983

Output:
3

*/

#include <stdio.h>

int Min(int iNo)
{
    int iDigit = 0;
    int iMin = 0;

    if(iNo == 0)
    {
        return 9;
    }

    iDigit = iNo % 10;

    iMin = Min(iNo / 10);

    if(iDigit < iMin)
    {
        return iDigit;
    }

    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Min(iValue);

    printf("%d", iRet);

    return 0;
}