/*

Q173) Write PROgram that print the toggled number for 7th number

*/

#include<stdio.h>

typedef unsigned int UINT;

int ModifyBit(UINT iNo1)
{
    UINT iMask = 0x40;
    UINT iAns = 0;
    iAns = iMask ^ iNo1;

    return iAns;

}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the First Number is : ");
    scanf("%u",&iValue);

    iRet = ModifyBit(iValue);

    printf("Toggled Number is : %u",iRet);

    return 0;
}