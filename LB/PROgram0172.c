/*

Q172) Write PROgram that print the modified number means if 7th and 10th bit is on then turn it off and  vise versa

*/

#include<stdio.h>

typedef unsigned int UINT;

int ModifyBit(UINT iNo1)
{
    UINT iMask = 0x240;
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

    printf("Modified Number is : %u",iRet);

    return 0;
}