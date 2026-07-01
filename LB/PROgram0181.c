/*

Q181) Write PROgram that accept number from user and count the one inside that number without % and / operator

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT CountBit(UINT iNo1)
{
    UINT iCount = 0;

    while(iNo1 != 0)
    {
        if((iNo1 & 1) == 1)
        {
            iCount++;
        }

        iNo1 >>= 1;
    }

    return iCount;
}

int main()
{
    UINT iValue = 0;
    UINT iLocation = 0;
    UINT iRet = 0;

    printf("Enter the First Number is : ");
    scanf("%u",&iValue);

    iRet = CountBit(iValue);

    printf("Count of 1 is : %u",iRet);

    return 0;
}