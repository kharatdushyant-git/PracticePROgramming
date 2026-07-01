/*

Q184) Write a program which accepts one number and two positions
      from user and checks whether the bit at first or second position
      is ON or OFF.

*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
    UINT iMask1 = 0;
    UINT iMask2 = 0;
    UINT iMask = 0;

    iMask1 = 0x00000001;
    iMask2 = 0x00000001;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iMask = iMask1 | iMask2;

    if((iNo & iMask) != 0)
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
    int iPos1 = 0, iPos2 = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%u",&iValue);

    printf("Enter first position : ");
    scanf("%d",&iPos1);

    printf("Enter second position : ");
    scanf("%d",&iPos2);

    bRet = ChkBit(iValue,iPos1,iPos2);

    if(bRet == TRUE)
    {
        printf("Bit is ON");
    }
    else
    {
        printf("Bit is OFF");
    }

    return 0;
}