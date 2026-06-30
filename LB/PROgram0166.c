/*

Q166) Write PROgram that check Whether the 15th bit is on or off

*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo1)
{
    UINT iMask = 0x4000;

    if(iMask & iNo1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

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
        printf("The 15 th bit of given number is <<<ON>>>");
    }
    else
    {
        printf("The 15 th bit of given number is <<<OFF>>>");
    }

    return 0;
}