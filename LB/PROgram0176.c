/*

Q176) Write PROgram that acceept position from user and check whether 
       that bit is on or off and return if its one and 0 if its False 

*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo1, UINT iPosi)
{
    UINT iMask = 0x1;
    UINT iAns = 0;

    iMask <<= (iPosi - 1);

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
    UINT iLocation = 0;
    BOOL bRet = FALSE;

    printf("Enter the First Number is : ");
    scanf("%u",&iValue);

    printf("Enter the Position : ");
    scanf("%u",&iLocation);

    bRet = ChkBit(iValue,iLocation);

    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}