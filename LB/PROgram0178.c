/*

Q178) Write PROgram that acceept position from user and turn on that given bit

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo1, UINT iPosi)
{
    UINT iMask = 0x1;
    UINT iAns = 0;

    iMask <<= (iPosi - 1);

    iAns = iMask | iNo1;

    return iAns;

}

int main()
{
    UINT iValue = 0;
    UINT iLocation = 0;
    UINT iRet = 0;

    printf("Enter the First Number is : ");
    scanf("%u",&iValue);

    printf("Enter the Position : ");
    scanf("%u",&iLocation);

    iRet = OnBit(iValue,iLocation);

    printf("Modified Number is : %u",iRet);

    return 0;
}