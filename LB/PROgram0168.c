/*

Q168) Write PROgram that check Whether the 7th,15th,21th,28th bit is on or off

*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo1)
{
    UINT iMask = 0x8104040;
    UINT iAns = 0;
    iAns = iMask & iNo1;

    if(iAns == iMask)
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
        printf("The 7,15,21,28th bit of given number is <<<ON>>>");
    }
    else
    {
        printf("The 7,15,21,28th bit of given number is <<<OFF>>>");
    }

    return 0;
}