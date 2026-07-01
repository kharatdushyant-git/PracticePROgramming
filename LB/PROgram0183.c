/*

Q183) Write PROgram that accept number from user and check whether its 9th or 12th bit is on or off

*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo1)
{
    UINT iMask = 0x900;
    return ((iNo1 & iMask) != 0);
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the First Number is : ");
    scanf("%u",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("The 9,12th bit of given number is <<<ON>>>");
    }
    else
    {
        printf("The 9,12th bit of given number is <<<OFF>>>");
    }

    return 0;
}