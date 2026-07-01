/*

Q185) Write a program which accepts one number and range of
      positions from user. Toggle all bits from that range.

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iMask = 0;
    int iCnt = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iMask = iMask | (1 << (iCnt - 1));
    }

    return (iNo ^ iMask);
}

int main()
{
    UINT iValue = 0;
    int iStart = 0, iEnd = 0;
    UINT iRet = 0;

    printf("Enter the number : ");
    scanf("%u",&iValue);

    printf("Enter starting position : ");
    scanf("%d",&iStart);

    printf("Enter ending position : ");
    scanf("%d",&iEnd);

    iRet = ToggleBitRange(iValue,iStart,iEnd);

    printf("Updated number is : %u",iRet);

    return 0;
}