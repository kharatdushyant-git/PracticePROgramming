/*

Q175) Write PROgram that print the and turns its first 4 bit on

*/

#include<stdio.h>

typedef unsigned int UINT;

int ModifyBit(UINT iNo1)
{
    UINT iMask = 0xf;
    UINT iAns = 0;
    iAns = iMask | iNo1;

    return iAns;

}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the First Number is : ");
    scanf("%u",&iValue);

    iRet = ModifyBit(iValue);

    printf("Modified Number is : %u",iRet);

    return 0;
}