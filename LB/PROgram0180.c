/*

Q180) Write PROgram that acceept position from user and toggle first and last Nibble of that given number

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo1)
{
    UINT iMask = 0xF000000F;
    UINT iAns = 0;

    iAns = iMask ^ iNo1;

    return iAns;

}

int main()
{
    UINT iValue = 0;
    UINT iLocation = 0;
    UINT iRet = 0;

    printf("Enter the First Number is : ");
    scanf("%u",&iValue);

    iRet = TOggleBit(iValue);

    printf("Modified Number is : %u",iRet);

    return 0;
}